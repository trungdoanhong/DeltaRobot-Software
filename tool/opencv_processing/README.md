# OpenCV Processing Tool

A visual node-based image processing tool built with Python, OpenCV, and PyQt5.

## Features

- Node-based interface for image processing
- Real-time preview of changes
- Support for multiple input sources (camera, image files, video files)
- Various image processing operations:
  - Color adjustments (brightness, contrast, color space conversion)
  - Filters (blur, Gaussian, median, bilateral)
  - Transformations (resize, rotate, flip)
- Save processed images
- Multi-threaded processing to maintain UI responsiveness

## Installation

1. Create a virtual environment (recommended):
```bash
python -m venv venv
source venv/bin/activate  # On Windows: venv\Scripts\activate
```

2. Install dependencies:
```bash
pip install -r requirements.txt
```

## Usage

1. Run the application:
```bash
python src/main.py
```

2. Create a processing pipeline:
   - Drag source nodes (Camera, Image, Video) from the toolbar
   - Add processing nodes (Color, Filter, Transform)
   - Add output nodes (Display, Save)
   - Connect nodes by dragging from output ports to input ports

3. Configure nodes:
   - Click on nodes to adjust their parameters
   - Use sliders and combo boxes to control processing operations
   - View results in real-time through Display nodes
   - Save results using Save nodes

## Node Types

### Source Nodes
- **Camera**: Capture from webcam
- **Image**: Load from file
- **Video**: Load from video file

### Processing Nodes
- **Color**: Adjust brightness, contrast, and color space
- **Filter**: Apply various image filters
- **Transform**: Resize, rotate, or flip images

### Output Nodes
- **Display**: Show processed image
- **Save**: Save image to file (manual or auto-save)

## Development

The project is structured as follows:

```
opencv_processing/
├── src/
│   └── main.py
├── nodes/
│   ├── base_node.py
│   ├── source_nodes.py
│   ├── processing_nodes.py
│   ├── output_nodes.py
│   └── port.py
├── ui/
│   ├── main_window.py
│   ├── node_editor.py
│   └── toolbar.py
├── utils/
│   └── image_processing.py
├── requirements.txt
└── README.md
``` 