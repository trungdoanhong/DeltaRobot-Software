from PyQt5.QtWidgets import QGraphicsItem
from PyQt5.QtCore import Qt, QRectF, pyqtSignal, QObject, QPointF
from PyQt5.QtGui import QPainter, QPen, QBrush, QColor, QPainterPath, QRadialGradient
from tool.opencv_processing.ui.style import *

class PortSignals(QObject):
    port_clicked = pyqtSignal(object)  # Signal emitted when port is clicked

class Port(QGraphicsItem):
    def __init__(self, parent=None, is_input=True):
        super().__init__(parent)
        self.is_input = is_input
        self.radius = 8
        self.connections = []
        self.data = None
        self.signals = PortSignals()
        self.port_clicked = self.signals.port_clicked
        self.is_highlighted = False
        self.is_selected = False
        
        self.setAcceptHoverEvents(True)
        self.setFlag(QGraphicsItem.ItemIsSelectable)
        self.setFlag(QGraphicsItem.ItemSendsScenePositionChanges)
        
    def boundingRect(self):
        return QRectF(-self.radius*2, -self.radius*2,
                     4 * self.radius, 4 * self.radius)
                     
    def paint(self, painter, option, widget):
        # Create gradient for port
        gradient = QRadialGradient(0, 0, self.radius)
        
        # Different appearance based on state
        if self.is_selected:
            # Selected state - brightest
            gradient.setColorAt(0, PORT_HOVER_COLOR.lighter(150))
            gradient.setColorAt(1, PORT_HOVER_COLOR)
            # Add strong glow effect
            glow = QPainterPath()
            glow.addEllipse(-self.radius*2, -self.radius*2,
                           self.radius*4, self.radius*4)
            painter.fillPath(glow, QBrush(PORT_HOVER_COLOR.lighter(150)))
        elif self.is_highlighted or self.isUnderMouse():
            # Highlighted/hover state
            gradient.setColorAt(0, PORT_HOVER_COLOR)
            gradient.setColorAt(1, PORT_HOVER_COLOR.darker(120))
            # Add subtle glow effect
            glow = QPainterPath()
            glow.addEllipse(-self.radius*1.5, -self.radius*1.5,
                           self.radius*3, self.radius*3)
            painter.fillPath(glow, QBrush(PORT_HOVER_COLOR.lighter(120)))
        else:
            # Normal state
            gradient.setColorAt(0, PORT_COLOR)
            gradient.setColorAt(1, PORT_COLOR.darker(150))
            
        # Draw port
        port_path = QPainterPath()
        port_path.addEllipse(-self.radius, -self.radius,
                            2*self.radius, 2*self.radius)
        painter.fillPath(port_path, QBrush(gradient))
        
        # Draw border
        painter.setPen(QPen(Qt.black, 1))
        painter.drawPath(port_path)
        
    def mousePressEvent(self, event):
        if event.button() == Qt.LeftButton:
            # Don't set selection state here, let NodeEditor handle it
            self.port_clicked.emit(self)
            event.accept()
        super().mousePressEvent(event)
        
    def mouseReleaseEvent(self, event):
        if event.button() == Qt.LeftButton:
            self.is_highlighted = False
            self.update()
        super().mouseReleaseEvent(event)
        
    def add_connection(self, connection):
        if connection not in self.connections:
            self.connections.append(connection)
            # Clear selection state when connection is made
            self.is_selected = False
            self.is_highlighted = False
            self.update()
        
    def remove_connection(self, connection):
        if connection in self.connections:
            self.connections.remove(connection)
            self.update()
            
    def clear_selection(self):
        """Clear the selection state of the port"""
        self.is_selected = False
        self.is_highlighted = False
        self.update()
        
    def get_data(self):
        return self.data
        
    def set_data(self, data):
        self.data = data
        # Propagate data to connected ports
        for connection in self.connections:
            if connection.source_port == self:
                connection.target_port.set_data(data)
                
    def itemChange(self, change, value):
        if change == QGraphicsItem.ItemScenePositionHasChanged:
            for connection in self.connections:
                connection.update_position()
        return super().itemChange(change, value)
                
class Connection(QGraphicsItem):
    def __init__(self, source_port, target_port):
        super().__init__()
        self.source_port = source_port
        self.target_port = target_port
        self.source_pos = source_port.scenePos()
        self.target_pos = target_port.scenePos()
        
        # Make connection selectable and focusable
        self.setFlag(QGraphicsItem.ItemIsSelectable)
        self.setAcceptHoverEvents(True)
        self.setZValue(-1)  # Draw connections behind nodes
        
    def boundingRect(self):
        # Create larger bounding rect for hover detection
        rect = QRectF(self.source_pos, self.target_pos).normalized()
        rect.adjust(-20, -20, 20, 20)  # Add padding for bezier curve
        return rect
        
    def paint(self, painter, option, widget):
        # Calculate control points for bezier curve
        dx = self.target_pos.x() - self.source_pos.x()
        control1 = QPointF(self.source_pos.x() + dx * 0.5, self.source_pos.y())
        control2 = QPointF(self.target_pos.x() - dx * 0.5, self.target_pos.y())
        
        # Create path for connection
        path = QPainterPath(self.source_pos)
        path.cubicTo(control1, control2, self.target_pos)
        
        # Draw connection with different styles based on state
        if self.isSelected():
            # Selected state
            glow_pen = QPen(CONNECTION_COLOR.lighter(150), 6)
            painter.strokePath(path, glow_pen)
            pen = QPen(CONNECTION_COLOR.lighter(200), 2, Qt.SolidLine, Qt.RoundCap, Qt.RoundJoin)
        elif self.isUnderMouse():
            # Hover state
            glow_pen = QPen(CONNECTION_COLOR.lighter(150), 4)
            painter.strokePath(path, glow_pen)
            pen = QPen(CONNECTION_COLOR, 2, Qt.SolidLine, Qt.RoundCap, Qt.RoundJoin)
        else:
            # Normal state
            pen = QPen(CONNECTION_COLOR, 2, Qt.SolidLine, Qt.RoundCap, Qt.RoundJoin)
        
        painter.strokePath(path, pen)
        
    def mousePressEvent(self, event):
        super().mousePressEvent(event)
        if event.button() == Qt.LeftButton:
            self.setSelected(True)
            event.accept()
            
    def update_position(self):
        self.source_pos = self.source_port.scenePos()
        self.target_pos = self.target_port.scenePos()
        self.update() 