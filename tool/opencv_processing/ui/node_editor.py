from PyQt5.QtWidgets import (QGraphicsView, QGraphicsScene, QVBoxLayout, QWidget,
                            QMainWindow, QMenuBar, QMenu, QAction, QFileDialog, QMessageBox)
from PyQt5.QtCore import Qt, QTimer, QRectF, QPointF
from PyQt5.QtGui import QPainter, QPen, QBrush, QPainterPath
import os
from tool.opencv_processing.project.project_manager import ProjectManager
from tool.opencv_processing.nodes.node_factory import NodeFactory
from tool.opencv_processing.nodes.port import Connection
from tool.opencv_processing.ui.style import *

class NodeEditor(QWidget):
    def __init__(self):
        super().__init__()
        
        # Create layout
        self.layout = QVBoxLayout(self)
        self.layout.setContentsMargins(0, 0, 0, 0)
        
        # Create scene and view
        self.scene = QGraphicsScene()
        self.scene.setBackgroundBrush(BACKGROUND_COLOR)
        self.scene.setSceneRect(QRectF(-2000, -2000, 4000, 4000))
        
        self.view = QGraphicsView(self.scene)
        self.view.setRenderHint(QPainter.Antialiasing)
        self.view.setViewportUpdateMode(QGraphicsView.FullViewportUpdate)
        self.view.setHorizontalScrollBarPolicy(Qt.ScrollBarAlwaysOn)
        self.view.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOn)
        self.view.setTransformationAnchor(QGraphicsView.AnchorUnderMouse)
        self.view.setResizeAnchor(QGraphicsView.AnchorUnderMouse)
        self.view.setRubberBandSelectionMode(Qt.IntersectsItemShape)
        
        # Enable context menu
        self.view.setContextMenuPolicy(Qt.CustomContextMenu)
        self.view.customContextMenuRequested.connect(self.show_context_menu)
        
        # Draw grid
        self.draw_grid()
        
        self.layout.addWidget(self.view)
        
        # Initialize node factory
        self.node_factory = NodeFactory()
        self.temp_connection = None
        self.source_port = None
        self.selected_ports = []
        
        # Initialize project manager
        self.project_manager = ProjectManager()
        
    def draw_grid(self):
        grid_size = 50
        grid_pen = QPen(GRID_COLOR)
        grid_pen.setWidth(1)
        
        left = int(self.scene.sceneRect().left())
        right = int(self.scene.sceneRect().right())
        top = int(self.scene.sceneRect().top())
        bottom = int(self.scene.sceneRect().bottom())
        
        # Draw vertical lines
        for x in range(left, right, grid_size):
            self.scene.addLine(x, top, x, bottom, grid_pen)
            
        # Draw horizontal lines
        for y in range(top, bottom, grid_size):
            self.scene.addLine(left, y, right, y, grid_pen)
            
    def add_node(self, node_type, position=None):
        node = self.node_factory.create_node(node_type)
        if node:
            self.scene.addItem(node)
            if position:
                # Snap to grid
                grid_size = 50
                x = round(position.x() / grid_size) * grid_size
                y = round(position.y() / grid_size) * grid_size
                node.setPos(x - node.width/2, y - node.height/2)
                
            # Connect port signals
            for port in node.input_ports + node.output_ports:
                port.port_clicked.connect(self.handle_port_clicked)
                
            return node
        return None
        
    def handle_port_clicked(self, port):
        # Clear previous port selections first
        self.clear_port_selections()
        
        if not self.source_port:
            if not port.is_input:  # Only start connection from output ports
                self.source_port = port
                self.selected_ports.append(port)
                port.is_selected = True
                port.update()
                # Create temporary connection line
                self.temp_connection = self.scene.addLine(
                    port.scenePos().x(), port.scenePos().y(),
                    port.scenePos().x(), port.scenePos().y(),
                    QPen(CONNECTION_COLOR, 2, Qt.SolidLine, Qt.RoundCap, Qt.RoundJoin)
                )
        else:
            if port.is_input and port != self.source_port:  # Only connect to input ports
                # Create actual connection
                connection = Connection(self.source_port, port)
                self.scene.addItem(connection)
                self.source_port.add_connection(connection)
                port.add_connection(connection)
                
            # Clean up temporary connection
            if self.temp_connection:
                self.scene.removeItem(self.temp_connection)
                self.temp_connection = None
            self.source_port = None
            
            # Clear all port selections
            self.clear_port_selections()
            
    def clear_port_selections(self):
        """Clear selection state of all selected ports"""
        for port in self.selected_ports:
            port.is_selected = False
            port.is_highlighted = False
            port.update()
        self.selected_ports.clear()
            
    def mouseMoveEvent(self, event):
        super().mouseMoveEvent(event)
        if self.temp_connection and self.source_port:
            # Update temporary connection line with bezier curve
            source_pos = self.source_port.scenePos()
            target_pos = self.view.mapToScene(event.pos())
            
            # Calculate control points for bezier curve
            dx = target_pos.x() - source_pos.x()
            control1 = QPointF(source_pos.x() + dx * 0.5, source_pos.y())
            control2 = QPointF(target_pos.x() - dx * 0.5, target_pos.y())
            
            path = QPainterPath(source_pos)
            path.cubicTo(control1, control2, target_pos)
            
            if self.temp_connection:
                self.scene.removeItem(self.temp_connection)
            
            self.temp_connection = self.scene.addPath(
                path,
                QPen(CONNECTION_COLOR, 2, Qt.SolidLine, Qt.RoundCap, Qt.RoundJoin)
            )
            
    def mousePressEvent(self, event):
        # Clear port selections before handling the event
        self.clear_port_selections()
        
        # Cancel any ongoing connection
        if self.temp_connection:
            self.scene.removeItem(self.temp_connection)
            self.temp_connection = None
            self.source_port = None
            
        super().mousePressEvent(event)
        
    def mouseReleaseEvent(self, event):
        super().mouseReleaseEvent(event)
        # If clicked on empty space, clear port selections
        if not self.scene.selectedItems():
            self.clear_port_selections()
            
    def keyPressEvent(self, event):
        if event.key() == Qt.Key_Delete:
            self.delete_selected_nodes()
        super().keyPressEvent(event)
        
    def delete_selected_nodes(self):
        for item in self.scene.selectedItems():
            if isinstance(item, Connection):
                # Remove connection from ports
                item.source_port.remove_connection(item)
                item.target_port.remove_connection(item)
                self.scene.removeItem(item)
            else:  # Node
                try:
                    # Remove all connections from node's ports
                    if hasattr(item, 'input_ports') and hasattr(item, 'output_ports'):
                        for port in item.input_ports + item.output_ports:
                            for connection in port.connections[:]:  # Use slice to avoid modifying list during iteration
                                connection.source_port.remove_connection(connection)
                                connection.target_port.remove_connection(connection)
                                self.scene.removeItem(connection)
                        self.scene.removeItem(item)
                except Exception as e:
                    print(f"Error deleting node: {str(e)}")
                    
    def show_context_menu(self, position):
        menu = QMenu()
        delete_action = menu.addAction("Delete")
        delete_action.triggered.connect(self.delete_selected_nodes)
        
        # Show menu at cursor position
        menu.exec_(self.view.mapToGlobal(position))
        
    def maybe_save(self):
        """Check if current project needs to be saved"""
        if len(self.scene.items()) > 0:
            reply = QMessageBox.question(
                self,
                "Save Project",
                "Do you want to save the current project?",
                QMessageBox.Save | QMessageBox.Discard | QMessageBox.Cancel
            )
            
            if reply == QMessageBox.Save:
                return True
            elif reply == QMessageBox.Cancel:
                return False
                
        return True 