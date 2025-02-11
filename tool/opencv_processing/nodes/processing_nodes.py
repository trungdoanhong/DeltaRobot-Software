from PyQt5.QtWidgets import (QComboBox, QSlider, QLabel, QSpinBox, 
                            QPushButton, QVBoxLayout, QHBoxLayout, QWidget)
from PyQt5.QtCore import Qt, QTimer
import cv2
import numpy as np
from .base_node import BaseNode
from .port import Port

class ColorNode(BaseNode):
    def __init__(self):
        super().__init__(title="Color Processing")
        
        # Add input and output ports
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Color space conversion
        self.color_combo = QComboBox()
        self.color_combo.addItems(["RGB", "BGR", "HSV", "Grayscale"])
        self.color_combo.currentIndexChanged.connect(self.process_image)
        layout.addWidget(self.color_combo)
        
        # Brightness control
        layout.addWidget(QLabel("Brightness"))
        self.brightness_slider = QSlider(Qt.Horizontal)
        self.brightness_slider.setRange(-100, 100)
        self.brightness_slider.setValue(0)
        self.brightness_slider.valueChanged.connect(self.process_image)
        layout.addWidget(self.brightness_slider)
        
        # Contrast control
        layout.addWidget(QLabel("Contrast"))
        self.contrast_slider = QSlider(Qt.Horizontal)
        self.contrast_slider.setRange(-100, 100)
        self.contrast_slider.setValue(0)
        self.contrast_slider.valueChanged.connect(self.process_image)
        layout.addWidget(self.contrast_slider)
        
    def process_image(self):
        image = self.get_input_data(0)
        if image is None:
            return
            
        # Apply color space conversion
        color_space = self.color_combo.currentText()
        if color_space == "HSV":
            image = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
        elif color_space == "Grayscale":
            image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
            image = cv2.cvtColor(image, cv2.COLOR_GRAY2BGR)
            
        # Apply brightness and contrast
        brightness = self.brightness_slider.value()
        contrast = self.contrast_slider.value()
        
        image = cv2.convertScaleAbs(image, alpha=1 + contrast/100,
                                  beta=brightness)
        
        self.set_output_data(0, image)

class FilterNode(BaseNode):
    def __init__(self):
        super().__init__(title="Image Filter")
        
        # Add input and output ports
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Filter type
        self.filter_combo = QComboBox()
        self.filter_combo.addItems(["Blur", "Gaussian", "Median", "Bilateral"])
        self.filter_combo.currentIndexChanged.connect(self.process_image)
        layout.addWidget(self.filter_combo)
        
        # Kernel size
        layout.addWidget(QLabel("Kernel Size"))
        self.kernel_spin = QSpinBox()
        self.kernel_spin.setRange(1, 31)
        self.kernel_spin.setSingleStep(2)
        self.kernel_spin.setValue(3)
        self.kernel_spin.valueChanged.connect(self.process_image)
        layout.addWidget(self.kernel_spin)
        
    def process_image(self):
        image = self.get_input_data(0)
        if image is None:
            return
            
        kernel_size = self.kernel_spin.value()
        filter_type = self.filter_combo.currentText()
        
        if filter_type == "Blur":
            image = cv2.blur(image, (kernel_size, kernel_size))
        elif filter_type == "Gaussian":
            image = cv2.GaussianBlur(image, (kernel_size, kernel_size), 0)
        elif filter_type == "Median":
            image = cv2.medianBlur(image, kernel_size)
        elif filter_type == "Bilateral":
            image = cv2.bilateralFilter(image, kernel_size, 75, 75)
            
        self.set_output_data(0, image)

class TransformNode(BaseNode):
    def __init__(self):
        super().__init__(title="Image Transform")
        
        # Add input and output ports
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Transform type
        self.transform_combo = QComboBox()
        self.transform_combo.addItems(["Resize", "Rotate", "Flip"])
        self.transform_combo.currentIndexChanged.connect(self.process_image)
        layout.addWidget(self.transform_combo)
        
        # Scale factor for resize
        layout.addWidget(QLabel("Scale Factor"))
        self.scale_slider = QSlider(Qt.Horizontal)
        self.scale_slider.setRange(10, 200)
        self.scale_slider.setValue(100)
        self.scale_slider.valueChanged.connect(self.process_image)
        layout.addWidget(self.scale_slider)
        
        # Rotation angle
        layout.addWidget(QLabel("Rotation Angle"))
        self.angle_slider = QSlider(Qt.Horizontal)
        self.angle_slider.setRange(0, 360)
        self.angle_slider.setValue(0)
        self.angle_slider.valueChanged.connect(self.process_image)
        layout.addWidget(self.angle_slider)
        
        # Flip direction
        self.flip_combo = QComboBox()
        self.flip_combo.addItems(["Horizontal", "Vertical", "Both"])
        self.flip_combo.currentIndexChanged.connect(self.process_image)
        layout.addWidget(self.flip_combo)
        
    def process_image(self):
        image = self.get_input_data(0)
        if image is None:
            return
            
        transform_type = self.transform_combo.currentText()
        
        if transform_type == "Resize":
            scale = self.scale_slider.value() / 100
            width = int(image.shape[1] * scale)
            height = int(image.shape[0] * scale)
            image = cv2.resize(image, (width, height))
            
        elif transform_type == "Rotate":
            angle = self.angle_slider.value()
            center = (image.shape[1] // 2, image.shape[0] // 2)
            matrix = cv2.getRotationMatrix2D(center, angle, 1.0)
            image = cv2.warpAffine(image, matrix, (image.shape[1], image.shape[0]))
            
        elif transform_type == "Flip":
            flip_direction = self.flip_combo.currentText()
            if flip_direction == "Horizontal":
                image = cv2.flip(image, 1)
            elif flip_direction == "Vertical":
                image = cv2.flip(image, 0)
            else:  # Both
                image = cv2.flip(image, -1)
                
        self.set_output_data(0, image)

class ResizeNode(BaseNode):
    def __init__(self):
        super().__init__(title="Resize")
        
        # Add input and output ports
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Width control
        width_layout = QHBoxLayout()
        width_layout.addWidget(QLabel("Width:"))
        self.width_spin = QSpinBox()
        self.width_spin.setRange(1, 10000)
        self.width_spin.setValue(640)
        self.width_spin.valueChanged.connect(self.process_image)
        width_layout.addWidget(self.width_spin)
        layout.addLayout(width_layout)
        
        # Height control
        height_layout = QHBoxLayout()
        height_layout.addWidget(QLabel("Height:"))
        self.height_spin = QSpinBox()
        self.height_spin.setRange(1, 10000)
        self.height_spin.setValue(480)
        self.height_spin.valueChanged.connect(self.process_image)
        height_layout.addWidget(self.height_spin)
        layout.addLayout(height_layout)
        
    def process_image(self):
        image = self.get_input_data(0)
        if image is not None:
            width = self.width_spin.value()
            height = self.height_spin.value()
            resized = cv2.resize(image, (width, height))
            self.set_output_data(0, resized)

class WarpPerspectiveNode(BaseNode):
    def __init__(self):
        super().__init__(title="Warp Perspective", width=220, height=200)
        self.points = []  # Initialize points list
        self.image = None  # Initialize image reference
        self.warped_result = None  # Store warped result
        
        # Add input and output ports
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # Width and height for output
        width_layout = QHBoxLayout()
        width_layout.addWidget(QLabel("Width:"))
        self.width_spin = QSpinBox()
        self.width_spin.setRange(1, 10000)
        self.width_spin.setValue(640)
        width_layout.addWidget(self.width_spin)
        layout.addLayout(width_layout)
        
        height_layout = QHBoxLayout()
        height_layout.addWidget(QLabel("Height:"))
        self.height_spin = QSpinBox()
        self.height_spin.setRange(1, 10000)
        self.height_spin.setValue(480)
        height_layout.addWidget(self.height_spin)
        layout.addLayout(height_layout)
        
        # Button to set points
        self.set_points_btn = QPushButton("Set Points")
        self.set_points_btn.clicked.connect(self.set_points)
        layout.addWidget(self.set_points_btn)
        
        # Status label
        self.status_label = QLabel("Click 'Set Points' and select 4 points")
        self.status_label.setWordWrap(True)
        layout.addWidget(self.status_label)
        
    def set_points(self):
        image = self.get_input_data(0)
        if image is not None:
            self.image = image.copy()
            self.points = []  # Reset points when setting new ones
            cv2.namedWindow("Set Points")
            cv2.setMouseCallback("Set Points", self.mouse_callback)
            cv2.imshow("Set Points", image)
            
    def mouse_callback(self, event, x, y, flags, param):
        if event == cv2.EVENT_LBUTTONDOWN and len(self.points) < 4:
            self.points.append([x, y])
            img_copy = self.image.copy()
            for point in self.points:
                cv2.circle(img_copy, tuple(point), 5, (0, 255, 0), -1)
            cv2.imshow("Set Points", img_copy)
            
            if len(self.points) == 4:
                cv2.destroyWindow("Set Points")
                self.process_image()
                self.status_label.setText("Points set successfully")
            
    def get_output_data(self, port_index):
        """Override to return warped result"""
        if port_index == 0:
            return self.warped_result
        return None
        
    def _process_image(self):
        image = self.get_input_data(0)
        if image is not None:
            if len(self.points) == 4:
                width = self.width_spin.value()
                height = self.height_spin.value()
                
                src_points = np.float32(self.points)
                dst_points = np.float32([[0, 0], [width, 0], [width, height], [0, height]])
                
                matrix = cv2.getPerspectiveTransform(src_points, dst_points)
                self.warped_result = cv2.warpPerspective(image, matrix, (width, height))
                
                # Set output data
                self.set_output_data(0, self.warped_result)
            else:
                # Pass through original image if no points set
                self.warped_result = image
                self.set_output_data(0, image)

class CropNode(BaseNode):
    def __init__(self):
        super().__init__(title="Crop")
        
        # Add input and output ports
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
    def setup_content(self, layout):
        # X control
        x_layout = QHBoxLayout()
        x_layout.addWidget(QLabel("X:"))
        self.x_spin = QSpinBox()
        self.x_spin.setRange(0, 10000)
        self.x_spin.valueChanged.connect(self.process_image)
        x_layout.addWidget(self.x_spin)
        layout.addLayout(x_layout)
        
        # Y control
        y_layout = QHBoxLayout()
        y_layout.addWidget(QLabel("Y:"))
        self.y_spin = QSpinBox()
        self.y_spin.setRange(0, 10000)
        self.y_spin.valueChanged.connect(self.process_image)
        y_layout.addWidget(self.y_spin)
        layout.addLayout(y_layout)
        
        # Width control
        width_layout = QHBoxLayout()
        width_layout.addWidget(QLabel("Width:"))
        self.width_spin = QSpinBox()
        self.width_spin.setRange(1, 10000)
        self.width_spin.valueChanged.connect(self.process_image)
        width_layout.addWidget(self.width_spin)
        layout.addLayout(width_layout)
        
        # Height control
        height_layout = QHBoxLayout()
        height_layout.addWidget(QLabel("Height:"))
        self.height_spin = QSpinBox()
        self.height_spin.setRange(1, 10000)
        self.height_spin.valueChanged.connect(self.process_image)
        height_layout.addWidget(self.height_spin)
        layout.addLayout(height_layout)
        
    def process_image(self):
        image = self.get_input_data(0)
        if image is not None:
            x = self.x_spin.value()
            y = self.y_spin.value()
            w = self.width_spin.value()
            h = self.height_spin.value()
            
            # Update spin box ranges based on image size
            if not self.width_spin.maximum() == image.shape[1]:
                self.x_spin.setMaximum(image.shape[1] - 1)
                self.width_spin.setMaximum(image.shape[1])
                self.y_spin.setMaximum(image.shape[0] - 1)
                self.height_spin.setMaximum(image.shape[0])
            
            # Ensure crop region is within image bounds
            x = min(x, image.shape[1] - 1)
            y = min(y, image.shape[0] - 1)
            w = min(w, image.shape[1] - x)
            h = min(h, image.shape[0] - y)
            
            cropped = image[y:y+h, x:x+w]
            self.set_output_data(0, cropped)

class HSVFilterNode(BaseNode):
    def __init__(self):
        super().__init__(title="HSV Filter", width=220, height=280)
        
        # Add input port
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        # Add output ports for mask and filtered result
        mask_port = Port(self, is_input=False)
        mask_port.setPos(self.width, self.height/3)
        self.output_ports.append(mask_port)
        
        filtered_port = Port(self, is_input=False)
        filtered_port.setPos(self.width, 2*self.height/3)
        self.output_ports.append(filtered_port)
        
        # Store results
        self.mask_result = None
        self.filtered_result = None
        
    def setup_content(self, layout):
        # Hue range
        layout.addWidget(QLabel("Hue Range (0-179):"))
        hue_layout = QHBoxLayout()
        self.hue_min = QSpinBox()
        self.hue_min.setRange(0, 179)
        self.hue_max = QSpinBox()
        self.hue_max.setRange(0, 179)
        self.hue_max.setValue(179)
        hue_layout.addWidget(self.hue_min)
        hue_layout.addWidget(self.hue_max)
        layout.addLayout(hue_layout)
        
        # Saturation range
        layout.addWidget(QLabel("Saturation Range (0-255):"))
        sat_layout = QHBoxLayout()
        self.sat_min = QSpinBox()
        self.sat_min.setRange(0, 255)
        self.sat_max = QSpinBox()
        self.sat_max.setRange(0, 255)
        self.sat_max.setValue(255)
        sat_layout.addWidget(self.sat_min)
        sat_layout.addWidget(self.sat_max)
        layout.addLayout(sat_layout)
        
        # Value range
        layout.addWidget(QLabel("Value Range (0-255):"))
        val_layout = QHBoxLayout()
        self.val_min = QSpinBox()
        self.val_min.setRange(0, 255)
        self.val_max = QSpinBox()
        self.val_max.setRange(0, 255)
        self.val_max.setValue(255)
        val_layout.addWidget(self.val_min)
        val_layout.addWidget(self.val_max)
        layout.addLayout(val_layout)
        
        # Add output port labels
        layout.addWidget(QLabel("\nOutputs:"))
        layout.addWidget(QLabel("Top: Binary Mask"))
        layout.addWidget(QLabel("Bottom: Filtered Image"))
        
        # Connect all controls to process_image
        for spin in [self.hue_min, self.hue_max, self.sat_min, 
                    self.sat_max, self.val_min, self.val_max]:
            spin.valueChanged.connect(self.process_image)
        
    def _process_image(self):
        image = self.get_input_data(0)
        if image is not None:
            # Convert to HSV
            hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)
            
            # Create mask
            lower = np.array([self.hue_min.value(), 
                            self.sat_min.value(), 
                            self.val_min.value()])
            upper = np.array([self.hue_max.value(), 
                            self.sat_max.value(), 
                            self.val_max.value()])
            
            # Get binary mask
            mask = cv2.inRange(hsv, lower, upper)
            
            # Convert mask to BGR for display
            self.mask_result = cv2.cvtColor(mask, cv2.COLOR_GRAY2BGR)
            
            # Apply mask to original image
            self.filtered_result = cv2.bitwise_and(image, image, mask=mask)
            
            # Output mask and filtered image
            self.set_output_data(0, self.mask_result)  # Binary mask (top port)
            self.set_output_data(1, self.filtered_result)  # Filtered image (bottom port)
            
    def get_output_data(self, port_index):
        """Return stored results based on port index"""
        if port_index == 0:
            return self.mask_result  # Return mask for preview and top port
        elif port_index == 1:
            return self.filtered_result  # Return filtered image for bottom port
        return None

class ContourNode(BaseNode):
    def __init__(self):
        super().__init__(title="Find Contours")
        
        # Add input and output ports
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
        # Store last result
        self.last_contours = None
        self.last_image = None
        
    def setup_content(self, layout):
        # Mode selection
        layout.addWidget(QLabel("Mode:"))
        self.mode_combo = QComboBox()
        self.mode_combo.addItems(["External", "List", "Tree"])
        self.mode_combo.currentIndexChanged.connect(self.process_image)
        layout.addWidget(self.mode_combo)
        
        # Method selection
        layout.addWidget(QLabel("Method:"))
        self.method_combo = QComboBox()
        self.method_combo.addItems(["None", "Simple", "TC89_L1", "TC89_KCOS"])
        self.method_combo.currentIndexChanged.connect(self.process_image)
        layout.addWidget(self.method_combo)
        
        # Min area
        min_area_layout = QHBoxLayout()
        min_area_layout.addWidget(QLabel("Min Area:"))
        self.min_area = QSpinBox()
        self.min_area.setRange(0, 100000)
        self.min_area.setValue(100)
        self.min_area.valueChanged.connect(self.process_image)
        min_area_layout.addWidget(self.min_area)
        layout.addLayout(min_area_layout)
        
    def _process_image(self):
        image = self.get_input_data(0)
        if image is not None:
            # Store original image
            self.last_image = image.copy()
            
            # Convert to grayscale if needed
            if len(image.shape) == 3:
                gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
            else:
                gray = image
                
            # Get mode
            modes = {
                "External": cv2.RETR_EXTERNAL,
                "List": cv2.RETR_LIST,
                "Tree": cv2.RETR_TREE
            }
            mode = modes[self.mode_combo.currentText()]
            
            # Get method
            methods = {
                "None": cv2.CHAIN_APPROX_NONE,
                "Simple": cv2.CHAIN_APPROX_SIMPLE,
                "TC89_L1": cv2.CHAIN_APPROX_TC89_L1,
                "TC89_KCOS": cv2.CHAIN_APPROX_TC89_KCOS
            }
            method = methods[self.method_combo.currentText()]
            
            # Find contours
            contours, _ = cv2.findContours(gray, mode, method)
            
            # Filter by area
            min_area = self.min_area.value()
            contours = [cnt for cnt in contours if cv2.contourArea(cnt) > min_area]
            
            # Store and output contours
            self.last_contours = contours
            self.set_output_data(0, {"image": self.last_image, "contours": contours})
            
    def get_output_data(self, port_index):
        """Override to return image for preview"""
        if self.last_contours is not None and self.last_image is not None:
            # For preview, return the image with contours drawn
            preview = self.last_image.copy()
            cv2.drawContours(preview, self.last_contours, -1, (0, 255, 0), 2)
            return preview
        return None
        
    def set_output_data(self, port_index, data):
        """Override to handle both preview and data output"""
        if port_index < len(self.output_ports):
            # Store data internally
            if isinstance(data, dict):
                self.last_image = data["image"]
                self.last_contours = data["contours"]
            # Pass data to connected nodes
            self.output_ports[port_index].set_data(data)
            # Process connected nodes with delay
            for connection in self.output_ports[port_index].connections:
                target_node = connection.target_port.parentItem()
                if hasattr(target_node, 'process_image'):
                    QTimer.singleShot(10, target_node.process_image)

class DrawContoursNode(BaseNode):
    def __init__(self):
        super().__init__(title="Draw Contours", width=220, height=200)
        
        # Add input ports for image and contours
        image_port = Port(self, is_input=True)
        image_port.setPos(0, self.height/3)
        self.input_ports.append(image_port)
        
        contours_port = Port(self, is_input=True)
        contours_port.setPos(0, 2*self.height/3)
        self.input_ports.append(contours_port)
        
        # Add output port
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
        # Store last result
        self.last_result = None
        
    def setup_content(self, layout):
        # Color selection
        layout.addWidget(QLabel("Color (B,G,R):"))
        color_layout = QHBoxLayout()
        self.blue = QSpinBox()
        self.blue.setRange(0, 255)
        self.blue.setValue(0)
        self.green = QSpinBox()
        self.green.setRange(0, 255)
        self.green.setValue(255)
        self.red = QSpinBox()
        self.red.setRange(0, 255)
        self.red.setValue(0)
        color_layout.addWidget(self.blue)
        color_layout.addWidget(self.green)
        color_layout.addWidget(self.red)
        layout.addLayout(color_layout)
        
        # Thickness
        thickness_layout = QHBoxLayout()
        thickness_layout.addWidget(QLabel("Thickness:"))
        self.thickness = QSpinBox()
        self.thickness.setRange(-1, 100)
        self.thickness.setValue(2)
        thickness_layout.addWidget(self.thickness)
        layout.addLayout(thickness_layout)
        
        # Connect all controls to process_image
        for spin in [self.blue, self.green, self.red, self.thickness]:
            spin.valueChanged.connect(self.process_image)
            
    def _process_image(self):
        # Get image from first input
        image_data = self.get_input_data(0)
        if isinstance(image_data, dict) and "image" in image_data:
            image = image_data["image"]
        else:
            image = image_data
            
        # Get contours from second input
        contours_data = self.get_input_data(1)
        if isinstance(contours_data, dict) and "contours" in contours_data:
            contours = contours_data["contours"]
        else:
            contours = contours_data
        
        if image is not None and contours is not None:
            # Create copy of image
            result = image.copy()
            
            # Get color and thickness
            color = (self.blue.value(), self.green.value(), self.red.value())
            thickness = self.thickness.value()
            
            # Draw contours
            cv2.drawContours(result, contours, -1, color, thickness)
            
            # Store and output result
            self.last_result = result
            self.set_output_data(0, result)
            
    def get_output_data(self, port_index):
        """Override to return image for preview"""
        return self.last_result

    def set_output_data(self, port_index, data):
        """Override to handle both preview and data output"""
        if port_index < len(self.output_ports):
            # Store result internally
            self.last_result = data
            # Pass data to connected nodes
            self.output_ports[port_index].set_data(data)
            # Process connected nodes with delay
            for connection in self.output_ports[port_index].connections:
                target_node = connection.target_port.parentItem()
                if hasattr(target_node, 'process_image'):
                    QTimer.singleShot(10, target_node.process_image)

class ContourInfoNode(BaseNode):
    def __init__(self):
        super().__init__(title="Contour Info")
        
        # Add input port for contours
        input_port = Port(self, is_input=True)
        input_port.setPos(0, self.height/2)
        self.input_ports.append(input_port)
        
        # Add output port for visualization
        output_port = Port(self, is_input=False)
        output_port.setPos(self.width, self.height/2)
        self.output_ports.append(output_port)
        
        # Store last contours
        self.last_contours = None
        
    def setup_content(self, layout):
        # Create info display label
        self.info_label = QLabel()
        self.info_label.setStyleSheet("color: white; background-color: #383B4F; padding: 5px; border-radius: 3px;")
        self.info_label.setWordWrap(True)
        self.info_label.setMinimumWidth(160)
        layout.addWidget(self.info_label)
        
    def _process_image(self):
        contours_data = self.get_input_data(0)
        if isinstance(contours_data, dict) and "contours" in contours_data:
            contours = contours_data["contours"]
        else:
            contours = contours_data
            
        if contours is not None:
            info_text = f"Number of contours: {len(contours)}\n\n"
            
            for i, cnt in enumerate(contours[:5]):  # Show first 5 contours
                area = cv2.contourArea(cnt)
                perimeter = cv2.arcLength(cnt, True)
                x, y, w, h = cv2.boundingRect(cnt)
                
                info_text += f"Contour {i+1}:\n"
                info_text += f"Area: {area:.1f}\n"
                info_text += f"Perimeter: {perimeter:.1f}\n"
                info_text += f"Position: ({x}, {y})\n"
                info_text += f"Size: {w}x{h}\n\n"
                
            if len(contours) > 5:
                info_text += f"... and {len(contours)-5} more"
                
            self.info_label.setText(info_text)
            self.last_contours = contours
            self.set_output_data(0, contours_data)
            
    def get_output_data(self, port_index):
        """Override to return data for preview"""
        if self.last_contours is not None:
            return {"contours": self.last_contours}
        return None

    def set_output_data(self, port_index, data):
        """Override to handle both preview and data output"""
        if port_index < len(self.output_ports):
            # Store contours internally
            if isinstance(data, dict) and "contours" in data:
                self.last_contours = data["contours"]
            else:
                self.last_contours = data
            # Pass data to connected nodes
            self.output_ports[port_index].set_data(data)
            # Process connected nodes with delay
            for connection in self.output_ports[port_index].connections:
                target_node = connection.target_port.parentItem()
                if hasattr(target_node, 'process_image'):
                    QTimer.singleShot(10, target_node.process_image) 