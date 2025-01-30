#-------------------------------------------------
#
# Project created by QtCreator 2018-07-17T23:50:40
#
#-------------------------------------------------

QT       += core gui serialport opengl network quickwidgets printsupport multimedia svg concurrent widgets

windows {
    INCLUDEPATH += $$PWD\3rd-party\opencv\build\include
    LIBS += $$PWD\3rd-party\opencv\build\x64\vc15\lib\opencv_world400.lib
    LIBS += $$PWD\3rd-party\opencv\build\x64\vc15\lib\opencv_world400d.lib

#    include ($$PWD\3rd-party\QJoysticks\QJoysticks.pri)
}

linux {
    INCLUDEPATH += /usr/local/include/opencv4
    LIBS += -L/usr/local/lib -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc -lopencv_videoio -lopencv_calib3d
}

#unix:!macx
#{
#    INCLUDEPATH += "/usr/local/include"
##    LIBS += $(shell pkg-config opencv --libs)
#    LIBS += -L/home/trungdoanhong/Documents/opencv-4.0/sources/build/lib -lopencv_core -lopencv_highgui -lopencv_imgproc -lopencv_imgcodecs -lopencv_videoio

#}



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DeltaRobotSoftware
TEMPLATE = app

CONFIG += c++14

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    AccountWindow.cpp \
    Authority.cpp \
    ComDevice.cpp \
    DrawingExporter.cpp \
    DrawingWidget.cpp \
    FilterWindow.cpp \
    GcodeHighlighter.cpp \
    GcodeReference.cpp \
    GcodeScript.cpp \
    ImageProcessing.cpp \
    ImageViewer.cpp \
    Layer.cpp \
    MainWindow.cpp \
    Object.cpp \
    ObjectInfo.cpp \
    ObjectVariableTable.cpp \
    Parameter.cpp \
    PointTool.cpp \
    ProjectManager.cpp \
    RobotWindow.cpp \
    SmartDialog.cpp \
    SocketConnectionManager.cpp \
    SoftwareManager.cpp \
    TabDashboard.cpp \
    TaskNode.cpp \
    TestCode.cpp \
    TextLayer.cpp \
    TrackingManager.cpp \
    VariableManager.cpp \
    VersionManager.cpp \
    codeeditor.cpp \
    DeltaVisualizer.cpp \
    UnityTool.cpp \
    device/DeviceManager.cpp \
    device/camera.cpp \
    device/conveyor.cpp \
    device/device.cpp \
    device/encoder.cpp \
    device/robot.cpp \
    device/slider.cpp \
    geisttextedit.cpp \
    global.cpp \
    highlighter.cpp \
    testwindow.cpp

HEADERS += \
    AccountWindow.h \
    Authority.h \
    ComDevice.h \
    DeltaVisualizer.h \
    DrawingExporter.h \
    DrawingWidget.h \
    FilterWindow.h \
    GcodeHighlighter.h \
    GcodeReference.h \
    GcodeScript.h \
    ImageUnity.h \
    ImageViewer.h \
    Layer.h \
    MainWindow.h \
    Object.h \
    ImageProcessing.h \
    ObjectInfo.h \
    ObjectInfoModel.h \
    ObjectVariableTable.h \
    Parameter.h \
    PointTool.h \
    ProjectManager.h \
    RobotWindow.h \
    ScurveInterpolator.h \
    SmartDialog.h \
    SocketConnectionManager.h \
    SoftwareManager.h \
    TabDashboard.h \
    TaskNode.h \
    TextLayer.h \
    TrackingManager.h \
    VariableManager.h \
    VersionManager.h \
    codeeditor.h \
    device/DeviceManager.h \
    device/camera.h \
    device/conveyor.h \
    device/device.h \
    device/encoder.h \
    device/robot.h \
    device/slider.h \
    geisttextedit.h \
    global.h \
    highlighter.h \
    GcodeReference.h \
    sdk/DeltaXPlugin.h \
    testcode.h \
    testwindow.h

FORMS += \
    AccountWindow.ui \
    FilterWindow.ui \
    MainWindow.ui \
    RobotWindow.ui \
    GcodeReference.ui \
    testwindow.ui

RESOURCES += \
    resource.qrc

win32 {
    # OpenCV configuration for Windows
    OPENCV_DIR = $$PWD/3rd-party/opencv/build
    INCLUDEPATH += $$OPENCV_DIR/include
    
    CONFIG(debug, debug|release) {
        LIBS += $$OPENCV_DIR/x64/vc15/lib/opencv_world400d.lib
    } else {
        LIBS += $$OPENCV_DIR/x64/vc15/lib/opencv_world400.lib
    }
}

unix:!macx {
    # OpenCV configuration for Linux
    CONFIG += link_pkgconfig
    PKGCONFIG += opencv4
}

# Include paths
INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/device
INCLUDEPATH += $$PWD/sdk

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Windows specific
win32 {
    RC_ICONS = delta_x_logo_96x96.ico
}

DISTFILES +=



