from PyQt5.QtWidgets import (QGraphicsView, QGraphicsScene, QVBoxLayout, QWidget,
                            QMainWindow, QMenuBar, QMenu, QAction, QFileDialog, QMessageBox)
from PyQt5.QtCore import Qt, QTimer
from .project.project_manager import ProjectManager

class NodeEditor(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("OpenCV Processing Tool")
        
        # Create central widget and layout
        self.central_widget = QWidget()
        self.setCentralWidget(self.central_widget)
        self.layout = QVBoxLayout(self.central_widget)
        
        # Create menu bar
        self.create_menu_bar()
        
        # Create scene and view
        self.scene = QGraphicsScene()
        self.view = QGraphicsView(self.scene)
        self.view.setRenderHint(QPainter.Antialiasing)
        self.view.setViewportUpdateMode(QGraphicsView.FullViewportUpdate)
        self.view.setHorizontalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
        self.view.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOff)
        self.view.setTransformationAnchor(QGraphicsView.AnchorUnderMouse)
        self.view.setDragMode(QGraphicsView.RubberBandDrag)
        
        self.layout.addWidget(self.view)
        
        # Initialize project manager
        self.project_manager = ProjectManager()
        self.project_manager.project_loaded.connect(self.on_project_loaded)
        self.project_manager.project_saved.connect(self.on_project_saved)
        
        # Setup auto-save timer
        self.auto_save_timer = QTimer()
        self.auto_save_timer.timeout.connect(self.auto_save)
        if self.project_manager.auto_save:
            self.auto_save_timer.start(self.project_manager.auto_save_interval * 1000)
            
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
        
    def new_project(self):
        """Create new project"""
        if self.maybe_save():
            self.scene.clear()
            self.project_manager.current_project = None
            
    def open_project(self):
        """Open existing project"""
        if self.maybe_save():
            filepath, _ = QFileDialog.getOpenFileName(
                self,
                "Open Project",
                "",
                "OpenCV Processing Tool Projects (*.cvp);;All Files (*)"
            )
            if filepath:
                self.project_manager.load_project(self, filepath)
                
    def save_project(self):
        """Save current project"""
        if self.project_manager.current_project:
            self.project_manager.save_project(self, self.project_manager.current_project)
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
            self.project_manager.save_project(self, filepath)
            
    def auto_save(self):
        """Auto-save current project"""
        if (self.project_manager.auto_save and 
            self.project_manager.current_project and 
            len(self.scene.items()) > 0):
            self.project_manager.save_project(self, self.project_manager.current_project)
            
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
                return self.save_project()
            elif reply == QMessageBox.Cancel:
                return False
                
        return True
        
    def clear_scene(self):
        """Clear all nodes from scene"""
        if self.maybe_save():
            self.scene.clear()
            
    def on_project_loaded(self, filepath):
        """Handle project loaded signal"""
        self.setWindowTitle(f"OpenCV Processing Tool - {os.path.basename(filepath)}")
        
    def on_project_saved(self, filepath):
        """Handle project saved signal"""
        self.setWindowTitle(f"OpenCV Processing Tool - {os.path.basename(filepath)}")
        
    def closeEvent(self, event):
        """Handle application close"""
        if self.maybe_save():
            event.accept()
        else:
            event.ignore() 