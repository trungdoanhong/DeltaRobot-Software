# Installation Guide

## System Requirements
- Windows 10/11 or Linux
- Python 3.8 or higher
- CUDA (optional, for GPU acceleration)

## Step 1: Install Python
1. Download Python from [python.org](https://www.python.org/downloads/)
2. Install Python, make sure to check "Add Python to PATH"
3. Verify installation with:
```bash
python --version
pip --version
```

## Step 2: Install Dependencies
1. Install required Python libraries:
```bash
pip install -r requirements.txt
```

## Step 3: Install Camera Software
### For Basler cameras:
1. Download Pylon Camera Software Suite from Basler website
2. Install the software
3. Install Pypylon:
```bash
pip install pypylon
```

### For GigE cameras:
1. Install camera manufacturer's SDK:
   - Hikvision MVS SDK
   - MATRIX VISION mvIMPACT Acquire
   - Other manufacturer SDKs as needed
2. Install Harvesters:
```bash
pip install harvesters harvesters_gui
```

## Step 4: Install CUDA (optional)
1. Check NVIDIA graphics card
2. Download and install CUDA Toolkit
3. Download and install cuDNN

## Verify Installation
1. Run the test program:
```bash
python src/yolov8_detect_gui.py
```

## Troubleshooting
- "DLL not found" error: Reinstall Visual C++ Redistributable
- CUDA errors: Check CUDA and cuDNN versions
- Camera errors: 
  - Check physical connections
  - Verify camera drivers and SDK installation
  - For GigE cameras, check network settings
  - Ensure camera IP is in same subnet as PC 