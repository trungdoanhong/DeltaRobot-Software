import sys
import cv2
import numpy as np
import detect_socket
import time
import socket
import struct
import threading
from ultralytics import YOLO
from PyQt5.QtWidgets import *
from PyQt5.QtCore import *
from PyQt5.QtGui import *
import logging
import os
try:
    from pypylon import pylon
    BASLER_AVAILABLE = True
except ImportError:
    BASLER_AVAILABLE = False
    print("Basler SDK not installed. Basler cameras will not be available. To use Basler cameras, please install Pylon Camera Software Suite.")

try:
    from harvesters.core import Harvester
    GIGE_AVAILABLE = True
    logging.info("Harvesters library loaded successfully")
except ImportError:
    GIGE_AVAILABLE = False
    logging.warning("GigE Vision SDK not installed. Industrial cameras will not be available. To use industrial cameras, please install the camera manufacturer's SDK.")

# Add message box style
POPUP_STYLE = '''
QMessageBox {
    background-color: #1e1e2e;
    color: #cdd6f4;
}
QMessageBox QLabel {
    color: #cdd6f4;
    font-size: 14px;
    padding: 10px;
}
QMessageBox QPushButton {
    background-color: #89b4fa;
    color: #1e1e2e;
    border: none;
    border-radius: 5px;
    padding: 8px 20px;
    font-size: 13px;
    font-weight: bold;
    min-width: 100px;
}
QMessageBox QPushButton:hover {
    background-color: #b4befe;
}
QMessageBox QPushButton:pressed {
    background-color: #585b70;
}
QMessageBox QDialogButtonBox {
    button-layout: center;
}
QFileDialog {
    background-color: #1e1e2e;
    color: #cdd6f4;
}
QFileDialog QListView {
    background-color: #313244;
    color: #cdd6f4;
}
QFileDialog QTreeView {
    background-color: #313244;
    color: #cdd6f4;
}
QFileDialog QComboBox {
    background-color: #313244;
    color: #cdd6f4;
    border: 1px solid #45475a;
    border-radius: 5px;
    padding: 5px;
}
QFileDialog QLineEdit {
    background-color: #313244;
    color: #cdd6f4;
    border: 1px solid #45475a;
    border-radius: 5px;
    padding: 5px;
}
QFileDialog QPushButton {
    background-color: #89b4fa;
    color: #1e1e2e;
    border: none;
    border-radius: 5px;
    padding: 8px 15px;
    font-weight: bold;
}
QFileDialog QPushButton:hover {
    background-color: #b4befe;
}
'''

STYLE_SHEET = '''
QMainWindow {
    background-color: #1e1e2e;
}
QWidget {
    color: #ffffff;
    font-family: 'Segoe UI', Arial;
}
QLabel {
    color: #cdd6f4;
    font-size: 14px;
}
QPushButton {
    background-color: #313244;
    border: none;
    border-radius: 5px;
    padding: 8px 15px;
    color: #cdd6f4;
    font-size: 13px;
}
QPushButton:hover {
    background-color: #45475a;
}
QPushButton:pressed {
    background-color: #585b70;
}
QPushButton#connectButton {
    background-color: #89b4fa;
    color: #1e1e2e;
    font-weight: bold;
}
QPushButton#connectButton:hover {
    background-color: #b4befe;
}
QLineEdit {
    background-color: #313244;
    border: 1px solid #45475a;
    border-radius: 5px;
    padding: 5px;
    color: #cdd6f4;
}
QTextEdit {
    background-color: #313244;
    border: 1px solid #45475a;
    border-radius: 5px;
    padding: 5px;
    color: #89b4fa;
    font-family: 'Consolas', monospace;
}
QGroupBox {
    border: 2px solid #45475a;
    border-radius: 8px;
    margin-top: 10px;
    padding-top: 15px;
    font-size: 14px;
    font-weight: bold;
}
QGroupBox::title {
    color: #89b4fa;
    subcontrol-origin: margin;
    subcontrol-position: top center;
    padding: 0 10px;
    margin-top: 2px;
}
QGroupBox > QVBoxLayout {
    margin: 15px;
}
QGroupBox > QFormLayout {
    margin: 15px;
}
QVBoxLayout {
    spacing: 10px;
}
QFormLayout {
    spacing: 10px;
}
QHBoxLayout {
    spacing: 8px;
}
QComboBox {
    background-color: #313244;
    border: 1px solid #45475a;
    border-radius: 5px;
    padding: 5px;
    color: #cdd6f4;
    min-width: 150px;
}
QComboBox:hover {
    border: 1px solid #89b4fa;
}
QComboBox:focus {
    border: 1px solid #89b4fa;
}
QComboBox::drop-down {
    border: none;
    width: 20px;
}
QComboBox::down-arrow {
    image: url(data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMTYiIGhlaWdodD0iMTYiIHZpZXdCb3g9IjAgMCAxNiAxNiIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj4KPHBhdGggZD0iTTggMTFMNCBMIDEyIDciIHN0cm9rZT0iI2NkZDZmNCIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiLz4KPC9zdmc+);
    width: 16px;
    height: 16px;
}
QComboBox::down-arrow:hover {
    image: url(data:image/svg+xml;base64,PHN2ZyB3aWR0aD0iMTYiIGhlaWdodD0iMTYiIHZpZXdCb3g9IjAgMCAxNiAxNiIgZmlsbD0ibm9uZSIgeG1sbnM9Imh0dHA6Ly93d3cudzMub3JnLzIwMDAvc3ZnIj4KPHBhdGggZD0iTTggMTFMNCBMIDEyIDciIHN0cm9rZT0iIzg5YjRmYSIgc3Ryb2tlLXdpZHRoPSIyIiBzdHJva2UtbGluZWNhcD0icm91bmQiLz4KPC9zdmc+);
}
QComboBox QAbstractItemView {
    background-color: #1e1e2e;
    border: 1px solid #45475a;
    border-radius: 5px;
    selection-background-color: #45475a;
    selection-color: #cdd6f4;
    padding: 5px;
}
QRadioButton {
    color: #cdd6f4;
    spacing: 5px;
}
QRadioButton::indicator {
    width: 18px;
    height: 18px;
    border-radius: 9px;
    border: 2px solid #45475a;
    background-color: #313244;
}
QRadioButton::indicator:checked {
    background-color: #89b4fa;
    border: 2px solid #89b4fa;
}
QRadioButton::indicator:hover {
    border: 2px solid #89b4fa;
}
'''

class CameraScannerThread(QThread):
    finished = pyqtSignal(list)  # Signal to emit found cameras

    def run(self):
        available_cameras = []
        # Scan for regular USB cameras
        for i in range(5):
            try:
                cap = cv2.VideoCapture(i, cv2.CAP_DSHOW)
                if cap.isOpened():
                    ret = cap.grab()
                    if ret:
                        available_cameras.append(("usb", i, f"USB Camera {i}"))
                cap.release()
            except Exception as e:
                print(f"Error checking USB camera {i}: {str(e)}")
        
        # Scan for Basler cameras if available
        if BASLER_AVAILABLE:
            try:
                tl_factory = pylon.TlFactory.GetInstance()
                devices = tl_factory.EnumerateDevices()
                for i, device in enumerate(devices):
                    available_cameras.append(("basler", i, f"Basler {device.GetModelName()} ({device.GetSerialNumber()})"))
            except Exception as e:
                print(f"Error scanning Basler cameras: {str(e)}")
        
        # Scan for GigE cameras
        if GIGE_AVAILABLE:
            try:
                logging.info("Starting GigE camera scan...")
                h = Harvester()
                
                # Đường dẫn CTI cho Hikvision MVS
                hikvision_paths = [
                    'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGevProvider.cti',
                    'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGigEVisionTransport.cti',
                    'C:/Program Files (x86)/MVS/Development/GigECamera/win64/MvGevProvider.cti'
                ]
                
                for cti_path in hikvision_paths:
                    try:
                        if os.path.exists(cti_path):
                            logging.info(f"Found CTI file: {cti_path}")
                            h.add_file(cti_path)
                            logging.info("Successfully added CTI file")
                            break
                    except Exception as e:
                        logging.error(f"Failed to add CTI file {cti_path}: {str(e)}")
                
                logging.info("Updating device list...")
                h.update()
                
                device_info = h.device_info_list
                logging.info(f"Found {len(device_info)} GigE devices")
                
                for i, info in enumerate(device_info):
                    try:
                        model = info.model
                        serial = info.serial_number if info.serial_number else "N/A"
                        vendor = info.vendor
                        logging.info(f"Found GigE camera: {vendor} {model} ({serial})")
                        available_cameras.append(("gige", i, f"{vendor} {model} ({serial})"))
                    except Exception as e:
                        logging.error(f"Error getting camera {i} info: {str(e)}")
                
                h.reset()
            except Exception as e:
                logging.error(f"Error scanning GigE cameras: {str(e)}")
                self.updateStatus(f"GigE scan error: {str(e)}", "error")
        
        self.finished.emit(available_cameras)

class IPCameraScanner(QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setWindowTitle('GigE Camera Scanner')
        self.setFixedSize(600, 400)
        self.setStyleSheet(STYLE_SHEET + '''
            QDialog {
                background-color: #1e1e2e;
            }
            QTableWidget {
                background-color: #313244;
                border: 1px solid #45475a;
                border-radius: 5px;
                gridline-color: #45475a;
            }
            QTableWidget::item {
                color: #cdd6f4;
                padding: 5px;
            }
            QTableWidget::item:selected {
                background-color: #45475a;
            }
            QHeaderView::section {
                background-color: #1e1e2e;
                color: #89b4fa;
                padding: 5px;
                border: 1px solid #45475a;
            }
            QScrollBar:vertical {
                border: none;
                background: #313244;
                width: 10px;
                margin: 0;
            }
            QScrollBar::handle:vertical {
                background: #45475a;
                min-height: 20px;
                border-radius: 5px;
            }
            QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
                border: none;
                background: none;
            }
            QPushButton {
                background-color: #89b4fa;
                color: #1e1e2e;
                border: none;
                border-radius: 5px;
                padding: 8px 15px;
                font-size: 13px;
                font-weight: bold;
                min-width: 100px;
            }
            QPushButton:hover {
                background-color: #b4befe;
            }
            QPushButton:pressed {
                background-color: #585b70;
            }
            QLabel {
                color: #cdd6f4;
                font-size: 13px;
            }
        ''')
        
        # Create layout
        layout = QVBoxLayout()
        
        # Create table
        self.table = QTableWidget()
        self.table.setColumnCount(5)
        self.table.setHorizontalHeaderLabels(['IP Address', 'MAC Address', 'Model', 'Serial', 'Status'])
        self.table.horizontalHeader().setSectionResizeMode(QHeaderView.Stretch)
        layout.addWidget(self.table)
        
        # Create buttons
        btn_layout = QHBoxLayout()
        
        self.scan_btn = QPushButton('Scan Network')
        self.scan_btn.clicked.connect(self.start_scan)
        btn_layout.addWidget(self.scan_btn)
        
        self.add_manual_btn = QPushButton('Add Camera Manually')
        self.add_manual_btn.clicked.connect(self.add_camera_manually)
        btn_layout.addWidget(self.add_manual_btn)
        
        self.config_btn = QPushButton('Configure IP')
        self.config_btn.clicked.connect(self.configure_ip)
        btn_layout.addWidget(self.config_btn)
        
        layout.addLayout(btn_layout)
        
        # Status label
        self.status_label = QLabel()
        layout.addWidget(self.status_label)
        
        self.setLayout(layout)
        
        # Scanner thread
        self.scanner_thread = None
        self.devices = []

    def start_scan(self):
        self.scan_btn.setEnabled(False)
        self.status_label.setText("Scanning network for GigE cameras...")
        self.table.setRowCount(0)
        self.devices.clear()
        
        # Start scanner thread
        self.scanner_thread = threading.Thread(target=self.scan_network)
        self.scanner_thread.start()

    def scan_network(self):
        try:
            # Create discovery socket
            sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
            sock.setsockopt(socket.SOL_SOCKET, socket.SO_BROADCAST, 1)
            sock.settimeout(1.0)
            
            # GigE Vision discovery packet
            discovery_cmd = struct.pack('>4H', 0x4201, 0x0004, 0x0000, 0x0000)
            
            # Get all network interfaces
            interfaces = socket.getaddrinfo(socket.gethostname(), None)
            
            # Try using Harvester first
            if GIGE_AVAILABLE:
                try:
                    logging.info("Scanning with Harvester...")
                    h = Harvester()
                    
                    # Add CTI files
                    cti_paths = [
                        # Hikvision MVS paths
                        'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGevProvider.cti',
                        'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGigEVisionTransport.cti',
                        'C:/Program Files (x86)/MVS/Development/GigECamera/win64/MvGevProvider.cti',
                        'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGenTLProducer.cti',
                        # Additional Hikvision paths
                        'C:/Program Files/Common Files/MVS/Runtime/Win64_x64/MvGevProvider.cti',
                        'C:/Program Files/MVS/Development/GigECamera/win64/MvGevProvider.cti',
                        # MATRIX VISION paths
                        'C:/Program Files/MATRIX VISION/mvIMPACT Acquire/bin/x64/GenTL/mvGenTLProducer.cti',
                        'C:/Program Files/MATRIX VISION/mvIMPACT Acquire/bin/x64/GenTL/mvGigEVisionTransport.cti',
                        # Basler paths
                        'C:/Program Files/Basler/pylon 6/Runtime/x64/ProducerGEV.cti'
                    ]
                    
                    cti_added = False
                    for cti_path in cti_paths:
                        try:
                            if os.path.exists(cti_path):
                                logging.info(f"Found CTI file: {cti_path}")
                                h.add_file(cti_path)
                                cti_added = True
                                logging.info("Successfully added CTI file")
                        except Exception as e:
                            logging.warning(f"Failed to add CTI file {cti_path}: {str(e)}")
                            continue
                    
                    if not cti_added:
                        logging.warning("No CTI files found. Camera manufacturer's SDK may not be installed.")
                        self.status_label.setText("Note: Camera SDK not found. To use industrial cameras, please install the manufacturer's SDK.")
                        self.status_label.setStyleSheet("color: #fab387")  # Warning color
                except Exception as e:
                    logging.warning(f"Error in Harvester scanning: {str(e)}")
            
            # Fallback to direct GigE Vision discovery
            if not self.devices:
                logging.info("Trying direct GigE Vision discovery...")
                for interface in interfaces:
                    try:
                        sock.sendto(discovery_cmd, ('255.255.255.255', 3956))
                        
                        while True:
                            try:
                                data, addr = sock.recvfrom(2048)
                                if len(data) > 8:
                                    device = self.parse_discovery_response(data, addr)
                                    if device and device not in self.devices:
                                        self.devices.append(device)
                                        QMetaObject.invokeMethod(self, "add_device_to_table",
                                                              Qt.QueuedConnection,
                                                              Q_ARG(dict, device))
                            except socket.timeout:
                                break
                    except Exception as e:
                        logging.warning(f"Error scanning interface: {str(e)}")
            
            sock.close()
            
            # Update UI in main thread
            QMetaObject.invokeMethod(self, "scan_completed",
                                  Qt.QueuedConnection)
            
        except Exception as e:
            logging.warning(f"Network scan warning: {str(e)}")
            QMetaObject.invokeMethod(self, "scan_error",
                                  Qt.QueuedConnection,
                                  Q_ARG(str, str(e)))

    def parse_discovery_response(self, data, addr):
        try:
            # Basic parsing of GigE Vision discovery response
            ip_address = addr[0]
            
            # Extract MAC address (usually in first 6 bytes after header)
            mac_bytes = data[8:14]
            mac_address = ':'.join(format(b, '02x') for b in mac_bytes)
            
            # Try to extract model and serial (implementation depends on camera manufacturer)
            model = "Unknown"
            serial = "Unknown"
            
            # Look for manufacturer specific info
            # This is a simplified example - actual parsing depends on camera protocol
            text_data = data[14:].decode('utf-8', errors='ignore')
            if 'Hikvision' in text_data:
                model = "Hikvision GigE"
            elif 'MATRIX' in text_data:
                model = "MATRIX GigE"
            
            return {
                'ip': ip_address,
                'mac': mac_address,
                'model': model,
                'serial': serial,
                'status': 'Found'
            }
        except Exception as e:
            logging.error(f"Error parsing discovery response: {str(e)}")
            return None

    @pyqtSlot(dict)
    def add_device_to_table(self, device):
        row = self.table.rowCount()
        self.table.insertRow(row)
        self.table.setItem(row, 0, QTableWidgetItem(device['ip']))
        self.table.setItem(row, 1, QTableWidgetItem(device['mac']))
        self.table.setItem(row, 2, QTableWidgetItem(device['model']))
        self.table.setItem(row, 3, QTableWidgetItem(device['serial']))
        self.table.setItem(row, 4, QTableWidgetItem(device['status']))

    @pyqtSlot()
    def scan_completed(self):
        self.scan_btn.setEnabled(True)
        self.status_label.setText(f"Scan completed. Found {len(self.devices)} devices.")

    @pyqtSlot(str)
    def scan_error(self, error_msg):
        self.scan_btn.setEnabled(True)
        self.status_label.setText(f"Scan error: {error_msg}")

    def configure_ip(self):
        selected_rows = self.table.selectedItems()
        if not selected_rows:
            QMessageBox.warning(self, "Warning", "Please select a camera to configure")
            return
            
        row = selected_rows[0].row()
        ip = self.table.item(row, 0).text()
        mac = self.table.item(row, 1).text()
        
        dialog = IPConfigDialog(ip, mac, self)
        if dialog.exec_() == QDialog.Accepted:
            # Update camera IP
            new_ip = dialog.get_new_ip()
            self.table.setItem(row, 0, QTableWidgetItem(new_ip))
            self.table.setItem(row, 4, QTableWidgetItem("IP Updated"))

    def onCamerasFound(self, available_cameras):
        if available_cameras:
            for camera in available_cameras:
                self.add_device_to_table(camera)
            self.status_label.setText(f"Found {len(available_cameras)} cameras")
        else:
            self.status_label.setText("No cameras found")
        
        self.scan_btn.setEnabled(True)
        self.scanner_thread = None

    def add_camera_manually(self):
        dialog = ManualCameraDialog(self)
        if dialog.exec_() == QDialog.Accepted:
            camera_info = dialog.get_camera_info()
            device = {
                'ip': camera_info['ip'],
                'mac': 'N/A',
                'model': camera_info['model'],
                'serial': camera_info['serial'],
                'status': 'Manual Entry'
            }
            self.devices.append(device)
            self.add_device_to_table(device)
            self.status_label.setText("Camera added manually")

class IPConfigDialog(QDialog):
    def __init__(self, current_ip, mac, parent=None):
        super().__init__(parent)
        self.setWindowTitle('Configure IP Address')
        self.setFixedSize(300, 150)
        self.setStyleSheet(STYLE_SHEET + '''
            QDialog {
                background-color: #1e1e2e;
            }
            QLabel {
                color: #cdd6f4;
                font-size: 13px;
            }
            QLineEdit {
                background-color: #313244;
                color: #cdd6f4;
                border: 1px solid #45475a;
                border-radius: 5px;
                padding: 5px;
                font-size: 13px;
            }
            QPushButton {
                background-color: #89b4fa;
                color: #1e1e2e;
                border: none;
                border-radius: 5px;
                padding: 8px 15px;
                font-size: 13px;
                font-weight: bold;
                min-width: 80px;
            }
            QPushButton:hover {
                background-color: #b4befe;
            }
            QPushButton:pressed {
                background-color: #585b70;
            }
        ''')
        
        layout = QFormLayout()
        
        # Current IP
        self.current_ip_label = QLabel(current_ip)
        layout.addRow("Current IP:", self.current_ip_label)
        
        # MAC Address
        self.mac_label = QLabel(mac)
        layout.addRow("MAC Address:", self.mac_label)
        
        # New IP
        self.new_ip_edit = QLineEdit()
        self.new_ip_edit.setText(current_ip)
        layout.addRow("New IP:", self.new_ip_edit)
        
        # Buttons
        btn_layout = QHBoxLayout()
        self.ok_btn = QPushButton("OK")
        self.ok_btn.clicked.connect(self.accept)
        self.cancel_btn = QPushButton("Cancel")
        self.cancel_btn.clicked.connect(self.reject)
        
        btn_layout.addWidget(self.ok_btn)
        btn_layout.addWidget(self.cancel_btn)
        layout.addRow(btn_layout)
        
        self.setLayout(layout)
    
    def get_new_ip(self):
        return self.new_ip_edit.text()

class ManualCameraDialog(QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)
        self.setWindowTitle('Add Camera Manually')
        self.setFixedSize(300, 200)
        self.setStyleSheet(STYLE_SHEET + '''
            QDialog {
                background-color: #1e1e2e;
            }
            QLabel {
                color: #cdd6f4;
                font-size: 13px;
            }
            QLineEdit {
                background-color: #313244;
                color: #cdd6f4;
                border: 1px solid #45475a;
                border-radius: 5px;
                padding: 5px;
                font-size: 13px;
            }
            QPushButton {
                background-color: #89b4fa;
                color: #1e1e2e;
                border: none;
                border-radius: 5px;
                padding: 8px 15px;
                font-size: 13px;
                font-weight: bold;
                min-width: 80px;
            }
            QPushButton:hover {
                background-color: #b4befe;
            }
            QPushButton:pressed {
                background-color: #585b70;
            }
        ''')
        
        layout = QVBoxLayout()
        
        # IP Address input
        ip_layout = QHBoxLayout()
        self.ip_edit = QLineEdit()
        self.ip_edit.setPlaceholderText("Enter IP Address")
        self.detect_btn = QPushButton("Detect")
        self.detect_btn.clicked.connect(self.detect_camera)
        ip_layout.addWidget(self.ip_edit)
        ip_layout.addWidget(self.detect_btn)
        layout.addLayout(ip_layout)
        
        # Status and info display
        self.status_label = QLabel()
        self.status_label.setWordWrap(True)
        layout.addWidget(self.status_label)
        
        # Camera info (hidden initially)
        self.info_widget = QWidget()
        info_layout = QFormLayout()
        self.model_label = QLabel()
        self.serial_label = QLabel()
        info_layout.addRow("Model:", self.model_label)
        info_layout.addRow("Serial:", self.serial_label)
        self.info_widget.setLayout(info_layout)
        self.info_widget.hide()
        layout.addWidget(self.info_widget)
        
        # Buttons
        btn_layout = QHBoxLayout()
        self.ok_btn = QPushButton("Add Camera")
        self.ok_btn.clicked.connect(self.validate_and_accept)
        self.ok_btn.setEnabled(False)
        self.cancel_btn = QPushButton("Cancel")
        self.cancel_btn.clicked.connect(self.reject)
        
        btn_layout.addWidget(self.ok_btn)
        btn_layout.addWidget(self.cancel_btn)
        layout.addLayout(btn_layout)
        
        layout.addStretch()
        self.setLayout(layout)
        
        # Store camera info
        self.camera_info = None
    
    def detect_camera(self):
        ip = self.ip_edit.text().strip()
        if not ip:
            self.status_label.setText("Please enter an IP address")
            self.status_label.setStyleSheet("color: #f38ba8")
            return
        
        # Basic IP validation
        parts = ip.split('.')
        if len(parts) != 4 or not all(p.isdigit() and 0 <= int(p) <= 255 for p in parts):
            self.status_label.setText("Invalid IP address format")
            self.status_label.setStyleSheet("color: #f38ba8")
            return
        
        self.status_label.setText("Detecting camera...")
        self.status_label.setStyleSheet("color: #89b4fa")
        QApplication.processEvents()
        
        try:
            # Try to detect camera using Harvester if available
            if GIGE_AVAILABLE:
                h = Harvester()
                
                # Add CTI files
                cti_paths = [
                    # Hikvision MVS paths
                    'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGevProvider.cti',
                    'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGigEVisionTransport.cti',
                    'C:/Program Files (x86)/MVS/Development/GigECamera/win64/MvGevProvider.cti',
                    'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGenTLProducer.cti',
                    # Additional Hikvision paths
                    'C:/Program Files/Common Files/MVS/Runtime/Win64_x64/MvGevProvider.cti',
                    'C:/Program Files/MVS/Development/GigECamera/win64/MvGevProvider.cti',
                    # MATRIX VISION paths
                    'C:/Program Files/MATRIX VISION/mvIMPACT Acquire/bin/x64/GenTL/mvGenTLProducer.cti',
                    'C:/Program Files/MATRIX VISION/mvIMPACT Acquire/bin/x64/GenTL/mvGigEVisionTransport.cti',
                    # Basler paths
                    'C:/Program Files/Basler/pylon 6/Runtime/x64/ProducerGEV.cti'
                ]
                
                cti_added = False
                for cti_path in cti_paths:
                    try:
                        if os.path.exists(cti_path):
                            h.add_file(cti_path)
                            cti_added = True
                            break
                    except Exception as e:
                        logging.warning(f"Failed to add CTI file {cti_path}: {str(e)}")
                
                if not cti_added:
                    # If no CTI files found, add camera with basic information
                    self.camera_info = {
                        'ip': ip,
                        'model': 'Unknown GigE Camera',
                        'serial': 'N/A',
                        'status': 'Manual Entry'
                    }
                    self.model_label.setText(self.camera_info['model'])
                    self.serial_label.setText(self.camera_info['serial'])
                    self.info_widget.show()
                    self.status_label.setText("Note: Camera SDK not installed. Added camera with basic information.")
                    self.status_label.setStyleSheet("color: #fab387")  # Warning color
                    self.ok_btn.setEnabled(True)
                    return
                
                h.update()
                
                # Try to find camera with matching IP
                found = False
                for info in h.device_info_list:
                    if hasattr(info, 'device_ip_address') and info.device_ip_address == ip:
                        self.camera_info = {
                            'ip': ip,
                            'model': f"{info.vendor} {info.model}",
                            'serial': info.serial_number if info.serial_number else "N/A",
                            'status': 'Found'
                        }
                        found = True
                        break
                
                h.reset()
                
                if found:
                    self.model_label.setText(self.camera_info['model'])
                    self.serial_label.setText(self.camera_info['serial'])
                    self.info_widget.show()
                    self.status_label.setText("Camera detected successfully!")
                    self.status_label.setStyleSheet("color: #a6e3a1")
                    self.ok_btn.setEnabled(True)
                else:
                    # Add camera with basic information if not found
                    self.camera_info = {
                        'ip': ip,
                        'model': 'Unknown GigE Camera',
                        'serial': 'N/A',
                        'status': 'Manual Entry'
                    }
                    self.model_label.setText(self.camera_info['model'])
                    self.serial_label.setText(self.camera_info['serial'])
                    self.info_widget.show()
                    self.status_label.setText("Camera not found. Added with basic information.")
                    self.status_label.setStyleSheet("color: #fab387")  # Warning color
                    self.ok_btn.setEnabled(True)
            else:
                # If GigE Vision SDK not available, add camera with basic information
                self.camera_info = {
                    'ip': ip,
                    'model': 'Unknown GigE Camera',
                    'serial': 'N/A',
                    'status': 'Manual Entry'
                }
                self.model_label.setText(self.camera_info['model'])
                self.serial_label.setText(self.camera_info['serial'])
                self.info_widget.show()
                self.status_label.setText("Note: Camera SDK not installed. Added camera with basic information.")
                self.status_label.setStyleSheet("color: #fab387")  # Warning color
                self.ok_btn.setEnabled(True)
                
        except Exception as e:
            self.status_label.setText(f"Warning: {str(e)}")
            self.status_label.setStyleSheet("color: #fab387")  # Warning color
            self.info_widget.hide()
            self.ok_btn.setEnabled(False)
            self.camera_info = None
    
    def validate_and_accept(self):
        if self.camera_info:
            self.accept()
    
    def get_camera_info(self):
        return self.camera_info

class YOLOv8DetectorGUI(QMainWindow):
    def __init__(self):
        super().__init__()
        self.model = None
        self.connected = False
        self.running = False
        self.camera = None
        self.camera_id = 0
        self.image_source = "server"  # or "camera"
        self.scanner_thread = None
        self.initUI()

    def initUI(self):
        # Set window properties
        self.setWindowTitle('YOLOv8 AI Vision System')
        self.setGeometry(100, 100, 1200, 800)
        self.setStyleSheet(STYLE_SHEET)

        # Create main widget and layout
        main_widget = QWidget()
        self.setCentralWidget(main_widget)
        main_layout = QHBoxLayout(main_widget)
        
        # Create left panel for controls
        left_panel = QWidget()
        left_panel.setFixedWidth(350)  # Increase left panel width
        left_layout = QVBoxLayout(left_panel)
        
        # Model Configuration Group
        model_group = QGroupBox("Model Configuration")
        model_layout = QVBoxLayout()
        
        model_label = QLabel('Model Path:')
        self.model_path = QLineEdit('yolov8n.pt')
        
        model_buttons = QHBoxLayout()
        browse_btn = QPushButton('Browse Model')
        browse_btn.clicked.connect(self.browseModel)
        load_model_btn = QPushButton('Load Model')
        load_model_btn.clicked.connect(self.loadModel)
        model_buttons.addWidget(browse_btn)
        model_buttons.addWidget(load_model_btn)
        
        model_layout.addWidget(model_label)
        model_layout.addWidget(self.model_path)
        model_layout.addLayout(model_buttons)
        model_group.setLayout(model_layout)
        
        # Connection Configuration Group
        connection_group = QGroupBox("Connection Settings")
        connection_layout = QVBoxLayout()
        
        # Source selection
        source_layout = QHBoxLayout()
        self.server_radio = QRadioButton("Server")
        self.camera_radio = QRadioButton("Camera")
        self.server_radio.setChecked(True)
        self.server_radio.toggled.connect(self.toggleSource)
        source_layout.addWidget(self.server_radio)
        source_layout.addWidget(self.camera_radio)
        connection_layout.addLayout(source_layout)
        
        # Server settings
        self.server_widget = QWidget()
        server_layout = QFormLayout()
        self.server_ip = QLineEdit('192.168.1.8')
        self.server_port = QLineEdit('8844')
        server_layout.addRow('Server IP:', self.server_ip)
        server_layout.addRow('Port:', self.server_port)

        # Add protocol version selection
        protocol_layout = QHBoxLayout()
        protocol_label = QLabel("Protocol:")
        self.protocol_v1 = QRadioButton("V1 (C++ Qt)")
        self.protocol_v2 = QRadioButton("V2")
        self.protocol_v2.setChecked(True)
        protocol_layout.addWidget(protocol_label)
        protocol_layout.addWidget(self.protocol_v1)
        protocol_layout.addWidget(self.protocol_v2)
        server_layout.addRow(protocol_layout)

        self.server_widget.setLayout(server_layout)
        connection_layout.addWidget(self.server_widget)
        
        # Camera settings
        self.camera_widget = QWidget()
        camera_layout = QVBoxLayout()
        camera_layout.setSpacing(10)
        
        # Create camera selection container
        cam_select_container = QWidget()
        cam_select_layout = QHBoxLayout(cam_select_container)
        cam_select_layout.setSpacing(10)
        cam_select_layout.setContentsMargins(0, 0, 0, 0)
        
        # Create and setup camera selection combo box
        self.camera_select = QComboBox()
        self.camera_select.setFixedWidth(200)  # Increase combo box width
        
        # Create and setup refresh button with fixed width
        self.refresh_cam_btn = QPushButton("Refresh")
        self.refresh_cam_btn.setFixedWidth(100)  # Set fixed width for button
        self.refresh_cam_btn.clicked.connect(self.refreshCameras)
        
        # Add widgets to layout
        cam_select_layout.addWidget(self.camera_select)
        cam_select_layout.addWidget(self.refresh_cam_btn)
        
        # Add the container to the camera layout
        camera_layout.addWidget(cam_select_container)
        
        # Add resolution selection
        resolution_container = QWidget()
        resolution_layout = QHBoxLayout(resolution_container)
        resolution_layout.setSpacing(10)
        resolution_layout.setContentsMargins(0, 0, 0, 0)
        
        resolution_label = QLabel("Resolution:")
        self.resolution_select = QComboBox()
        self.resolution_select.addItems([
            "640x480",
            "800x600",
            "1280x720",
            "1920x1080",
            "2048x1536",
            "2592x1944"
        ])
        self.resolution_select.setCurrentText("1280x720")  # Default resolution
        self.resolution_select.currentTextChanged.connect(self.updateResolution)
        
        resolution_layout.addWidget(resolution_label)
        resolution_layout.addWidget(self.resolution_select)
        camera_layout.addWidget(resolution_container)
        
        # Add IP Scanner button to camera settings
        self.ip_scan_btn = QPushButton("IP Scanner")
        self.ip_scan_btn.clicked.connect(self.open_ip_scanner)
        camera_layout.addWidget(self.ip_scan_btn)
        
        self.camera_widget.setLayout(camera_layout)
        self.camera_widget.hide()
        connection_layout.addWidget(self.camera_widget)
        
        # Connect button
        self.connect_btn = QPushButton('Connect')
        self.connect_btn.setObjectName("connectButton")
        self.connect_btn.clicked.connect(self.toggleConnection)
        connection_layout.addWidget(self.connect_btn)
        
        connection_group.setLayout(connection_layout)
        
        # Status Group
        status_group = QGroupBox("System Status")
        status_layout = QVBoxLayout()
        self.status_text = QTextEdit()
        self.status_text.setReadOnly(True)
        self.status_text.setMaximumHeight(150)
        status_layout.addWidget(self.status_text)
        status_group.setLayout(status_layout)
        
        # Add groups to left panel
        left_layout.addWidget(model_group)
        left_layout.addWidget(connection_group)
        left_layout.addWidget(status_group)
        left_layout.addStretch()
        
        # Create right panel for image display
        right_panel = QWidget()
        right_layout = QVBoxLayout(right_panel)
        
        # Image display
        image_group = QGroupBox("AI Vision Feed")
        image_layout = QVBoxLayout()
        self.image_label = QLabel()
        self.image_label.setMinimumSize(800, 600)
        self.image_label.setAlignment(Qt.AlignCenter)
        self.image_label.setStyleSheet("QLabel { background-color: #313244; border-radius: 10px; }")
        image_layout.addWidget(self.image_label)
        image_group.setLayout(image_layout)
        
        # Detection results
        results_group = QGroupBox("Detection Results")
        results_layout = QVBoxLayout()
        self.results_text = QTextEdit()
        self.results_text.setReadOnly(True)
        self.results_text.setMaximumHeight(100)
        results_layout.addWidget(self.results_text)
        results_group.setLayout(results_layout)
        
        right_layout.addWidget(image_group)
        right_layout.addWidget(results_group)
        
        # Add panels to main layout
        main_layout.addWidget(left_panel)
        main_layout.addWidget(right_panel)
        
        # Create detection thread
        self.detect_thread = DetectionThread(self)  # Pass self as parent
        self.detect_thread.image_update.connect(self.updateImage)
        self.detect_thread.results_update.connect(self.updateResults)

    def updateStatus(self, message, level="info"):
        timestamp = QDateTime.currentDateTime().toString("hh:mm:ss")
        color = {
            "info": "#89b4fa",    # Blue
            "success": "#a6e3a1", # Green
            "warning": "#fab387", # Orange
            "error": "#f38ba8"    # Red
        }.get(level, "#cdd6f4")   # Default color
        
        self.status_text.append(f'<span style="color: {color}">[{timestamp}] {message}</span>')

    def showPopup(self, title, message, icon=QMessageBox.Information):
        msg = QMessageBox(self)
        msg.setWindowTitle(title)
        msg.setText(message)
        msg.setIcon(icon)
        msg.setStyleSheet(POPUP_STYLE)
        return msg.exec_()

    def browseModel(self):
        dialog = QFileDialog(self)
        dialog.setStyleSheet(POPUP_STYLE)
        filename, _ = dialog.getOpenFileName(
            self, 
            "Select YOLOv8 Model",
            "",
            "Model Files (*.pt);;All Files (*)"
        )
        if filename:
            self.model_path.setText(filename)
            self.updateStatus(f"Selected model: {filename}")

    def loadModel(self):
        try:
            model_path = self.model_path.text()
            self.updateStatus("Loading model...", "info")
            self.model = YOLO(model_path)
            self.detect_thread.model = self.model
            self.updateStatus("Model loaded successfully!", "success")
            self.showPopup("Success", "Model loaded successfully!")
        except Exception as e:
            self.updateStatus(f"Failed to load model: {str(e)}", "error")
            self.showPopup("Error", f"Failed to load model: {str(e)}", QMessageBox.Critical)

    def refreshCameras(self):
        self.camera_select.clear()
        self.updateStatus("Scanning for cameras...", "info")
        self.refresh_cam_btn.setEnabled(False)
        
        # Create and start scanner thread
        self.scanner_thread = CameraScannerThread()
        self.scanner_thread.finished.connect(self.onCamerasFound)
        self.scanner_thread.start()

    def onCamerasFound(self, available_cameras):
        if available_cameras:
            for cam_type, cam_id, cam_name in available_cameras:
                self.camera_select.addItem(cam_name, (cam_type, cam_id))
            self.updateStatus(f"Found {len(available_cameras)} cameras", "success")
        else:
            self.updateStatus("No cameras found", "warning")
        
        self.refresh_cam_btn.setEnabled(True)
        self.scanner_thread = None

    def toggleSource(self, checked):
        if self.server_radio.isChecked():
            self.server_widget.show()
            self.camera_widget.hide()
            self.image_source = "server"
        else:
            self.server_widget.hide()
            self.camera_widget.show()
            self.image_source = "camera"
            if self.camera_select.count() == 0:  # Only scan if no cameras listed
                self.refreshCameras()

    def toggleConnection(self):
        if not self.connected:
            try:
                if self.model is None:
                    self.updateStatus("Please load a model first!", "warning")
                    self.showPopup("Warning", "Please load a model first before connecting.", QMessageBox.Warning)
                    return

                if self.image_source == "camera" and self.camera_select.count() == 0:
                    self.updateStatus("No cameras available!", "warning")
                    self.showPopup("Warning", "No cameras found. Please refresh camera list.", QMessageBox.Warning)
                    return

                if self.image_source == "server":
                    # Server connection
                    host = self.server_ip.text()
                    port = int(self.server_port.text())
                    self.updateStatus(f"Connecting to server {host}:{port}...", "info")
                    
                    success = detect_socket.ConnectToSoftware(host, port)
                    if not success:
                        raise Exception("Connection timeout or failed")
                else:
                    # Get camera type and ID from combo box
                    selected_text = self.camera_select.currentText()
                    camera_data = self.camera_select.currentData()
                    
                    if camera_data[0] == "usb":
                        # Regular USB camera connection
                        self.camera_id = camera_data[1]
                        self.camera = cv2.VideoCapture(self.camera_id, cv2.CAP_DSHOW)
                        
                        # Get selected resolution
                        width, height = map(int, self.resolution_select.currentText().split('x'))
                        
                        # Set camera resolution
                        self.camera.set(cv2.CAP_PROP_FRAME_WIDTH, width)
                        self.camera.set(cv2.CAP_PROP_FRAME_HEIGHT, height)
                        self.camera.set(cv2.CAP_PROP_FPS, 30)
                        self.camera.set(cv2.CAP_PROP_BUFFERSIZE, 1)
                        
                        if not self.camera.isOpened():
                            raise Exception(f"Failed to open USB camera {self.camera_id}")
                        
                        # Check if resolution was set successfully
                        actual_width = self.camera.get(cv2.CAP_PROP_FRAME_WIDTH)
                        actual_height = self.camera.get(cv2.CAP_PROP_FRAME_HEIGHT)
                        if actual_width != width or actual_height != height:
                            self.updateStatus(f"Camera only supports {int(actual_width)}x{int(actual_height)}", "warning")
                        
                        self.updateStatus(f"Connected to {selected_text}", "success")
                    
                    elif camera_data[0] == "basler" and BASLER_AVAILABLE:
                        # Basler camera connection
                        tl_factory = pylon.TlFactory.GetInstance()
                        devices = tl_factory.EnumerateDevices()
                        if camera_data[1] < len(devices):
                            self.camera = pylon.InstantCamera(tl_factory.CreateDevice(devices[camera_data[1]]))
                            self.camera.Open()
                            
                            # Get selected resolution
                            width, height = map(int, self.resolution_select.currentText().split('x'))
                            
                            # Set resolution
                            self.camera.Width.SetValue(width)
                            self.camera.Height.SetValue(height)
                            
                            # Configure other settings
                            self.camera.StartGrabbing(pylon.GrabStrategy_LatestImageOnly)
                            self.camera.ExposureAuto.SetValue("Continuous")
                            self.camera.GainAuto.SetValue("Continuous")
                            self.updateStatus(f"Connected to {selected_text}", "success")
                        else:
                            raise Exception("Selected Basler camera not found")
                    elif camera_data[0] == "gige" and GIGE_AVAILABLE:
                        try:
                            logging.info("Connecting to GigE camera...")
                            h = Harvester()
                            
                            # Add CTI file
                            cti_path = 'C:/Program Files (x86)/Common Files/MVS/Runtime/Win64_x64/MvGevProvider.cti'
                            if not os.path.exists(cti_path):
                                cti_path = 'C:/Program Files (x86)/MVS/Development/GigECamera/win64/MvGevProvider.cti'
                            
                            if os.path.exists(cti_path):
                                h.add_file(cti_path)
                                h.update()
                                
                                # Create camera instance
                                self.camera = h.create(camera_data[1])
                                
                                # Get selected resolution
                                width, height = map(int, self.resolution_select.currentText().split('x'))
                                
                                # Configure camera settings
                                self.camera.remote_device.node_map.Width.value = width
                                self.camera.remote_device.node_map.Height.value = height
                                self.camera.remote_device.node_map.AcquisitionFrameRateEnable.value = True
                                self.camera.remote_device.node_map.AcquisitionFrameRate.value = 30.0
                                self.camera.remote_device.node_map.ExposureAuto.value = 'Continuous'
                                self.camera.remote_device.node_map.GainAuto.value = 'Continuous'
                                
                                # Start acquisition
                                self.camera.start()
                                logging.info("GigE camera started successfully")
                                self.updateStatus(f"Connected to {selected_text}", "success")
                            else:
                                raise Exception("CTI file not found")
                        except Exception as e:
                            logging.error(f"Failed to connect to GigE camera: {str(e)}")
                            raise Exception(f"Failed to connect to GigE camera: {str(e)}")
                    else:
                        raise Exception("Unsupported camera type")

                self.connected = True
                self.connect_btn.setText("Disconnect")
                self.connect_btn.setStyleSheet("background-color: #f38ba8;")
                self.detect_thread.image_source = self.image_source
                self.detect_thread.camera = self.camera
                self.detect_thread.camera_type = camera_data[0] if self.image_source == "camera" else "server"
                self.detect_thread.start()
                
            except Exception as e:
                self.updateStatus(f"Connection failed: {str(e)}", "error")
                self.showPopup("Error", str(e), QMessageBox.Critical)
                if self.camera:
                    if isinstance(self.camera, cv2.VideoCapture):
                        self.camera.release()
                    elif BASLER_AVAILABLE and isinstance(self.camera, pylon.InstantCamera):
                        self.camera.Close()
                    self.camera = None
        else:
            try:
                self.connected = False
                self.connect_btn.setText("Connect")
                self.connect_btn.setStyleSheet("")
                self.updateStatus("Disconnecting...", "info")
                self.detect_thread.stop()
                
                if self.image_source == "server" and detect_socket.Software_Socket:
                    detect_socket.Software_Socket.close()
                elif self.camera is not None:
                    if isinstance(self.camera, cv2.VideoCapture):
                        self.camera.release()
                    elif BASLER_AVAILABLE and isinstance(self.camera, pylon.InstantCamera):
                        self.camera.Close()
                    self.camera = None
                    
                self.updateStatus("Disconnected successfully", "success")
            except Exception as e:
                self.updateStatus(f"Error during disconnect: {str(e)}", "error")

    def updateImage(self, image):
        height, width, channel = image.shape
        bytes_per_line = 3 * width
        q_image = QImage(image.data, width, height, bytes_per_line, QImage.Format_RGB888)
        pixmap = QPixmap.fromImage(q_image)
        scaled_pixmap = pixmap.scaled(self.image_label.size(), Qt.KeepAspectRatio)
        self.image_label.setPixmap(scaled_pixmap)

    def updateResults(self, results):
        self.results_text.append(results)

    def closeEvent(self, event):
        self.updateStatus("Shutting down...", "warning")
        self.detect_thread.stop()
        if self.camera is not None:
            if isinstance(self.camera, cv2.VideoCapture):
                self.camera.release()
            elif BASLER_AVAILABLE and isinstance(self.camera, pylon.InstantCamera):
                self.camera.Close()
        event.accept()

    def open_ip_scanner(self):
        scanner = IPCameraScanner(self)
        scanner.exec_()

    def updateResolution(self):
        if self.connected and self.camera is not None:
            try:
                # Get selected resolution
                width, height = map(int, self.resolution_select.currentText().split('x'))
                
                if isinstance(self.camera, cv2.VideoCapture):
                    # For USB cameras
                    self.camera.set(cv2.CAP_PROP_FRAME_WIDTH, width)
                    self.camera.set(cv2.CAP_PROP_FRAME_HEIGHT, height)
                    actual_width = self.camera.get(cv2.CAP_PROP_FRAME_WIDTH)
                    actual_height = self.camera.get(cv2.CAP_PROP_FRAME_HEIGHT)
                    if actual_width != width or actual_height != height:
                        self.updateStatus(f"Camera only supports {int(actual_width)}x{int(actual_height)}", "warning")
                    else:
                        self.updateStatus(f"Resolution set to {width}x{height}", "success")
                
                elif BASLER_AVAILABLE and isinstance(self.camera, pylon.InstantCamera):
                    # For Basler cameras
                    self.camera.StopGrabbing()
                    self.camera.Width.SetValue(width)
                    self.camera.Height.SetValue(height)
                    self.camera.StartGrabbing(pylon.GrabStrategy_LatestImageOnly)
                    self.updateStatus(f"Resolution set to {width}x{height}", "success")
                
                elif GIGE_AVAILABLE and hasattr(self.camera, 'remote_device'):
                    # For GigE cameras
                    try:
                        self.camera.stop()
                        self.camera.remote_device.node_map.Width.value = width
                        self.camera.remote_device.node_map.Height.value = height
                        self.camera.start()
                        self.updateStatus(f"Resolution set to {width}x{height}", "success")
                    except Exception as e:
                        self.updateStatus(f"Failed to set resolution: {str(e)}", "warning")
                        # Try to restore camera streaming
                        self.camera.start()
            
            except Exception as e:
                self.updateStatus(f"Error setting resolution: {str(e)}", "error")

class DetectionThread(QThread):
    image_update = pyqtSignal(np.ndarray)
    results_update = pyqtSignal(str)

    def __init__(self, parent=None):
        super().__init__(parent)
        self.model = None
        self.running = False
        self.camera = None
        self.camera_type = None
        self.image_source = "server"
        self.frame_count = 0
        self.last_fps_time = time.time()
        self.fps = 0

    def Get_Image1(self):
        """Get image using protocol v1 (C++ Qt)"""
        try:
            # Read image parameters (width, height, channels)
            params = detect_socket.Software_Socket.recv(12)  # 3 integers * 4 bytes
            if not params or len(params) != 12:
                return None
            
            width, height, channels = struct.unpack('3i', params)
            
            # Calculate total image size
            total_size = width * height * channels
            received_data = bytearray()
            
            # Receive image data row by row
            for i in range(height):
                row_size = width * channels
                row_data = bytearray()
                
                while len(row_data) < row_size:
                    chunk_size = min(1024, row_size - len(row_data))
                    chunk = detect_socket.Software_Socket.recv(chunk_size)
                    if not chunk:
                        return None
                    row_data.extend(chunk)
                
                received_data.extend(row_data)
            
            # Convert received data to numpy array
            img_array = np.frombuffer(received_data, dtype=np.uint8)
            image = img_array.reshape((height, width, channels))
            
            return image
        
        except Exception as e:
            print(f"Error receiving image v1: {str(e)}")
            return None

    def run(self):
        self.running = True
        while self.running:
            try:
                # Get image from selected source
                if self.image_source == "server":
                    # Use selected protocol version
                    main_window = self.parent()
                    if main_window and main_window.protocol_v1.isChecked():
                        image = self.Get_Image1()
                    else:
                        image = detect_socket.Get_Image2()
                else:
                    if self.camera_type == "usb":
                        # Regular USB camera
                        if not self.camera.grab():
                            continue
                        ret, image = self.camera.retrieve()
                        if not ret:
                            continue
                    elif self.camera_type == "basler" and BASLER_AVAILABLE:
                        # Basler camera
                        grabResult = self.camera.RetrieveResult(5000, pylon.TimeoutHandling_ThrowException)
                        if grabResult.GrabSucceeded():
                            # Convert to OpenCV format
                            image = grabResult.Array
                            # Convert mono8 to BGR if needed
                            if len(image.shape) == 2:
                                image = cv2.cvtColor(image, cv2.COLOR_GRAY2BGR)
                            # Ensure correct format for YOLOv8
                            if image.dtype != np.uint8:
                                image = image.astype(np.uint8)
                            grabResult.Release()
                        else:
                            grabResult.Release()
                            continue
                    elif self.camera_type == "gige" and GIGE_AVAILABLE:
                        try:
                            with self.camera.fetch_buffer() as buffer:
                                # Convert image to OpenCV format
                                component = buffer.payload.components[0]
                                
                                # Get image data
                                image = component.data.reshape(component.height, component.width, -1)
                                
                                # Convert to BGR if needed
                                if len(image.shape) == 2:  # Mono
                                    image = cv2.cvtColor(image, cv2.COLOR_GRAY2BGR)
                                elif image.shape[2] == 3:  # Color
                                    if component.pixel_format.startswith('RGB'):
                                        image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
                                    elif component.pixel_format.startswith('BGR'):
                                        pass  # Already in BGR format
                                    else:
                                        logging.warning(f"Unknown pixel format: {component.pixel_format}")
                                
                                # Ensure uint8 format
                                if image.dtype != np.uint8:
                                    image = image.astype(np.uint8)
                        except Exception as e:
                            logging.error(f"Error getting image from GigE camera: {str(e)}")
                            continue
                    else:
                        continue
                    
                    # Calculate FPS
                    self.frame_count += 1
                    if self.frame_count % 30 == 0:
                        current_time = time.time()
                        self.fps = 30 / (current_time - self.last_fps_time)
                        self.last_fps_time = current_time

                if image is not None and self.model is not None:
                    # Run YOLOv8 inference
                    results = self.model(image)
                    
                    # Generate results string
                    result_string = "#Blobs = "
                    img_height, img_width = image.shape[:2]

                    for r in results:
                        for box in r.boxes.xywhn:
                            id = int(r.boxes.cls[0])
                            x = int(box[0] * img_width)
                            y = int(box[1] * img_height)
                            w = int(box[2] * img_width)
                            h = int(box[3] * img_height)
                            angle = 0
                            result_string += f"{id},{x},{y},{w},{h},{angle};"

                    # Send results back to server if in server mode
                    if self.image_source == "server":
                        detect_socket.Software_Socket.sendall(result_string.encode())
                    
                    # Update GUI
                    annotated_frame = results[0].plot()
                    
                    # Add FPS counter if using camera
                    if self.image_source == "camera":
                        cv2.putText(annotated_frame, f"FPS: {self.fps:.1f}", 
                                  (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1, 
                                  (0, 255, 0), 2)
                    
                    self.image_update.emit(cv2.cvtColor(annotated_frame, cv2.COLOR_BGR2RGB))
                    self.results_update.emit(result_string)

                # Optimize sleep time based on source
                if self.image_source == "camera":
                    time.sleep(0.001)  # Minimal sleep to prevent CPU overload
                else:
                    time.sleep(0.03)  # Normal sleep for server mode

            except Exception as e:
                print(f"Detection error: {str(e)}")
                time.sleep(1)

    def stop(self):
        self.running = False
        self.wait()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = YOLOv8DetectorGUI()
    window.show()
    sys.exit(app.exec_()) 