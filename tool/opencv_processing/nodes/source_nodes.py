from PyQt5.QtWidgets import QPushButton, QFileDialog, QComboBox, QLabel, QHBoxLayout, QSpinBox
from PyQt5.QtCore import QTimer, Qt
from PyQt5.QtGui import QImage, QPixmap
import cv2
import numpy as np
from .base_node import BaseNode
from .port import Port
import os

class CameraNode(BaseNode):
    def __init__(self):
        super().__init__(title="Camera Input")
        self.camera = None
        self.camera_index = 0
        self.timer = QTimer()
        self.timer.timeout.connect(self.capture_frame)
        self.current_frame = None
        self.frame_count = 0
        self.update_interval = 33  # ~30 FPS
        
        # Add output port
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Camera selection
        self.camera_combo = QComboBox()
        self.camera_combo.setObjectName("camera")
        self.camera_combo.addItems([f"Camera {i}" for i in range(3)])
        layout.addWidget(self.camera_combo)
        
        # Start/Stop button
        self.start_button = QPushButton("Start")
        self.start_button.setObjectName("start")
        self.start_button.setCheckable(True)
        self.start_button.clicked.connect(self.toggle_camera)
        layout.addWidget(self.start_button)
        
        # FPS control
        fps_layout = QHBoxLayout()
        fps_layout.addWidget(QLabel("FPS:"))
        self.fps_spin = QSpinBox()
        self.fps_spin.setObjectName("fps")
        self.fps_spin.setRange(1, 60)
        self.fps_spin.setValue(30)
        self.fps_spin.valueChanged.connect(self.update_fps)
        fps_layout.addWidget(self.fps_spin)
        layout.addLayout(fps_layout)
        
        # Status label
        self.status_label = QLabel("Camera not started")
        self.status_label.setStyleSheet("color: white;")
        layout.addWidget(self.status_label)
        
    def update_fps(self, fps):
        self.update_interval = int(1000 / fps)  # Convert FPS to milliseconds
        if self.timer and self.timer.isActive():
            self.timer.setInterval(self.update_interval)
            
    def toggle_camera(self):
        if self.camera is None:
            # Start camera initialization in a separate thread
            self.start_button.setEnabled(False)
            self.status_label.setText("Initializing camera...")
            QTimer.singleShot(0, self.initialize_camera)
        else:
            self.stop_camera()
            
    def initialize_camera(self):
        try:
            self.camera_index = self.camera_combo.currentIndex()
            self.camera = cv2.VideoCapture(self.camera_index)
            if self.camera.isOpened():
                self.start_button.setText("Stop")
                self.status_label.setText("Camera running")
                if self.timer:
                    self.timer.start(self.update_interval)
            else:
                self.status_label.setText("Failed to open camera")
                self.camera = None
        except Exception as e:
            self.status_label.setText(f"Error: {str(e)}")
            self.camera = None
        finally:
            self.start_button.setEnabled(True)
            
    def stop_camera(self):
        try:
            if self.timer and self.timer.isActive():
                self.timer.stop()
            if self.camera:
                self.camera.release()
            self.camera = None
            self.current_frame = None
            self.start_button.setText("Start")
            self.status_label.setText("Camera stopped")
        except Exception as e:
            print(f"Error stopping camera: {str(e)}")
            
    def capture_frame(self):
        if self.camera and self.camera.isOpened():
            ret, frame = self.camera.read()
            if ret:
                self.current_frame = frame.copy()
                self.frame_count += 1
                # Only update output every other frame to reduce UI load
                if self.frame_count % 2 == 0:
                    self.set_output_data(0, frame)
                
    def get_output_data(self, port_index):
        """Get current frame for preview"""
        return self.current_frame
                
    def stop_processing(self):
        """Stop processing and cleanup resources"""
        try:
            self.stop_camera()
            if self.timer:
                if self.timer.isActive():
                    self.timer.stop()
                self.timer.deleteLater()
                self.timer = None
            super().stop_processing()
        except Exception as e:
            print(f"Error in stop_processing: {str(e)}")

class ImageNode(BaseNode):
    def __init__(self):
        super().__init__(title="Image Input", height=220)
        self.image_path = None
        self.image = None
        self.timer = QTimer()
        self.timer.timeout.connect(self.update_output)
        self.timer.start(100)  # Always auto update every 100ms
        
        # Add output port
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Preview label
        self.preview_label = QLabel()
        self.preview_label.setMinimumSize(160, 120)
        self.preview_label.setMaximumSize(160, 120)
        self.preview_label.setAlignment(Qt.AlignCenter)
        self.preview_label.setStyleSheet("background-color: black;")
        layout.addWidget(self.preview_label)
        
        # Load image button
        self.load_button = QPushButton("Load Image")
        self.load_button.setObjectName("load")
        self.load_button.clicked.connect(lambda: self.load_image())  # Fix button click
        layout.addWidget(self.load_button)
        
        # Path label
        self.path_label = QLabel("No image loaded")
        self.path_label.setObjectName("path_label")
        self.path_label.setWordWrap(True)
        self.path_label.setStyleSheet("color: white; font-size: 10px;")
        layout.addWidget(self.path_label)
        
    def update_preview(self):
        if self.image is not None:
            try:
                h, w = self.image.shape[:2]
                # Scale to fit preview maintaining aspect ratio
                scale = min(160/w, 120/h)
                new_size = (int(w * scale), int(h * scale))
                preview = cv2.resize(self.image, new_size)
                # Convert to RGB for Qt
                preview = cv2.cvtColor(preview, cv2.COLOR_BGR2RGB)
                h, w = preview.shape[:2]
                bytes_per_line = 3 * w
                q_image = QImage(preview.data, w, h, bytes_per_line, QImage.Format_RGB888)
                self.preview_label.setPixmap(QPixmap.fromImage(q_image))
            except Exception as e:
                print(f"Error updating preview: {str(e)}")
        
    def load_image(self, file_path=None):
        try:
            if file_path is None:
                file_path, _ = QFileDialog.getOpenFileName(
                    None,
                    "Open Image",
                    "",
                    "Images (*.png *.jpg *.jpeg)"
                )
            if file_path and os.path.exists(file_path):
                print(f"Loading image from: {file_path}")  # Debug print
                self.image_path = file_path
                self.image = cv2.imread(self.image_path)
                if self.image is not None:
                    print(f"Image loaded successfully, shape: {self.image.shape}")  # Debug print
                    self.path_label.setText(os.path.basename(file_path))
                    self.update_preview()
                    self.set_output_data(0, self.image)
                else:
                    print(f"Failed to load image: {file_path}")
                    self.path_label.setText("Failed to load image")
        except Exception as e:
            print(f"Error loading image: {str(e)}")
            self.path_label.setText("Error loading image")
            
    def update_output(self):
        if self.image is not None:
            self.set_output_data(0, self.image.copy())
            
    def get_output_data(self, port_index):
        """Return current image for preview"""
        return self.image
            
    def stop_processing(self):
        """Stop processing and cleanup resources"""
        try:
            if self.timer:
                if self.timer.isActive():
                    self.timer.stop()
                self.timer.deleteLater()
                self.timer = None
            super().stop_processing()
        except Exception as e:
            print(f"Error in stop_processing: {str(e)}")

class VideoNode(BaseNode):
    def __init__(self):
        super().__init__(title="Video Input")
        self.video = None
        self.video_path = None
        self.timer = QTimer()
        self.timer.timeout.connect(self.read_frame)
        
        # Add output port
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Load video button
        self.load_button = QPushButton("Load Video")
        self.load_button.setObjectName("load")
        self.load_button.clicked.connect(lambda: self.load_video())  # Fix button click
        layout.addWidget(self.load_button)
        
        # Play/Pause button
        self.play_button = QPushButton("Play")
        self.play_button.setObjectName("play")
        self.play_button.setCheckable(True)
        self.play_button.clicked.connect(self.toggle_playback)
        self.play_button.setEnabled(False)
        layout.addWidget(self.play_button)
        
        # Path label
        self.path_label = QLabel("No video loaded")
        self.path_label.setObjectName("path_label")
        self.path_label.setWordWrap(True)
        self.path_label.setStyleSheet("color: white; font-size: 10px;")
        layout.addWidget(self.path_label)
        
    def load_video(self, file_path=None):
        try:
            if file_path is None:
                file_path, _ = QFileDialog.getOpenFileName(
                    None,
                    "Open Video",
                    "",
                    "Video Files (*.mp4 *.avi)"
                )
            if file_path and os.path.exists(file_path):
                print(f"Loading video from: {file_path}")  # Debug print
                self.video_path = file_path
                self.video = cv2.VideoCapture(self.video_path)
                if self.video.isOpened():
                    self.play_button.setEnabled(True)
                    self.path_label.setText(os.path.basename(file_path))
                else:
                    print(f"Failed to open video: {file_path}")
                    self.path_label.setText("Failed to load video")
        except Exception as e:
            print(f"Error loading video: {str(e)}")
            self.path_label.setText("Error loading video")
            
    def toggle_playback(self):
        if self.timer.isActive():
            self.timer.stop()
            self.play_button.setText("Play")
        else:
            self.timer.start(33)  # ~30 FPS
            self.play_button.setText("Pause")
            
    def read_frame(self):
        if self.video and self.video.isOpened():
            ret, frame = self.video.read()
            if ret:
                self.set_output_data(0, frame)
            else:
                self.video.set(cv2.CAP_PROP_POS_FRAMES, 0)  # Loop video
                
    def stop_processing(self):
        """Stop processing and cleanup resources"""
        try:
            if self.timer:
                if self.timer.isActive():
                    self.timer.stop()
                self.timer.deleteLater()
                self.timer = None
            if self.video:
                self.video.release()
                self.video = None
            super().stop_processing()
        except Exception as e:
            print(f"Error in stop_processing: {str(e)}") 