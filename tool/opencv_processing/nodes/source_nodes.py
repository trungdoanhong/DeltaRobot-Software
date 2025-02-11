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
        self.camera_combo.addItems([f"Camera {i}" for i in range(3)])
        layout.addWidget(self.camera_combo)
        
        # Start/Stop button
        self.start_button = QPushButton("Start")
        self.start_button.clicked.connect(self.toggle_camera)
        layout.addWidget(self.start_button)
        
        # FPS control
        fps_layout = QHBoxLayout()
        fps_layout.addWidget(QLabel("FPS:"))
        self.fps_spin = QSpinBox()
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
        if self.timer.isActive():
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
        self.timer.stop()
        if self.camera:
            self.camera.release()
        self.camera = None
        self.current_frame = None
        self.start_button.setText("Start")
        self.status_label.setText("Camera stopped")
            
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
        super().stop_processing()
        self.stop_camera()
        
    # Add destructor to ensure camera is released
    def __del__(self):
        self.stop_camera()

class ImageNode(BaseNode):
    def __init__(self):
        super().__init__(title="Image Input", height=250)  # Reduced height since we removed a button
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
        self.load_button.clicked.connect(self.load_image)
        layout.addWidget(self.load_button)
        
        # Path label
        self.path_label = QLabel("No image loaded")
        self.path_label.setWordWrap(True)
        self.path_label.setStyleSheet("color: white; font-size: 10px;")
        layout.addWidget(self.path_label)
        
    def update_preview(self):
        if self.image is not None:
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
        
    def load_image(self):
        file_path, _ = QFileDialog.getOpenFileName(None, "Open Image",
                                                 "", "Images (*.png *.jpg *.jpeg)")
        if file_path:
            self.image_path = file_path
            self.image = cv2.imread(self.image_path)
            if self.image is not None:
                self.path_label.setText(os.path.basename(file_path))
                self.update_preview()
                self.set_output_data(0, self.image)
            
    def update_output(self):
        if self.image is not None:
            self.set_output_data(0, self.image.copy())
            
    def get_output_data(self, port_index):
        """Return current image for preview"""
        return self.image
            
    def stop_processing(self):
        """Stop timer when node is deleted"""
        if self.timer.isActive():
            self.timer.stop()
        super().stop_processing()

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
        self.load_button.clicked.connect(self.load_video)
        layout.addWidget(self.load_button)
        
        # Play/Pause button
        self.play_button = QPushButton("Play")
        self.play_button.clicked.connect(self.toggle_playback)
        self.play_button.setEnabled(False)
        layout.addWidget(self.play_button)
        
    def load_video(self):
        file_path, _ = QFileDialog.getOpenFileName(None, "Open Video",
                                                 "", "Video Files (*.mp4 *.avi)")
        if file_path:
            self.video_path = file_path
            self.video = cv2.VideoCapture(self.video_path)
            if self.video.isOpened():
                self.play_button.setEnabled(True)
                
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
        super().stop_processing()
        if self.video:
            self.video.release()
            self.video = None 