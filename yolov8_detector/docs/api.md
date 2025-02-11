# API Documentation

## Classes

### YOLOv8DetectorGUI
Main application class, inherits from QMainWindow.

#### Methods
- `__init__()`: Initialize GUI and components
- `initUI()`: Setup user interface
- `updateStatus(message, level)`: Update status messages
- `browseModel()`: Open model selection dialog
- `loadModel()`: Load YOLOv8 model
- `refreshCameras()`: Scan and update camera list
- `toggleSource()`: Switch between server and camera sources
- `toggleConnection()`: Connect/disconnect from image source
- `updateImage(image)`: Update displayed image
- `updateResults(results)`: Update detection results

### DetectionThread
Object detection processing thread class, inherits from QThread.

#### Methods
- `__init__()`: Initialize thread
- `run()`: Main detection loop
- `stop()`: Stop thread

### CameraScannerThread
Camera scanning thread class, inherits from QThread.

#### Methods
- `__init__()`: Initialize thread
- `run()`: Scan and return camera list

## Signals
- `image_update`: Emitted when new image is available
- `results_update`: Emitted when new detection results are available
- `finished`: Emitted when camera scanning is complete

## Camera Support
### USB Camera
```python
camera = cv2.VideoCapture(camera_id, cv2.CAP_DSHOW)
```

### Basler Camera
```python
camera = pylon.InstantCamera(tl_factory.CreateDevice(devices[camera_id]))
```

## Detection Format
Detection results are returned in format:
```
#Blobs = id,x,y,w,h,angle;id,x,y,w,h,angle;...
```
Where:
- id: Object ID
- x, y: Center coordinates
- w, h: Width, height
- angle: Rotation angle

## Style Constants
- `POPUP_STYLE`: Style for message boxes
- `STYLE_SHEET`: Main application style 