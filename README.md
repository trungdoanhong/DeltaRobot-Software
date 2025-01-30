# Delta Robot Software

Phần mềm điều khiển robot Delta với tích hợp xử lý ảnh và các tính năng nâng cao.

## Tổng quan

Delta Robot Software là một ứng dụng desktop được phát triển bằng C++ và Qt Framework, cung cấp giao diện đồ họa và các công cụ để điều khiển robot Delta. Phần mềm tích hợp nhiều tính năng tiên tiến như xử lý ảnh thời gian thực, lập trình G-code, và giao tiếp mạng.

## Tính năng chính

- **Giao diện người dùng đồ họa (GUI)**:
  - Cửa sổ chính (MainWindow)
  - Cửa sổ điều khiển robot (RobotWindow)
  - Cửa sổ lọc ảnh (FilterWindow)
  - Cửa sổ tài khoản (AccountWindow)
  - Tham chiếu G-code (GcodeReference)

- **Xử lý ảnh và Computer Vision**:
  - Tích hợp OpenCV
  - Xử lý ảnh thời gian thực
  - Nhận diện đối tượng
  - Hiệu chỉnh hình học
  - Theo dõi đối tượng (Object Tracking)

- **Điều khiển Robot**:
  - Điều khiển trực tiếp robot Delta
  - Lập trình bằng G-code
  - Nội suy đường cong S-curve
  - Quản lý thiết bị (DeviceManager)
  - Hỗ trợ nhiều thiết bị ngoại vi:
    - Camera
    - Băng tải
    - Bộ mã hóa
    - Robot
    - Thanh trượt

- **Tính năng mạng và kết nối**:
  - Giao tiếp qua cổng Serial
  - Kết nối mạng TCP/IP
  - Quản lý kết nối socket
  - Tích hợp với Unity

- **Công cụ phát triển**:
  - Trình soạn thảo mã (CodeEditor)
  - Công cụ vẽ (DrawingWidget)
  - Trình xem ảnh (ImageViewer)
  - Trình soạn thảo văn bản nâng cao (GeistTextEdit)

## Yêu cầu hệ thống

### Windows
- Windows 10 64-bit trở lên
- Qt 5.15.2
- Visual Studio 2015 hoặc mới hơn
- OpenCV 4.0.0
- Bộ nhớ RAM: 4GB trở lên
- Ổ cứng trống: 1GB trở lên

### Linux
- Ubuntu 18.04 trở lên
- Qt 5.15.2
- GCC/G++ với hỗ trợ C++14
- OpenCV 4.0.0
- Bộ nhớ RAM: 4GB trở lên
- Ổ cứng trống: 1GB trở lên

## Cấu trúc dự án

```
DeltaRobotSoftware/
├── src/                    # Thư mục source code
│   └── 1.0/               # Phiên bản 1.0
│       ├── device/        # Quản lý thiết bị
│       │   ├── camera.cpp # Xử lý camera
│       │   ├── conveyor.cpp # Điều khiển băng tải
│       │   ├── encoder.cpp # Đọc bộ mã hóa
│       │   ├── robot.cpp  # Điều khiển robot
│       │   └── slider.cpp # Điều khiển thanh trượt
│       ├── sdk/           # SDK và plugin
│       ├── *.cpp          # Source files
│       ├── *.h            # Header files
│       └── *.ui           # Qt Designer UI files
├── 3rd-party/             # Thư viện bên thứ ba
│   └── opencv/            # Thư viện OpenCV
├── DeltaRobotSoftware.pro # File project Qt
└── README.md              # Tài liệu dự án
```

## Cài đặt và Build

### Windows
1. Cài đặt Qt 5.15.2 MSVC 2015 64-bit
2. Cài đặt OpenCV 4.0.0
3. Mở project trong Qt Creator
4. Chọn kit phù hợp
5. Build và chạy

### Linux
1. Cài đặt Qt và các dependencies:
```bash
sudo apt install qt5-default
sudo apt install libopencv-dev
```
2. Build project:
```bash
qmake
make
```

## Debug

Dự án hỗ trợ debug đầy đủ trong Qt Creator:
- Debug build với symbols
- Breakpoints
- Step-by-step debugging
- Variable inspection
- Stack trace
- Memory analysis

## Phát triển

Dự án sử dụng:
- C++14
- Qt 5.15.2
- OpenCV 4.0.0
- CMake hoặc qmake build system
- Kiến trúc module hóa
- Mô hình MVC (Model-View-Controller)

## License

Copyright © 2024 Delta X Software. All rights reserved.
