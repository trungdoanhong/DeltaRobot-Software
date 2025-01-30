#-------------------------------------------------
#
# Project created by QtCreator 2018-07-17T23:50:40
#
#-------------------------------------------------

QT       += core gui serialport opengl network quickwidgets printsupport multimedia svg concurrent widgets

# Source directory
SRC_DIR = $$PWD/src/1.0

windows {
    INCLUDEPATH += $$PWD/3rd-party/opencv/build/include
    LIBS += $$PWD/3rd-party/opencv/build/x64/vc15/lib/opencv_world400.lib
    LIBS += $$PWD/3rd-party/opencv/build/x64/vc15/lib/opencv_world400d.lib

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
    $$SRC_DIR/main.cpp \
    $$SRC_DIR/AccountWindow.cpp \
    $$SRC_DIR/Authority.cpp \
    $$SRC_DIR/ComDevice.cpp \
    $$SRC_DIR/DrawingExporter.cpp \
    $$SRC_DIR/DrawingWidget.cpp \
    $$SRC_DIR/FilterWindow.cpp \
    $$SRC_DIR/GcodeHighlighter.cpp \
    $$SRC_DIR/GcodeReference.cpp \
    $$SRC_DIR/GcodeScript.cpp \
    $$SRC_DIR/ImageProcessing.cpp \
    $$SRC_DIR/ImageViewer.cpp \
    $$SRC_DIR/Layer.cpp \
    $$SRC_DIR/MainWindow.cpp \
    $$SRC_DIR/Object.cpp \
    $$SRC_DIR/ObjectInfo.cpp \
    $$SRC_DIR/ObjectVariableTable.cpp \
    $$SRC_DIR/Parameter.cpp \
    $$SRC_DIR/PointTool.cpp \
    $$SRC_DIR/ProjectManager.cpp \
    $$SRC_DIR/RobotWindow.cpp \
    $$SRC_DIR/SmartDialog.cpp \
    $$SRC_DIR/SocketConnectionManager.cpp \
    $$SRC_DIR/SoftwareManager.cpp \
    $$SRC_DIR/TabDashboard.cpp \
    $$SRC_DIR/TaskNode.cpp \
    $$SRC_DIR/TestCode.cpp \
    $$SRC_DIR/TextLayer.cpp \
    $$SRC_DIR/TrackingManager.cpp \
    $$SRC_DIR/VariableManager.cpp \
    $$SRC_DIR/VersionManager.cpp \
    $$SRC_DIR/codeeditor.cpp \
    $$SRC_DIR/DeltaVisualizer.cpp \
    $$SRC_DIR/UnityTool.cpp \
    $$SRC_DIR/device/DeviceManager.cpp \
    $$SRC_DIR/device/camera.cpp \
    $$SRC_DIR/device/conveyor.cpp \
    $$SRC_DIR/device/device.cpp \
    $$SRC_DIR/device/encoder.cpp \
    $$SRC_DIR/device/robot.cpp \
    $$SRC_DIR/device/slider.cpp \
    $$SRC_DIR/geisttextedit.cpp \
    $$SRC_DIR/global.cpp \
    $$SRC_DIR/highlighter.cpp \
    $$SRC_DIR/testwindow.cpp

HEADERS += \
    $$SRC_DIR/AccountWindow.h \
    $$SRC_DIR/Authority.h \
    $$SRC_DIR/ComDevice.h \
    $$SRC_DIR/DeltaVisualizer.h \
    $$SRC_DIR/DrawingExporter.h \
    $$SRC_DIR/DrawingWidget.h \
    $$SRC_DIR/FilterWindow.h \
    $$SRC_DIR/GcodeHighlighter.h \
    $$SRC_DIR/GcodeReference.h \
    $$SRC_DIR/GcodeScript.h \
    $$SRC_DIR/ImageUnity.h \
    $$SRC_DIR/ImageViewer.h \
    $$SRC_DIR/Layer.h \
    $$SRC_DIR/MainWindow.h \
    $$SRC_DIR/Object.h \
    $$SRC_DIR/ImageProcessing.h \
    $$SRC_DIR/ObjectInfo.h \
    $$SRC_DIR/ObjectInfoModel.h \
    $$SRC_DIR/ObjectVariableTable.h \
    $$SRC_DIR/Parameter.h \
    $$SRC_DIR/PointTool.h \
    $$SRC_DIR/ProjectManager.h \
    $$SRC_DIR/RobotWindow.h \
    $$SRC_DIR/ScurveInterpolator.h \
    $$SRC_DIR/SmartDialog.h \
    $$SRC_DIR/SocketConnectionManager.h \
    $$SRC_DIR/SoftwareManager.h \
    $$SRC_DIR/TabDashboard.h \
    $$SRC_DIR/TaskNode.h \
    $$SRC_DIR/TextLayer.h \
    $$SRC_DIR/TrackingManager.h \
    $$SRC_DIR/VariableManager.h \
    $$SRC_DIR/VersionManager.h \
    $$SRC_DIR/codeeditor.h \
    $$SRC_DIR/device/DeviceManager.h \
    $$SRC_DIR/device/camera.h \
    $$SRC_DIR/device/conveyor.h \
    $$SRC_DIR/device/device.h \
    $$SRC_DIR/device/encoder.h \
    $$SRC_DIR/device/robot.h \
    $$SRC_DIR/device/slider.h \
    $$SRC_DIR/geisttextedit.h \
    $$SRC_DIR/global.h \
    $$SRC_DIR/highlighter.h \
    $$SRC_DIR/GcodeReference.h \
    $$SRC_DIR/sdk/DeltaXPlugin.h \
    $$SRC_DIR/testcode.h \
    $$SRC_DIR/testwindow.h

FORMS += \
    $$SRC_DIR/AccountWindow.ui \
    $$SRC_DIR/FilterWindow.ui \
    $$SRC_DIR/MainWindow.ui \
    $$SRC_DIR/RobotWindow.ui \
    $$SRC_DIR/GcodeReference.ui \
    $$SRC_DIR/testwindow.ui

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
INCLUDEPATH += $$SRC_DIR
INCLUDEPATH += $$SRC_DIR/device
INCLUDEPATH += $$SRC_DIR/sdk

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Windows specific
win32 {
    RC_ICONS = delta_x_logo_96x96.ico
}

DISTFILES +=



