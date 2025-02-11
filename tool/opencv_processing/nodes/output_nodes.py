from PyQt5.QtWidgets import QLabel, QPushButton, QFileDialog, QVBoxLayout, QWidget
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QImage, QPixmap
import cv2
import numpy as np
from .base_node import BaseNode
from .port import Port

class DisplayNode(BaseNode):
    def __init__(self):
        super().__init__(title="Display Output", width=200, height=250)
        
        # Add input port
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
    def setup_content(self, layout):
        # Create image display label
        self.image_label = QLabel()
        self.image_label.setMinimumSize(180, 180)
        self.image_label.setAlignment(Qt.AlignCenter)
        self.image_label.setStyleSheet("background-color: black;")
        layout.addWidget(self.image_label)
        
    def _process_image(self):
        image = self.get_input_data(0)
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
            scaled_pixmap = pixmap.scaled(self.image_label.size(),
                                        Qt.KeepAspectRatio,
                                        Qt.SmoothTransformation)
            
            self.image_label.setPixmap(scaled_pixmap)
            
    def process(self):
        self._process_image()

class SaveNode(BaseNode):
    def __init__(self):
        super().__init__(title="Save Output")
        
        # Add input port
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
    def setup_content(self, layout):
        # Create save button
        self.save_button = QPushButton("Save Image")
        self.save_button.clicked.connect(self.save_image)
        layout.addWidget(self.save_button)
        
        # Create auto-save checkbox
        self.auto_save = QPushButton("Auto Save")
        self.auto_save.setCheckable(True)
        self.auto_save.toggled.connect(self.toggle_auto_save)
        layout.addWidget(self.auto_save)
        
        # Status label
        self.status_label = QLabel("Ready")
        layout.addWidget(self.status_label)
        
    def save_image(self):
        image = self.get_input_data(0)
        if image is not None:
            file_path, _ = QFileDialog.getSaveFileName(None, "Save Image",
                                                     "", "Images (*.png *.jpg *.jpeg)")
            if file_path:
                success = cv2.imwrite(file_path, image)
                if success:
                    self.status_label.setText("Saved successfully")
                else:
                    self.status_label.setText("Save failed")
        else:
            self.status_label.setText("No image to save")
            
    def toggle_auto_save(self, checked):
        if checked:
            self.status_label.setText("Auto-save enabled")
        else:
            self.status_label.setText("Auto-save disabled")
            
    def process(self):
        if self.auto_save.isChecked():
            image = self.get_input_data(0)
            if image is not None:
                timestamp = cv2.getTickCount()
                filename = f"auto_save_{timestamp}.png"
                cv2.imwrite(filename, image)
                self.status_label.setText(f"Auto-saved: {filename}") 