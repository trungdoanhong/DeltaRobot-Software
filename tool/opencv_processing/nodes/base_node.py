from PyQt5.QtWidgets import (QGraphicsItem, QGraphicsProxyWidget, QWidget, 
                            QVBoxLayout, QPushButton)
from PyQt5.QtCore import Qt, QRectF, QTimer, QThread, pyqtSignal
from PyQt5.QtGui import QPainter, QPen, QBrush, QColor, QPainterPath, QLinearGradient
import numpy as np
import threading
from tool.opencv_processing.ui.style import *
import logging
import cv2
import time

class ProcessingThread(QThread):
    finished = pyqtSignal()
    
    def __init__(self, node):
        super().__init__()
        self.node = node
        self.is_running = True
        
    def run(self):
        while self.is_running:
            try:
                with self.node.queue_lock:
                    if self.node.processing_queue:
                        # Get next frame to process
                        self.node._process_image()
                        self.node.frame_count += 1
                        self.node.processing_queue.pop(0)  # Remove processed frame
            except Exception as e:
                self.node.logger.error(f"Error in processing thread: {str(e)}")
            # Small sleep to prevent thread from hogging CPU
            time.sleep(0.001)
        self.finished.emit()

class BaseNode(QGraphicsItem):
    def __init__(self, title="Node", width=180, height=240):
        super().__init__()
        self.title = title
        self.width = width
        self.height = height
        self.input_ports = []
        self.output_ports = []
        self.content = None
        self.processing_thread = None
        self.is_processing = False
        self.last_process_time = 0
        self.update_interval = 33  # Default 30 FPS
        self.frame_count = 0
        self.fps = 0
        self.last_fps_update = cv2.getTickCount()
        
        # Create timers without parent
        self.process_timer = QTimer()
        self.process_timer.timeout.connect(self.process_if_needed)
        
        self.fps_timer = QTimer()
        self.fps_timer.timeout.connect(self._update_fps)
        self.fps_timer.start(1000)  # Update FPS every second
        
        self._timer_deleted = False
        
        # Create processing queue
        self.processing_queue = []
        self.queue_lock = threading.Lock()
        
        self.setFlag(QGraphicsItem.ItemIsMovable)
        self.setFlag(QGraphicsItem.ItemIsSelectable)
        self.setFlag(QGraphicsItem.ItemSendsGeometryChanges)
        
        # Setup logging
        self.logger = logging.getLogger(self.__class__.__name__)
        if not self.logger.handlers:
            handler = logging.StreamHandler()
            formatter = logging.Formatter('%(asctime)s - %(name)s - %(levelname)s - %(message)s')
            handler.setFormatter(formatter)
            self.logger.addHandler(handler)
            self.logger.setLevel(logging.INFO)
        
        self.setup_ui()
        
    def setup_ui(self):
        # Create widget for node content
        content_widget = QWidget()
        layout = QVBoxLayout(content_widget)
        layout.setContentsMargins(5, 5, 5, 5)
        layout.setSpacing(5)
        
        # Setup content
        self.setup_content(layout)
        
        # Set stylesheet
        content_widget.setStyleSheet("""
            QWidget {
                background-color: transparent;
                color: white;
            }
            QLabel {
                color: white;
                padding: 2px;
            }
            QSpinBox, QComboBox, QPushButton {
                background-color: #383B4F;
                color: white;
                border: 1px solid #555;
                border-radius: 3px;
                padding: 3px;
                min-height: 20px;
            }
            QSpinBox:hover, QComboBox:hover, QPushButton:hover {
                background-color: #434760;
                border-color: #666;
            }
        """)
        
        # Create proxy widget
        self.content = QGraphicsProxyWidget(self)
        self.content.setWidget(content_widget)
        
        # Adjust content size
        content_widget.adjustSize()
        self.height = max(self.height, content_widget.height() + 40)
        
    def setup_content(self, layout):
        """Override this method to add custom content to the node"""
        pass
        
    def boundingRect(self):
        return QRectF(0, 0, self.width, self.height)
        
    def paint(self, painter, option, widget):
        # Draw node background
        path = QPainterPath()
        path.addRoundedRect(0, 0, self.width, self.height, 10, 10)
        
        if self.isSelected():
            painter.setPen(QPen(QColor("#00A0FF"), 2))
        else:
            painter.setPen(QPen(Qt.black, 1))
            
        gradient = QLinearGradient(0, 0, 0, self.height)
        gradient.setColorAt(0, QColor("#383B4F"))
        gradient.setColorAt(1, QColor("#2D2D2D"))
        painter.setBrush(QBrush(gradient))
        painter.drawPath(path)
        
        # Draw title
        painter.setPen(Qt.white)
        painter.drawText(10, 25, self.title)
        
        # Draw FPS if processing
        if self.is_processing and self.fps > 0:
            fps_text = f"{self.fps:.1f} FPS"
            painter.drawText(self.width - 70, 25, fps_text)
        
        # Position content widget
        if self.content:
            self.content.setGeometry(QRectF(5, 35, self.width-10, self.height-40))
        
    def _update_fps(self):
        """Internal method to update FPS calculation"""
        try:
            current_time = cv2.getTickCount()
            time_diff = (current_time - self.last_fps_update) / cv2.getTickFrequency()
            if time_diff > 0:
                self.fps = self.frame_count / time_diff
                self.frame_count = 0
                self.last_fps_update = current_time
                self.update()  # Trigger repaint to update FPS display
        except Exception as e:
            self.logger.error(f"Error updating FPS: {str(e)}")
            
    def process_image(self):
        """Process image and update continuously"""
        try:
            current_time = cv2.getTickCount()
            
            if not hasattr(self, 'last_update_time'):
                self.last_update_time = 0
            
            time_diff = (current_time - self.last_update_time) * 1000 / cv2.getTickFrequency()
            min_interval = 100  # Minimum 100ms between updates for heavy nodes
            
            if time_diff < min_interval and hasattr(self, 'title') and self.title in [
                "Warp Perspective", "Find Contours", "Draw Contours"
            ]:
                return
                
            # Start processing thread if not running
            if not self.is_processing:
                self.is_processing = True
                self.processing_thread = ProcessingThread(self)
                self.processing_thread.finished.connect(self.on_thread_finished)
                self.processing_thread.start()
                
            # Start the process timer if not already running
            if not self.process_timer.isActive():
                self.process_timer.start(self.update_interval)
                
            # Add frame to processing queue
            with self.queue_lock:
                self.processing_queue.append(True)
                
            self.last_update_time = current_time
            
            # Check if continuous updates are needed
            needs_continuous_update = False
            for port in self.input_ports:
                if port.connections:
                    source_node = port.connections[0].source_port.parentItem()
                    if (source_node.title == "Camera Input" or 
                        (hasattr(source_node, 'auto_update') and 
                         isinstance(source_node.auto_update, QPushButton) and 
                         source_node.auto_update.isChecked())):
                        needs_continuous_update = True
                        break
                        
            # Stop timer if no continuous update needed
            if not needs_continuous_update and self.process_timer.isActive():
                self.process_timer.stop()
                
        except Exception as e:
            self.logger.error(f"Error in {self.title}: {str(e)}")
            
    def on_thread_finished(self):
        """Handle thread completion"""
        self.is_processing = False
        if self.processing_thread:
            self.processing_thread.deleteLater()
            self.processing_thread = None
            
    def get_input_data(self, port_index):
        """Get data from input port"""
        if port_index < len(self.input_ports):
            return self.input_ports[port_index].get_data()
        return None
        
    def set_output_data(self, port_index, data):
        """Set data to output port with optimized updates"""
        if port_index < len(self.output_ports):
            self.output_ports[port_index].set_data(data)
            # Process connected nodes with optimized delay
            for connection in self.output_ports[port_index].connections:
                target_node = connection.target_port.parentItem()
                if hasattr(target_node, 'process_image'):
                    # Use longer delay for heavy nodes
                    delay = 50 if hasattr(target_node, 'title') and target_node.title in [
                        "Warp Perspective", "Find Contours", "Draw Contours"
                    ] else 10
                    QTimer.singleShot(delay, target_node.process_image)
                    
    def process_if_needed(self):
        """Check if processing is needed based on time interval"""
        current_time = cv2.getTickCount()
        if (current_time - self.last_process_time) * 1000 / cv2.getTickFrequency() >= self.update_interval:
            self.process_image()
            self.last_process_time = current_time
            
    def stop_processing(self):
        """Stop all processing"""
        try:
            self.is_processing = False
            if hasattr(self, 'processing_thread') and self.processing_thread:
                if isinstance(self.processing_thread, ProcessingThread):
                    self.processing_thread.is_running = False
                    self.processing_thread.wait()
                    self.processing_thread.deleteLater()
                self.processing_thread = None
            
            # Clear processing queue
            with self.queue_lock:
                self.processing_queue.clear()
            
            # Stop and cleanup timers
            if hasattr(self, 'process_timer') and self.process_timer and not self._timer_deleted:
                try:
                    if self.process_timer.isActive():
                        self.process_timer.stop()
                    self.process_timer.timeout.disconnect()
                    self.process_timer.deleteLater()
                except (RuntimeError, TypeError):
                    pass
                    
            if hasattr(self, 'fps_timer') and self.fps_timer and not self._timer_deleted:
                try:
                    if self.fps_timer.isActive():
                        self.fps_timer.stop()
                    self.fps_timer.timeout.disconnect()
                    self.fps_timer.deleteLater()
                except (RuntimeError, TypeError):
                    pass
                    
            self._timer_deleted = True
                
        except Exception as e:
            print(f"Error stopping processing: {str(e)}")
            
    def __del__(self):
        """Clean up resources"""
        try:
            # Stop processing first
            self.stop_processing()
            
            # Clean up timers explicitly
            if hasattr(self, 'process_timer') and self.process_timer and not self._timer_deleted:
                try:
                    if self.process_timer.isActive():
                        self.process_timer.stop()
                    self.process_timer.timeout.disconnect()
                    self.process_timer.deleteLater()
                except (RuntimeError, TypeError):
                    pass
                    
            if hasattr(self, 'fps_timer') and self.fps_timer:
                try:
                    if self.fps_timer.isActive():
                        self.fps_timer.stop()
                    self.fps_timer.timeout.disconnect()
                    self.fps_timer.deleteLater()
                except (RuntimeError, TypeError):
                    pass
                    
            self._timer_deleted = True
                
        except Exception as e:
            print(f"Error in destructor: {str(e)}") 