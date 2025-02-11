# YOLOv8 Detector GUI

A graphical user interface (GUI) application for object detection using YOLOv8, supporting both standard USB cameras and Basler industrial cameras.

## Key Features

- User-friendly interface built with PyQt5
- Multiple image sources supported:
  - USB cameras
  - Basler industrial cameras
  - Server connection
- Flexible YOLOv8 model selection
- Real-time detection display
- Modern dark theme interface
- Multi-camera support with easy switching

## System Requirements

- Python 3.8+
- PyQt5
- OpenCV
- Ultralytics YOLOv8
- Pypylon (for Basler cameras)

## Installation

1. Clone repository:
```bash
git clone <repository-url>
cd yolov8_detector
```

2. Install dependencies:
```bash
pip install -r requirements.txt
```

3. Install Pylon Camera Software Suite (if using Basler cameras)

## Usage

1. Run the program:
```bash
python src/yolov8_detect_gui.py
```

2. Select YOLOv8 model (.pt file)
3. Choose image source (Server/Camera)
4. Connect and start detection

## Directory Structure

```
yolov8_detector/
├── src/
│   ├── yolov8_detect_gui.py
│   └── detect_socket.py
├── docs/
│   ├── installation.md
│   ├── usage.md
│   └── api.md
├── requirements.txt
└── README.md
```

## Contributing

Contributions are welcome. Please feel free to submit issues or pull requests. 