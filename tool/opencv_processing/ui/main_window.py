from PyQt5.QtWidgets import (QMainWindow, QWidget, QVBoxLayout, QHBoxLayout, 
                            QToolBar, QAction, QDockWidget, QLabel, QScrollArea,
                            QPushButton, QSpinBox, QComboBox, QSizePolicy, QFileDialog)
from PyQt5.QtCore import Qt, QPoint, QTimer
from PyQt5.QtGui import QImage, QPixmap
from tool.opencv_processing.ui.node_editor import NodeEditor
from tool.opencv_processing.ui.toolbar import ToolBar
from tool.opencv_processing.ui.style import MAIN_STYLE
import cv2
import os

class PropertiesPanel(QDockWidget):
    def __init__(self, parent=None):
        super().__init__("Properties", parent)
        self.setFeatures(QDockWidget.DockWidgetFloatable | 
                        QDockWidget.DockWidgetMovable)
        self.setMinimumWidth(400)  # Set minimum width for panel
        
        # Set panel style
        self.setStyleSheet("""
            QDockWidget {
                color: white;
                border: none;
            }
            QDockWidget::title {
                background: #2D2D2D;
                padding: 8px;
                border-bottom: 2px solid #383B4F;
            }
        """)
        
        # Create scroll area for content
        self.scroll = QScrollArea()
        self.scroll.setWidgetResizable(True)
        self.scroll.setStyleSheet("""
            QScrollArea {
                background-color: #2D2D2D;
                border: none;
            }
            QScrollBar:vertical {
                background-color: #2D2D2D;
                width: 12px;
                margin: 0px;
            }
            QScrollBar::handle:vertical {
                background-color: #383B4F;
                min-height: 20px;
                border-radius: 6px;
                margin: 2px;
            }
            QScrollBar::handle:vertical:hover {
                background-color: #434760;
            }
            QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
                height: 0px;
            }
            QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {
                background: none;
            }
            QPushButton {
                background-color: #383B4F;
                color: white;
                border: none;
                padding: 8px 16px;
                border-radius: 4px;
            }
            QPushButton:hover {
                background-color: #434760;
            }
            QPushButton:pressed {
                background-color: #525E82;
            }
            QLabel {
                color: white;
            }
            QSpinBox {
                background-color: #383B4F;
                color: white;
                border: 1px solid #434760;
                padding: 4px;
                border-radius: 4px;
            }
            QSpinBox:hover {
                border-color: #525E82;
            }
        """)
        
        # Create content widget with padding
        self.content = QWidget()
        self.content.setStyleSheet("""
            QWidget {
                background-color: #2D2D2D;
            }
        """)
        self.content_layout = QVBoxLayout(self.content)
        self.content_layout.setAlignment(Qt.AlignTop)
        self.content_layout.setContentsMargins(12, 12, 12, 12)
        self.content_layout.setSpacing(8)
        self.scroll.setWidget(self.content)
        self.setWidget(self.scroll)
        
        # Create default label
        self.create_default_content()
        
        # Store current node and preview widgets
        self.current_node = None
        self.preview_label = None
        self.warp_preview = None
        self.is_selecting_points = False
        self.warp_points = []
        
    def create_default_content(self):
        # Clear current content
        while self.content_layout.count():
            item = self.content_layout.takeAt(0)
            if item.widget():
                item.widget().deleteLater()
        
        # Add default label
        self.default_label = QLabel("Select a node to view properties")
        self.default_label.setStyleSheet("color: white; padding: 10px;")
        self.content_layout.addWidget(self.default_label)
        
    def get_node_image(self, node):
        """Get image data from node based on its type"""
        try:
            if hasattr(node, 'title'):
                if node.title == "Camera Input":
                    # For camera node, get output data
                    if hasattr(node, 'get_output_data'):
                        return node.get_output_data(0)
                elif node.title == "Warp Perspective":
                    # For warp node, show warped result if points are set
                    if hasattr(node, 'points') and len(node.points) == 4:
                        # Get warped output
                        if hasattr(node, 'get_output_data'):
                            warped = node.get_output_data(0)
                            if warped is not None:
                                return warped
                    # Fall back to input image if no points or warped result
                    return node.get_input_data(0)
                else:
                    # For other nodes, try to get output first, then input
                    if hasattr(node, 'get_output_data'):
                        img = node.get_output_data(0)
                        if img is not None:
                            return img
                    return node.get_input_data(0)
        except Exception as e:
            print(f"Error getting image: {str(e)}")
        return None
        
    def create_preview_widget(self, node):
        # Create preview widget that fills panel width
        preview = QLabel()
        preview.setMinimumSize(380, 380)  # Larger minimum size
        preview.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
        preview.setAlignment(Qt.AlignCenter)
        preview.setStyleSheet("background-color: black; padding: 5px;")
        
        # Get and display image
        self.update_preview(preview, node)
        return preview
        
    def setup_warp_controls(self, node):
        # Create warp control widget
        control_widget = QWidget()
        control_layout = QVBoxLayout(control_widget)
        
        # Add preview label with mouse tracking
        preview = QLabel()
        preview.setMinimumSize(380, 380)  # Larger minimum size
        preview.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
        preview.setAlignment(Qt.AlignCenter)
        preview.setStyleSheet("background-color: black; padding: 5px;")
        preview.setMouseTracking(True)
        preview.mousePressEvent = lambda e: self.warp_preview_clicked(e, node)
        control_layout.addWidget(preview)
        self.warp_preview = preview
        
        # Add controls
        controls = QHBoxLayout()
        
        # Add set points button
        set_points_btn = QPushButton("Set Points")
        set_points_btn.clicked.connect(lambda: self.start_point_selection(node))
        controls.addWidget(set_points_btn)
        
        # Add reset points button
        reset_points_btn = QPushButton("Reset Points")
        reset_points_btn.clicked.connect(lambda: self.reset_warp_points(node))
        controls.addWidget(reset_points_btn)
        
        control_layout.addLayout(controls)
        
        # Add status label
        self.warp_status = QLabel("Click 'Set Points' to start selection")
        self.warp_status.setStyleSheet("color: white;")
        control_layout.addWidget(self.warp_status)
        
        return control_widget
        
    def start_point_selection(self, node):
        self.is_selecting_points = True
        self.warp_points = []
        node.points = []
        node.image = node.get_input_data(0)
        if node.image is not None:
            self.warp_status.setText("Select 4 points in the preview (0/4)")
            self.update_preview(self.warp_preview, node)
            
    def warp_preview_clicked(self, event, node):
        if not self.is_selecting_points:
            return
            
        # Convert click coordinates to image coordinates
        preview_size = self.warp_preview.size()
        image_size = node.image.shape[:2][::-1]  # Convert to (width, height)
        
        # Calculate scaling factor and offset
        scale = min(preview_size.width() / image_size[0],
                   preview_size.height() / image_size[1])
        offset_x = (preview_size.width() - scale * image_size[0]) / 2
        offset_y = (preview_size.height() - scale * image_size[1]) / 2
        
        # Convert click coordinates to image coordinates
        x = int((event.x() - offset_x) / scale)
        y = int((event.y() - offset_y) / scale)
        
        # Check if click is within image bounds
        if 0 <= x < image_size[0] and 0 <= y < image_size[1]:
            self.warp_points.append([x, y])
            node.points = self.warp_points.copy()
            
            # Update status and preview
            points_left = 4 - len(self.warp_points)
            if points_left > 0:
                self.warp_status.setText(f"Select 4 points in the preview ({len(self.warp_points)}/4)")
                self.update_preview(self.warp_preview, node)
            else:
                self.warp_status.setText("Points set successfully")
                self.is_selecting_points = False
                # Process image and force multiple preview updates
                node.process_image()
                # Update preview multiple times to ensure it shows the warped result
                QTimer.singleShot(100, lambda: self.update_preview(self.warp_preview, node))
                QTimer.singleShot(300, lambda: self.update_preview(self.warp_preview, node))
                QTimer.singleShot(500, lambda: self.update_preview(self.warp_preview, node))
            
    def reset_warp_points(self, node):
        self.is_selecting_points = False
        self.warp_points = []
        if hasattr(node, 'points'):
            node.points = []
            node.image = None
            node.process_image()
        self.warp_status.setText("Points reset. Click 'Set Points' to start selection")
        self.update_preview(self.warp_preview, node)
        
    def update_preview(self, preview_label, node):
        if not preview_label or not node:
            return
            
        try:
            # Get image based on node type and state
            if node.title == "Warp Perspective":
                if self.is_selecting_points:
                    # During point selection, show input image with points
                    image = node.image.copy() if hasattr(node, 'image') and node.image is not None else node.get_input_data(0)
                    if image is not None and hasattr(node, 'points'):
                        # Draw points on image
                        for i, point in enumerate(node.points):
                            cv2.circle(image, tuple(point), 5, (0, 255, 0), -1)
                            cv2.putText(image, str(i+1), (point[0]+10, point[1]+10),
                                      cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)
                else:
                    # Not selecting points - get warped result if available
                    image = self.get_node_image(node)
            else:
                # Get processed image or input image for other nodes
                image = self.get_node_image(node)
                
            if image is not None:
                # Convert image to RGB format
                if len(image.shape) == 3:
                    image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
                
                # Create QImage from numpy array
                height, width = image.shape[:2]
                bytes_per_line = 3 * width
                q_image = QImage(image.data, width, height, bytes_per_line, QImage.Format_RGB888)
                
                # Scale image to fit label while maintaining aspect ratio
                pixmap = QPixmap.fromImage(q_image)
                scaled_pixmap = pixmap.scaled(preview_label.size(),
                                            Qt.KeepAspectRatio,
                                            Qt.SmoothTransformation)
                
                # Center the pixmap in the label
                preview_label.setPixmap(scaled_pixmap)
                
        except Exception as e:
            print(f"Error updating preview: {str(e)}")
            
    def update_current_preview(self):
        """Update preview of current node"""
        try:
            if self.current_node and hasattr(self.current_node, 'title'):
                if self.current_node.title == "Warp Perspective" and self.warp_preview:
                    self.update_preview(self.warp_preview, self.current_node)
                elif self.preview_label:
                    self.update_preview(self.preview_label, self.current_node)
        except Exception as e:
            print(f"Error in update_current_preview: {str(e)}")

    def update_properties(self, node):
        # Clear current content
        while self.content_layout.count():
            item = self.content_layout.takeAt(0)
            if item.widget():
                item.widget().deleteLater()
                
        # Store current node
        self.current_node = node
        self.preview_label = None
        self.warp_preview = None
                
        # Check if node exists and is a BaseNode (not a Port)
        if node and hasattr(node, 'title') and not node.scene().items().count(node) == 0:
            # Add node title
            title = QLabel(node.title)
            title.setStyleSheet("color: white; font-size: 14px; font-weight: bold; padding: 5px;")
            self.content_layout.addWidget(title)
            
            # Add preview and controls based on node type
            if node.title == "Warp Perspective":
                warp_widget = self.setup_warp_controls(node)
                self.content_layout.addWidget(warp_widget)
            else:
                preview = self.create_preview_widget(node)
                self.preview_label = preview
                self.content_layout.addWidget(preview)
            
            # Add node info
            info = QLabel(f"Position: ({node.pos().x():.0f}, {node.pos().y():.0f})")
            info.setStyleSheet("color: white; padding: 5px;")
            self.content_layout.addWidget(info)
            
            # Add node type info
            type_info = QLabel(f"Type: {node.__class__.__name__}")
            type_info.setStyleSheet("color: white; padding: 5px;")
            self.content_layout.addWidget(type_info)
            
            # Add ports info
            ports_info = QLabel(f"Input Ports: {len(node.input_ports)}\nOutput Ports: {len(node.output_ports)}")
            ports_info.setStyleSheet("color: white; padding: 5px;")
            self.content_layout.addWidget(ports_info)
        else:
            self.create_default_content()

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("OpenCV Processing Tool")
        self.setStyleSheet(MAIN_STYLE)
        
        # Create menu bar first
        self.create_menu_bar()
        
        self.setup_ui()
        self.setup_connections()
        
        # Add timer for properties update
        self.update_timer = QTimer()
        self.update_timer.timeout.connect(self.update_previews)
        self.update_timer.start(33)  # Update at ~30 FPS
        
    def create_menu_bar(self):
        """Create menu bar with file and edit menus"""
        menubar = self.menuBar()
        
        # File menu
        file_menu = menubar.addMenu('File')
        
        new_action = QAction('New Project', self)
        new_action.setShortcut('Ctrl+N')
        new_action.triggered.connect(self.new_project)
        file_menu.addAction(new_action)
        
        open_action = QAction('Open Project...', self)
        open_action.setShortcut('Ctrl+O')
        open_action.triggered.connect(self.open_project)
        file_menu.addAction(open_action)
        
        save_action = QAction('Save Project', self)
        save_action.setShortcut('Ctrl+S')
        save_action.triggered.connect(self.save_project)
        file_menu.addAction(save_action)
        
        save_as_action = QAction('Save Project As...', self)
        save_as_action.setShortcut('Ctrl+Shift+S')
        save_as_action.triggered.connect(self.save_project_as)
        file_menu.addAction(save_as_action)
        
        file_menu.addSeparator()
        
        exit_action = QAction('Exit', self)
        exit_action.setShortcut('Ctrl+Q')
        exit_action.triggered.connect(self.close)
        file_menu.addAction(exit_action)
        
        # Edit menu
        edit_menu = menubar.addMenu('Edit')
        
        clear_action = QAction('Clear All', self)
        clear_action.setShortcut('Ctrl+Shift+C')
        clear_action.triggered.connect(self.clear_scene)
        edit_menu.addAction(clear_action)
        
    def setup_ui(self):
        # Create central widget and layout
        self.central_widget = QWidget()
        self.setCentralWidget(self.central_widget)
        self.main_layout = QHBoxLayout(self.central_widget)
        self.main_layout.setContentsMargins(0, 0, 0, 0)
        self.main_layout.setSpacing(0)
        
        # Create toolbar
        self.toolbar = ToolBar()
        self.addToolBar(Qt.LeftToolBarArea, self.toolbar)
        
        # Create node editor
        self.node_editor = NodeEditor()
        self.main_layout.addWidget(self.node_editor)
        
        # Create properties panel
        self.properties = PropertiesPanel()
        self.addDockWidget(Qt.RightDockWidgetArea, self.properties)
        
        # Set window size
        self.resize(1200, 800)
        
    def setup_connections(self):
        # Connect toolbar's node_created signal to create_node slot
        self.toolbar.node_created.connect(self.create_node)
        
        # Connect node selection to properties panel
        self.node_editor.scene.selectionChanged.connect(self.update_properties)
        
    def create_node(self, node_type):
        # Calculate center position for new node
        view_center = self.node_editor.view.viewport().rect().center()
        scene_pos = self.node_editor.view.mapToScene(view_center)
        self.node_editor.add_node(node_type, scene_pos)
        
    def update_properties(self):
        """Update properties panel with selected node info"""
        try:
            if self.node_editor and self.node_editor.scene:
                selected = self.node_editor.scene.selectedItems()
                if selected:
                    self.properties.update_properties(selected[0])
                else:
                    self.properties.update_properties(None)
        except RuntimeError:
            # Handle case where Qt objects have been deleted
            pass
            
    def update_previews(self):
        """Update all previews in properties panel"""
        try:
            if hasattr(self, 'properties'):
                self.properties.update_current_preview()
        except RuntimeError:
            # Handle case where Qt objects have been deleted
            pass
            
    def new_project(self):
        """Create new project"""
        if self.node_editor.maybe_save():
            self.node_editor.scene.clear()
            self.node_editor.project_manager.current_project = None
            self.setWindowTitle("OpenCV Processing Tool")
            
    def open_project(self):
        """Open existing project"""
        if self.node_editor.maybe_save():
            filepath, _ = QFileDialog.getOpenFileName(
                self,
                "Open Project",
                "",
                "OpenCV Processing Tool Projects (*.cvp);;All Files (*)"
            )
            if filepath:
                if self.node_editor.project_manager.load_project(self.node_editor, filepath):
                    self.setWindowTitle(f"OpenCV Processing Tool - {os.path.basename(filepath)}")
                
    def save_project(self):
        """Save current project"""
        if self.node_editor.project_manager.current_project:
            if self.node_editor.project_manager.save_project(self.node_editor, 
                                                           self.node_editor.project_manager.current_project):
                self.setWindowTitle(f"OpenCV Processing Tool - {os.path.basename(self.node_editor.project_manager.current_project)}")
        else:
            self.save_project_as()
            
    def save_project_as(self):
        """Save project with new name"""
        filepath, _ = QFileDialog.getSaveFileName(
            self,
            "Save Project As",
            "",
            "OpenCV Processing Tool Projects (*.cvp);;All Files (*)"
        )
        if filepath:
            if not filepath.endswith('.cvp'):
                filepath += '.cvp'
            if self.node_editor.project_manager.save_project(self.node_editor, filepath):
                self.setWindowTitle(f"OpenCV Processing Tool - {os.path.basename(filepath)}")
                
    def clear_scene(self):
        """Clear all nodes from scene"""
        if self.node_editor.maybe_save():
            self.node_editor.scene.clear()
            self.setWindowTitle("OpenCV Processing Tool")
            
    def closeEvent(self, event):
        """Handle application close"""
        if self.node_editor.maybe_save():
            event.accept()
        else:
            event.ignore() 