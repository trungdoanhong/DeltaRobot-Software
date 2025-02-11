from PyQt5.QtWidgets import QToolBar, QAction
from PyQt5.QtGui import QIcon
from PyQt5.QtCore import pyqtSignal, Qt

class ToolBar(QToolBar):
    node_created = pyqtSignal(str)  # Signal emitted when a node is created
    
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Tools")
        self.setOrientation(Qt.Vertical)
        self.setup_actions()
        
    def setup_actions(self):
        # Source nodes
        self.add_action("Camera", "source", "Camera Input - Capture from webcam")
        self.add_action("Image", "source", "Image Input - Load from file")
        self.add_action("Video", "source", "Video Input - Load from video file")
        
        self.addSeparator()
        
        # Processing nodes
        self.add_action("Resize", "processing", "Resize - Change image dimensions")
        self.add_action("Warp", "processing", "Warp Perspective - Transform image perspective")
        self.add_action("Crop", "processing", "Crop - Cut region of interest")
        self.add_action("HSV", "processing", "HSV Filter - Color filtering in HSV space")
        self.add_action("Contours", "processing", "Find Contours - Detect object boundaries")
        self.add_action("DrawContours", "processing", "Draw Contours - Visualize detected contours")
        self.add_action("ContourInfo", "processing", "Contour Info - Display contour measurements")
        
        self.addSeparator()
        
        # Output nodes
        self.add_action("Display", "output", "Display Output - Show processed image")
        self.add_action("Save", "output", "Save Output - Save to file")
        
    def add_action(self, name, node_type, tooltip):
        action = QAction(name, self)
        action.setToolTip(tooltip)
        action.triggered.connect(lambda: self.node_created.emit(node_type + ":" + name))
        self.addAction(action) 