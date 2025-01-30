cmake_minimum_required(VERSION 3.16)

project(DeltaRobotSoftware VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Add source directory to include path
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/device)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/sdk)

find_package(Qt5 COMPONENTS 
    Core 
    Gui 
    SerialPort 
    OpenGL 
    Network 
    QuickWidgets 
    PrintSupport 
    Multimedia 
    Svg 
    Concurrent 
    Widgets
    REQUIRED
)

if(WIN32)
    set(OpenCV_DIR "${CMAKE_CURRENT_SOURCE_DIR}/3rd-party/opencv/build/x64/vc15/lib")
    set(OpenCV_INCLUDE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}/3rd-party/opencv/build/include")
    
    # Set debug and release libraries
    set(OpenCV_LIBS optimized "${CMAKE_CURRENT_SOURCE_DIR}/3rd-party/opencv/build/x64/vc15/lib/opencv_world400.lib"
                    debug "${CMAKE_CURRENT_SOURCE_DIR}/3rd-party/opencv/build/x64/vc15/lib/opencv_world400d.lib")
endif()

if(UNIX AND NOT APPLE)
    find_package(OpenCV 4 REQUIRED)
endif()

set(PROJECT_SOURCES
    main.cpp
    AccountWindow.cpp
    Authority.cpp
    ComDevice.cpp
    DrawingExporter.cpp
    DrawingWidget.cpp
    FilterWindow.cpp
    GcodeHighlighter.cpp
    GcodeReference.cpp
    GcodeScript.cpp
    ImageProcessing.cpp
    ImageViewer.cpp
    Layer.cpp
    MainWindow.cpp
    Object.cpp
    ObjectInfo.cpp
    ObjectVariableTable.cpp
    Parameter.cpp
    PointTool.cpp
    ProjectManager.cpp
    RobotWindow.cpp
    SmartDialog.cpp
    SocketConnectionManager.cpp
    SoftwareManager.cpp
    TabDashboard.cpp
    TaskNode.cpp
    TestCode.cpp
    TextLayer.cpp
    TrackingManager.cpp
    VariableManager.cpp
    VersionManager.cpp
    codeeditor.cpp
    DeltaVisualizer.cpp
    UnityTool.cpp
    device/DeviceManager.cpp
    device/camera.cpp
    device/conveyor.cpp
    device/device.cpp
    device/encoder.cpp
    device/robot.cpp
    device/slider.cpp
    geisttextedit.cpp
    global.cpp
    highlighter.cpp
    testwindow.cpp
)

set(PROJECT_HEADERS
    AccountWindow.h
    Authority.h
    ComDevice.h
    DeltaVisualizer.h
    DrawingExporter.h
    DrawingWidget.h
    FilterWindow.h
    GcodeHighlighter.h
    GcodeReference.h
    GcodeScript.h
    ImageUnity.h
    ImageViewer.h
    Layer.h
    MainWindow.h
    Object.h
    ImageProcessing.h
    ObjectInfo.h
    ObjectInfoModel.h
    ObjectVariableTable.h
    Parameter.h
    PointTool.h
    ProjectManager.h
    RobotWindow.h
    ScurveInterpolator.h
    SmartDialog.h
    SocketConnectionManager.h
    SoftwareManager.h
    TabDashboard.h
    TaskNode.h
    TextLayer.h
    TrackingManager.h
    VariableManager.h
    VersionManager.h
    codeeditor.h
    device/DeviceManager.h
    device/camera.h
    device/conveyor.h
    device/device.h
    device/encoder.h
    device/robot.h
    device/slider.h
    geisttextedit.h
    global.h
    highlighter.h
    GcodeReference.h
    sdk/DeltaXPlugin.h
    testcode.h
    testwindow.h
)

set(PROJECT_FORMS
    AccountWindow.ui
    FilterWindow.ui
    MainWindow.ui
    RobotWindow.ui
    GcodeReference.ui
    testwindow.ui
)

add_executable(DeltaRobotSoftware
    ${PROJECT_SOURCES}
    ${PROJECT_HEADERS}
    ${PROJECT_FORMS}
    resource.qrc
)

target_link_libraries(DeltaRobotSoftware PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::SerialPort
    Qt5::OpenGL
    Qt5::Network
    Qt5::QuickWidgets
    Qt5::PrintSupport
    Qt5::Multimedia
    Qt5::Svg
    Qt5::Concurrent
    Qt5::Widgets
    ${OpenCV_LIBS}
)

if(WIN32)
    target_include_directories(DeltaRobotSoftware PRIVATE ${OpenCV_INCLUDE_DIRS})
    set_target_properties(DeltaRobotSoftware PROPERTIES WIN32_EXECUTABLE TRUE)
    set_target_properties(DeltaRobotSoftware PROPERTIES LINK_FLAGS "/SUBSYSTEM:WINDOWS")
endif()

# Set application icon
if(WIN32)
    set(APP_ICON_RESOURCE_WINDOWS "${CMAKE_CURRENT_SOURCE_DIR}/delta_x_logo_96x96.ico")
    configure_file("${CMAKE_CURRENT_SOURCE_DIR}/DeltaRobotSoftware_resource.rc"
                  "${CMAKE_CURRENT_BINARY_DIR}/DeltaRobotSoftware_resource.rc"
                  COPYONLY)
    target_sources(DeltaRobotSoftware PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/DeltaRobotSoftware_resource.rc")
endif() 