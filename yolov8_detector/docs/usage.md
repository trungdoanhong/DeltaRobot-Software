# Usage Guide

## Starting the Program
1. Open terminal/command prompt
2. Navigate to project directory:
```bash
cd yolov8_detector
```
3. Run the program:
```bash
python src/yolov8_detect_gui.py
```

## Model Configuration
1. Click "Browse Model" to select YOLOv8 model file (.pt)
2. Click "Load Model" to load the model
3. Wait for "Model loaded successfully!" message

## Select Image Source
### Server Connection
1. Select "Server" in Connection Settings
2. Enter server IP and Port
3. Click "Connect"

### Using Camera
1. Select "Camera" in Connection Settings
2. Click "Refresh" to scan for cameras
3. Select camera from the list
4. Click "Connect"

## View Results
- Camera/video stream displays in AI Vision Feed
- Detection results show in Detection Results
- Status information appears in System Status

## Basler Camera Settings
- Exposure and Gain adjust automatically
- FPS displays in top-left corner
- Resolution optimized for object detection

## Common Issues
1. Camera not found:
   - Check USB/GigE connection
   - Click "Refresh" to scan again
   
2. Server connection error:
   - Verify IP and Port
   - Ensure server is running
   
3. No image display:
   - Check camera connection
   - Try disconnecting and reconnecting

4. Inaccurate detection:
   - Verify model is loaded
   - Adjust environmental lighting
   
## Closing the Program
1. Click "Disconnect" if connected
2. Close program window 