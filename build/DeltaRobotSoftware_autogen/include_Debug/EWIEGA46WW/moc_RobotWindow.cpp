/****************************************************************************
** Meta object code from reading C++ file 'RobotWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../RobotWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RobotWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RobotWindow_t {
    QByteArrayData data[217];
    char stringdata0[3165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RobotWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RobotWindow_t qt_meta_stringdata_RobotWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RobotWindow"
QT_MOC_LITERAL(1, 12, 17), // "ChangeDeviceState"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "deviceName"
QT_MOC_LITERAL(4, 42, 6), // "isOpen"
QT_MOC_LITERAL(5, 49, 7), // "address"
QT_MOC_LITERAL(6, 57, 10), // "GotObjects"
QT_MOC_LITERAL(7, 68, 15), // "QVector<Object>"
QT_MOC_LITERAL(8, 84, 7), // "objects"
QT_MOC_LITERAL(9, 92, 13), // "GotResizePara"
QT_MOC_LITERAL(10, 106, 8), // "cv::Size"
QT_MOC_LITERAL(11, 115, 4), // "size"
QT_MOC_LITERAL(12, 120, 14), // "GotResizeImage"
QT_MOC_LITERAL(13, 135, 7), // "cv::Mat"
QT_MOC_LITERAL(14, 143, 3), // "mat"
QT_MOC_LITERAL(15, 147, 17), // "GotChessboardSize"
QT_MOC_LITERAL(16, 165, 14), // "GotCalibPoints"
QT_MOC_LITERAL(17, 180, 4), // "poly"
QT_MOC_LITERAL(18, 185, 16), // "GotMappingMatrix"
QT_MOC_LITERAL(19, 202, 6), // "matrix"
QT_MOC_LITERAL(20, 209, 18), // "GotOjectFilterInfo"
QT_MOC_LITERAL(21, 228, 6), // "Object"
QT_MOC_LITERAL(22, 235, 3), // "obj"
QT_MOC_LITERAL(23, 239, 19), // "RequestClearObjects"
QT_MOC_LITERAL(24, 259, 19), // "RequestDeleteObject"
QT_MOC_LITERAL(25, 279, 5), // "index"
QT_MOC_LITERAL(26, 285, 21), // "RequestFindChessboard"
QT_MOC_LITERAL(27, 307, 4), // "Send"
QT_MOC_LITERAL(28, 312, 6), // "device"
QT_MOC_LITERAL(29, 319, 3), // "msg"
QT_MOC_LITERAL(30, 323, 19), // "ScanAndConnectRobot"
QT_MOC_LITERAL(31, 343, 15), // "DisconnectRobot"
QT_MOC_LITERAL(32, 359, 20), // "ActivateButtonByName"
QT_MOC_LITERAL(33, 380, 10), // "buttonName"
QT_MOC_LITERAL(34, 391, 18), // "ActiveWidgetByName"
QT_MOC_LITERAL(35, 410, 4), // "type"
QT_MOC_LITERAL(36, 415, 4), // "name"
QT_MOC_LITERAL(37, 420, 6), // "action"
QT_MOC_LITERAL(38, 427, 13), // "GetDeviceInfo"
QT_MOC_LITERAL(39, 441, 4), // "json"
QT_MOC_LITERAL(40, 446, 17), // "GetDeviceResponse"
QT_MOC_LITERAL(41, 464, 2), // "id"
QT_MOC_LITERAL(42, 467, 8), // "response"
QT_MOC_LITERAL(43, 476, 15), // "UpdateVarToView"
QT_MOC_LITERAL(44, 492, 7), // "fullKey"
QT_MOC_LITERAL(45, 500, 5), // "value"
QT_MOC_LITERAL(46, 506, 19), // "UpdateObjectsToView"
QT_MOC_LITERAL(47, 526, 16), // "Load3DComponents"
QT_MOC_LITERAL(48, 543, 12), // "ConnectRobot"
QT_MOC_LITERAL(49, 556, 19), // "ChangeSelectedRobot"
QT_MOC_LITERAL(50, 576, 14), // "ChangeRobotDOF"
QT_MOC_LITERAL(51, 591, 16), // "ChangeRobotModel"
QT_MOC_LITERAL(52, 608, 11), // "SaveProgram"
QT_MOC_LITERAL(53, 620, 14), // "ExecuteProgram"
QT_MOC_LITERAL(54, 635, 18), // "ClickExecuteButton"
QT_MOC_LITERAL(55, 654, 3), // "val"
QT_MOC_LITERAL(56, 658, 28), // "ImportGcodeFilesFromComputer"
QT_MOC_LITERAL(57, 687, 21), // "ExecuteSelectPrograms"
QT_MOC_LITERAL(58, 709, 18), // "ExecuteCurrentLine"
QT_MOC_LITERAL(59, 728, 19), // "HighLineCurrentLine"
QT_MOC_LITERAL(60, 748, 3), // "pos"
QT_MOC_LITERAL(61, 752, 19), // "OnEditorTextChanged"
QT_MOC_LITERAL(62, 772, 14), // "changeFontSize"
QT_MOC_LITERAL(63, 787, 14), // "RunSmartEditor"
QT_MOC_LITERAL(64, 802, 20), // "StandardFormatEditor"
QT_MOC_LITERAL(65, 823, 18), // "OpenGcodeReference"
QT_MOC_LITERAL(66, 842, 20), // "ExportBlocklyToGcode"
QT_MOC_LITERAL(67, 863, 27), // "ExecuteRequestsFromExternal"
QT_MOC_LITERAL(68, 891, 7), // "request"
QT_MOC_LITERAL(69, 899, 12), // "AddGcodeLine"
QT_MOC_LITERAL(70, 912, 5), // "gcode"
QT_MOC_LITERAL(71, 918, 25), // "LoadGcodeFromFileToEditor"
QT_MOC_LITERAL(72, 944, 11), // "QModelIndex"
QT_MOC_LITERAL(73, 956, 9), // "LoadGcode"
QT_MOC_LITERAL(74, 966, 8), // "filePath"
QT_MOC_LITERAL(75, 975, 19), // "SelectGcodeExplorer"
QT_MOC_LITERAL(76, 995, 18), // "BackParentExplorer"
QT_MOC_LITERAL(77, 1014, 18), // "CreateNewGcodeFile"
QT_MOC_LITERAL(78, 1033, 13), // "SaveGcodeFile"
QT_MOC_LITERAL(79, 1047, 8), // "fileName"
QT_MOC_LITERAL(80, 1056, 7), // "content"
QT_MOC_LITERAL(81, 1064, 15), // "RefreshExplorer"
QT_MOC_LITERAL(82, 1080, 15), // "DeleteGcodeFile"
QT_MOC_LITERAL(83, 1096, 26), // "ChangeSelectedEditorThread"
QT_MOC_LITERAL(84, 1123, 13), // "SetRobotState"
QT_MOC_LITERAL(85, 1137, 6), // "isHold"
QT_MOC_LITERAL(86, 1144, 15), // "RequestPosition"
QT_MOC_LITERAL(87, 1160, 4), // "Home"
QT_MOC_LITERAL(88, 1165, 21), // "UpdatePositionControl"
QT_MOC_LITERAL(89, 1187, 9), // "RobotPara"
QT_MOC_LITERAL(90, 1197, 9), // "robotPara"
QT_MOC_LITERAL(91, 1207, 19), // "ReceiveHomePosition"
QT_MOC_LITERAL(92, 1227, 1), // "x"
QT_MOC_LITERAL(93, 1229, 1), // "y"
QT_MOC_LITERAL(94, 1231, 1), // "z"
QT_MOC_LITERAL(95, 1233, 1), // "w"
QT_MOC_LITERAL(96, 1235, 1), // "u"
QT_MOC_LITERAL(97, 1237, 1), // "v"
QT_MOC_LITERAL(98, 1239, 14), // "UpdateVelocity"
QT_MOC_LITERAL(99, 1254, 11), // "UpdateAccel"
QT_MOC_LITERAL(100, 1266, 16), // "UpdateStartSpeed"
QT_MOC_LITERAL(101, 1283, 14), // "UpdateEndSpeed"
QT_MOC_LITERAL(102, 1298, 10), // "UpdateJerk"
QT_MOC_LITERAL(103, 1309, 18), // "AdjustGripperAngle"
QT_MOC_LITERAL(104, 1328, 5), // "angle"
QT_MOC_LITERAL(105, 1334, 4), // "Grip"
QT_MOC_LITERAL(106, 1339, 7), // "Jogging"
QT_MOC_LITERAL(107, 1347, 9), // "direction"
QT_MOC_LITERAL(108, 1357, 6), // "isMove"
QT_MOC_LITERAL(109, 1364, 9), // "MoveRobot"
QT_MOC_LITERAL(110, 1374, 4), // "axis"
QT_MOC_LITERAL(111, 1379, 4), // "step"
QT_MOC_LITERAL(112, 1384, 21), // "MoveRobotFollowObject"
QT_MOC_LITERAL(113, 1406, 7), // "DoADemo"
QT_MOC_LITERAL(114, 1414, 23), // "UpdateRobotPositionToUI"
QT_MOC_LITERAL(115, 1438, 7), // "SetPump"
QT_MOC_LITERAL(116, 1446, 8), // "SetLaser"
QT_MOC_LITERAL(117, 1455, 14), // "SetOnOffOutput"
QT_MOC_LITERAL(118, 1470, 6), // "result"
QT_MOC_LITERAL(119, 1477, 14), // "SetValueOutput"
QT_MOC_LITERAL(120, 1492, 17), // "RequestValueInput"
QT_MOC_LITERAL(121, 1510, 13), // "GetValueInput"
QT_MOC_LITERAL(122, 1524, 14), // "UpdateVariable"
QT_MOC_LITERAL(123, 1539, 3), // "key"
QT_MOC_LITERAL(124, 1543, 15), // "UpdateVariables"
QT_MOC_LITERAL(125, 1559, 3), // "cmd"
QT_MOC_LITERAL(126, 1563, 20), // "RespondVariableValue"
QT_MOC_LITERAL(127, 1584, 10), // "QIODevice*"
QT_MOC_LITERAL(128, 1595, 1), // "s"
QT_MOC_LITERAL(129, 1597, 26), // "UpdateGcodeValueToDeviceUI"
QT_MOC_LITERAL(130, 1624, 18), // "ChangeConveyorType"
QT_MOC_LITERAL(131, 1643, 22), // "ChangeSelectedConveyor"
QT_MOC_LITERAL(132, 1666, 15), // "ConnectConveyor"
QT_MOC_LITERAL(133, 1682, 15), // "SetConveyorMode"
QT_MOC_LITERAL(134, 1698, 4), // "mode"
QT_MOC_LITERAL(135, 1703, 21), // "SetConveyorMovingMode"
QT_MOC_LITERAL(136, 1725, 16), // "SetConveyorSpeed"
QT_MOC_LITERAL(137, 1742, 12), // "StopConveyor"
QT_MOC_LITERAL(138, 1755, 15), // "ForwardConveyor"
QT_MOC_LITERAL(139, 1771, 16), // "BackwardConveyor"
QT_MOC_LITERAL(140, 1788, 19), // "SetConveyorPosition"
QT_MOC_LITERAL(141, 1808, 27), // "SetConveyorAbsolutePosition"
QT_MOC_LITERAL(142, 1836, 21), // "TriggedCustomConveyor"
QT_MOC_LITERAL(143, 1858, 29), // "UpdatePointPositionOnConveyor"
QT_MOC_LITERAL(144, 1888, 10), // "QLineEdit*"
QT_MOC_LITERAL(145, 1899, 8), // "distance"
QT_MOC_LITERAL(146, 1908, 20), // "UpdateCursorPosition"
QT_MOC_LITERAL(147, 1929, 18), // "ProcessShortcutKey"
QT_MOC_LITERAL(148, 1948, 17), // "ChangeEncoderType"
QT_MOC_LITERAL(149, 1966, 27), // "ChangeConveyorLinkToEncoder"
QT_MOC_LITERAL(150, 1994, 14), // "ConnectEncoder"
QT_MOC_LITERAL(151, 2009, 11), // "ReadEncoder"
QT_MOC_LITERAL(152, 2021, 18), // "SetEncoderAutoRead"
QT_MOC_LITERAL(153, 2040, 20), // "ResetEncoderPosition"
QT_MOC_LITERAL(154, 2061, 18), // "SetEncoderVelocity"
QT_MOC_LITERAL(155, 2080, 24), // "CalculateEncoderVelocity"
QT_MOC_LITERAL(156, 2105, 27), // "ProcessProximitySensorValue"
QT_MOC_LITERAL(157, 2133, 21), // "StartScheduledEncoder"
QT_MOC_LITERAL(158, 2155, 14), // "ConnectSliding"
QT_MOC_LITERAL(159, 2170, 13), // "GoHomeSliding"
QT_MOC_LITERAL(160, 2184, 14), // "DisableSliding"
QT_MOC_LITERAL(161, 2199, 15), // "SetSlidingSpeed"
QT_MOC_LITERAL(162, 2215, 18), // "SetSlidingPosition"
QT_MOC_LITERAL(163, 2234, 18), // "ConnectExternalMCU"
QT_MOC_LITERAL(164, 2253, 25), // "TransmitTextToExternalMCU"
QT_MOC_LITERAL(165, 2279, 26), // "DisplayTextFromExternalMCU"
QT_MOC_LITERAL(166, 2306, 4), // "text"
QT_MOC_LITERAL(167, 2311, 16), // "TerminalTransmit"
QT_MOC_LITERAL(168, 2328, 17), // "RunExternalScript"
QT_MOC_LITERAL(169, 2346, 24), // "OpenExternalScriptFolder"
QT_MOC_LITERAL(170, 2371, 13), // "UpdateTermite"
QT_MOC_LITERAL(171, 2385, 4), // "mess"
QT_MOC_LITERAL(172, 2390, 26), // "UpdateCameraConnectedState"
QT_MOC_LITERAL(173, 2417, 22), // "StartContinuousCapture"
QT_MOC_LITERAL(174, 2440, 7), // "isCheck"
QT_MOC_LITERAL(175, 2448, 19), // "ChangeOutputDisplay"
QT_MOC_LITERAL(176, 2468, 10), // "outputName"
QT_MOC_LITERAL(177, 2479, 10), // "LoadWebcam"
QT_MOC_LITERAL(178, 2490, 10), // "LoadImages"
QT_MOC_LITERAL(179, 2501, 11), // "StopCapture"
QT_MOC_LITERAL(180, 2513, 21), // "OpenColorFilterWindow"
QT_MOC_LITERAL(181, 2535, 30), // "SelectObjectDetectingAlgorithm"
QT_MOC_LITERAL(182, 2566, 9), // "algorithm"
QT_MOC_LITERAL(183, 2576, 16), // "ConfigChessboard"
QT_MOC_LITERAL(184, 2593, 23), // "GetCalibPointsFromImage"
QT_MOC_LITERAL(185, 2617, 2), // "p1"
QT_MOC_LITERAL(186, 2620, 2), // "p2"
QT_MOC_LITERAL(187, 2623, 31), // "UpdateRealPositionOfCalibPoints"
QT_MOC_LITERAL(188, 2655, 22), // "GetObjectSizeFromImage"
QT_MOC_LITERAL(189, 2678, 4), // "rect"
QT_MOC_LITERAL(190, 2683, 24), // "GetMappingPointFromImage"
QT_MOC_LITERAL(191, 2708, 5), // "point"
QT_MOC_LITERAL(192, 2714, 15), // "GetNewImageSize"
QT_MOC_LITERAL(193, 2730, 19), // "UnselectToolButtons"
QT_MOC_LITERAL(194, 2750, 9), // "EditImage"
QT_MOC_LITERAL(195, 2760, 6), // "isWarp"
QT_MOC_LITERAL(196, 2767, 10), // "isCropTool"
QT_MOC_LITERAL(197, 2778, 25), // "SendImageToExternalScript"
QT_MOC_LITERAL(198, 2804, 5), // "input"
QT_MOC_LITERAL(199, 2810, 34), // "AddDisplayObjectFromExternalS..."
QT_MOC_LITERAL(200, 2845, 22), // "ChangeSelectedTracking"
QT_MOC_LITERAL(201, 2868, 29), // "ChangeSelectedTrackingEncoder"
QT_MOC_LITERAL(202, 2898, 19), // "SaveTrackingManager"
QT_MOC_LITERAL(203, 2918, 26), // "CalculateMappingMatrixTool"
QT_MOC_LITERAL(204, 2945, 24), // "CalculatePointMatrixTool"
QT_MOC_LITERAL(205, 2970, 18), // "CalculateTestPoint"
QT_MOC_LITERAL(206, 2989, 15), // "CalculateVector"
QT_MOC_LITERAL(207, 3005, 15), // "UpdateTestPoint"
QT_MOC_LITERAL(208, 3021, 9), // "testPoint"
QT_MOC_LITERAL(209, 3031, 21), // "MoveTestTrackingPoint"
QT_MOC_LITERAL(210, 3053, 16), // "OpenLoadingPopup"
QT_MOC_LITERAL(211, 3070, 17), // "CloseLoadingPopup"
QT_MOC_LITERAL(212, 3088, 11), // "MaximizeTab"
QT_MOC_LITERAL(213, 3100, 16), // "OpenCameraWindow"
QT_MOC_LITERAL(214, 3117, 25), // "SelectImageProviderOption"
QT_MOC_LITERAL(215, 3143, 6), // "option"
QT_MOC_LITERAL(216, 3150, 14) // "ProcessUIEvent"

    },
    "RobotWindow\0ChangeDeviceState\0\0"
    "deviceName\0isOpen\0address\0GotObjects\0"
    "QVector<Object>\0objects\0GotResizePara\0"
    "cv::Size\0size\0GotResizeImage\0cv::Mat\0"
    "mat\0GotChessboardSize\0GotCalibPoints\0"
    "poly\0GotMappingMatrix\0matrix\0"
    "GotOjectFilterInfo\0Object\0obj\0"
    "RequestClearObjects\0RequestDeleteObject\0"
    "index\0RequestFindChessboard\0Send\0"
    "device\0msg\0ScanAndConnectRobot\0"
    "DisconnectRobot\0ActivateButtonByName\0"
    "buttonName\0ActiveWidgetByName\0type\0"
    "name\0action\0GetDeviceInfo\0json\0"
    "GetDeviceResponse\0id\0response\0"
    "UpdateVarToView\0fullKey\0value\0"
    "UpdateObjectsToView\0Load3DComponents\0"
    "ConnectRobot\0ChangeSelectedRobot\0"
    "ChangeRobotDOF\0ChangeRobotModel\0"
    "SaveProgram\0ExecuteProgram\0"
    "ClickExecuteButton\0val\0"
    "ImportGcodeFilesFromComputer\0"
    "ExecuteSelectPrograms\0ExecuteCurrentLine\0"
    "HighLineCurrentLine\0pos\0OnEditorTextChanged\0"
    "changeFontSize\0RunSmartEditor\0"
    "StandardFormatEditor\0OpenGcodeReference\0"
    "ExportBlocklyToGcode\0ExecuteRequestsFromExternal\0"
    "request\0AddGcodeLine\0gcode\0"
    "LoadGcodeFromFileToEditor\0QModelIndex\0"
    "LoadGcode\0filePath\0SelectGcodeExplorer\0"
    "BackParentExplorer\0CreateNewGcodeFile\0"
    "SaveGcodeFile\0fileName\0content\0"
    "RefreshExplorer\0DeleteGcodeFile\0"
    "ChangeSelectedEditorThread\0SetRobotState\0"
    "isHold\0RequestPosition\0Home\0"
    "UpdatePositionControl\0RobotPara\0"
    "robotPara\0ReceiveHomePosition\0x\0y\0z\0"
    "w\0u\0v\0UpdateVelocity\0UpdateAccel\0"
    "UpdateStartSpeed\0UpdateEndSpeed\0"
    "UpdateJerk\0AdjustGripperAngle\0angle\0"
    "Grip\0Jogging\0direction\0isMove\0MoveRobot\0"
    "axis\0step\0MoveRobotFollowObject\0DoADemo\0"
    "UpdateRobotPositionToUI\0SetPump\0"
    "SetLaser\0SetOnOffOutput\0result\0"
    "SetValueOutput\0RequestValueInput\0"
    "GetValueInput\0UpdateVariable\0key\0"
    "UpdateVariables\0cmd\0RespondVariableValue\0"
    "QIODevice*\0s\0UpdateGcodeValueToDeviceUI\0"
    "ChangeConveyorType\0ChangeSelectedConveyor\0"
    "ConnectConveyor\0SetConveyorMode\0mode\0"
    "SetConveyorMovingMode\0SetConveyorSpeed\0"
    "StopConveyor\0ForwardConveyor\0"
    "BackwardConveyor\0SetConveyorPosition\0"
    "SetConveyorAbsolutePosition\0"
    "TriggedCustomConveyor\0"
    "UpdatePointPositionOnConveyor\0QLineEdit*\0"
    "distance\0UpdateCursorPosition\0"
    "ProcessShortcutKey\0ChangeEncoderType\0"
    "ChangeConveyorLinkToEncoder\0ConnectEncoder\0"
    "ReadEncoder\0SetEncoderAutoRead\0"
    "ResetEncoderPosition\0SetEncoderVelocity\0"
    "CalculateEncoderVelocity\0"
    "ProcessProximitySensorValue\0"
    "StartScheduledEncoder\0ConnectSliding\0"
    "GoHomeSliding\0DisableSliding\0"
    "SetSlidingSpeed\0SetSlidingPosition\0"
    "ConnectExternalMCU\0TransmitTextToExternalMCU\0"
    "DisplayTextFromExternalMCU\0text\0"
    "TerminalTransmit\0RunExternalScript\0"
    "OpenExternalScriptFolder\0UpdateTermite\0"
    "mess\0UpdateCameraConnectedState\0"
    "StartContinuousCapture\0isCheck\0"
    "ChangeOutputDisplay\0outputName\0"
    "LoadWebcam\0LoadImages\0StopCapture\0"
    "OpenColorFilterWindow\0"
    "SelectObjectDetectingAlgorithm\0algorithm\0"
    "ConfigChessboard\0GetCalibPointsFromImage\0"
    "p1\0p2\0UpdateRealPositionOfCalibPoints\0"
    "GetObjectSizeFromImage\0rect\0"
    "GetMappingPointFromImage\0point\0"
    "GetNewImageSize\0UnselectToolButtons\0"
    "EditImage\0isWarp\0isCropTool\0"
    "SendImageToExternalScript\0input\0"
    "AddDisplayObjectFromExternalScript\0"
    "ChangeSelectedTracking\0"
    "ChangeSelectedTrackingEncoder\0"
    "SaveTrackingManager\0CalculateMappingMatrixTool\0"
    "CalculatePointMatrixTool\0CalculateTestPoint\0"
    "CalculateVector\0UpdateTestPoint\0"
    "testPoint\0MoveTestTrackingPoint\0"
    "OpenLoadingPopup\0CloseLoadingPopup\0"
    "MaximizeTab\0OpenCameraWindow\0"
    "SelectImageProviderOption\0option\0"
    "ProcessUIEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RobotWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     148,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  754,    2, 0x06 /* Public */,
       6,    1,  761,    2, 0x06 /* Public */,
       9,    1,  764,    2, 0x06 /* Public */,
      12,    1,  767,    2, 0x06 /* Public */,
      15,    1,  770,    2, 0x06 /* Public */,
      16,    1,  773,    2, 0x06 /* Public */,
      18,    1,  776,    2, 0x06 /* Public */,
      20,    1,  779,    2, 0x06 /* Public */,
      23,    0,  782,    2, 0x06 /* Public */,
      24,    1,  783,    2, 0x06 /* Public */,
      26,    0,  786,    2, 0x06 /* Public */,
      27,    2,  787,    2, 0x06 /* Public */,
      30,    0,  792,    2, 0x06 /* Public */,
      31,    0,  793,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      32,    1,  794,    2, 0x0a /* Public */,
      34,    3,  797,    2, 0x0a /* Public */,
      38,    1,  804,    2, 0x0a /* Public */,
      40,    2,  807,    2, 0x0a /* Public */,
      43,    2,  812,    2, 0x0a /* Public */,
      46,    0,  817,    2, 0x0a /* Public */,
      47,    0,  818,    2, 0x0a /* Public */,
      48,    0,  819,    2, 0x0a /* Public */,
      49,    1,  820,    2, 0x0a /* Public */,
      50,    1,  823,    2, 0x0a /* Public */,
      51,    1,  826,    2, 0x0a /* Public */,
      52,    0,  829,    2, 0x0a /* Public */,
      53,    0,  830,    2, 0x0a /* Public */,
      54,    1,  831,    2, 0x0a /* Public */,
      56,    0,  834,    2, 0x0a /* Public */,
      57,    0,  835,    2, 0x0a /* Public */,
      58,    2,  836,    2, 0x0a /* Public */,
      59,    1,  841,    2, 0x0a /* Public */,
      61,    0,  844,    2, 0x0a /* Public */,
      62,    1,  845,    2, 0x0a /* Public */,
      63,    0,  848,    2, 0x0a /* Public */,
      64,    0,  849,    2, 0x0a /* Public */,
      65,    0,  850,    2, 0x0a /* Public */,
      66,    0,  851,    2, 0x0a /* Public */,
      67,    1,  852,    2, 0x0a /* Public */,
      69,    1,  855,    2, 0x0a /* Public */,
      71,    1,  858,    2, 0x0a /* Public */,
      73,    1,  861,    2, 0x0a /* Public */,
      75,    0,  864,    2, 0x0a /* Public */,
      76,    0,  865,    2, 0x0a /* Public */,
      77,    0,  866,    2, 0x0a /* Public */,
      78,    2,  867,    2, 0x0a /* Public */,
      81,    0,  872,    2, 0x0a /* Public */,
      82,    0,  873,    2, 0x0a /* Public */,
      83,    1,  874,    2, 0x0a /* Public */,
      84,    1,  877,    2, 0x0a /* Public */,
      86,    0,  880,    2, 0x0a /* Public */,
      87,    0,  881,    2, 0x0a /* Public */,
      88,    1,  882,    2, 0x0a /* Public */,
      91,    6,  885,    2, 0x0a /* Public */,
      98,    0,  898,    2, 0x0a /* Public */,
      99,    0,  899,    2, 0x0a /* Public */,
     100,    0,  900,    2, 0x0a /* Public */,
     101,    0,  901,    2, 0x0a /* Public */,
     102,    0,  902,    2, 0x0a /* Public */,
     103,    1,  903,    2, 0x0a /* Public */,
     105,    0,  906,    2, 0x0a /* Public */,
     106,    2,  907,    2, 0x0a /* Public */,
     109,    1,  912,    2, 0x0a /* Public */,
     109,    2,  915,    2, 0x0a /* Public */,
     112,    3,  920,    2, 0x0a /* Public */,
     113,    0,  927,    2, 0x0a /* Public */,
     114,    0,  928,    2, 0x0a /* Public */,
     115,    1,  929,    2, 0x0a /* Public */,
     116,    1,  932,    2, 0x0a /* Public */,
     117,    1,  935,    2, 0x0a /* Public */,
     119,    0,  938,    2, 0x0a /* Public */,
     120,    0,  939,    2, 0x0a /* Public */,
     121,    1,  940,    2, 0x0a /* Public */,
     122,    2,  943,    2, 0x0a /* Public */,
     124,    1,  948,    2, 0x0a /* Public */,
     126,    2,  951,    2, 0x0a /* Public */,
     129,    2,  956,    2, 0x0a /* Public */,
     130,    1,  961,    2, 0x0a /* Public */,
     131,    1,  964,    2, 0x0a /* Public */,
     132,    0,  967,    2, 0x0a /* Public */,
     133,    1,  968,    2, 0x0a /* Public */,
     135,    1,  971,    2, 0x0a /* Public */,
     136,    0,  974,    2, 0x0a /* Public */,
     137,    0,  975,    2, 0x0a /* Public */,
     138,    0,  976,    2, 0x0a /* Public */,
     139,    0,  977,    2, 0x0a /* Public */,
     140,    0,  978,    2, 0x0a /* Public */,
     141,    0,  979,    2, 0x0a /* Public */,
     142,    0,  980,    2, 0x0a /* Public */,
     143,    4,  981,    2, 0x0a /* Public */,
     146,    2,  990,    2, 0x0a /* Public */,
     147,    0,  995,    2, 0x0a /* Public */,
     148,    1,  996,    2, 0x0a /* Public */,
     149,    1,  999,    2, 0x0a /* Public */,
     150,    0, 1002,    2, 0x0a /* Public */,
     151,    0, 1003,    2, 0x0a /* Public */,
     152,    0, 1004,    2, 0x0a /* Public */,
     153,    0, 1005,    2, 0x0a /* Public */,
     154,    0, 1006,    2, 0x0a /* Public */,
     155,    2, 1007,    2, 0x0a /* Public */,
     156,    1, 1012,    2, 0x0a /* Public */,
     157,    0, 1015,    2, 0x0a /* Public */,
     158,    0, 1016,    2, 0x0a /* Public */,
     159,    0, 1017,    2, 0x0a /* Public */,
     160,    0, 1018,    2, 0x0a /* Public */,
     161,    0, 1019,    2, 0x0a /* Public */,
     162,    0, 1020,    2, 0x0a /* Public */,
     163,    0, 1021,    2, 0x0a /* Public */,
     164,    0, 1022,    2, 0x0a /* Public */,
     165,    1, 1023,    2, 0x0a /* Public */,
     167,    0, 1026,    2, 0x0a /* Public */,
     168,    0, 1027,    2, 0x0a /* Public */,
     169,    0, 1028,    2, 0x0a /* Public */,
     170,    3, 1029,    2, 0x0a /* Public */,
     170,    1, 1036,    2, 0x0a /* Public */,
     172,    1, 1039,    2, 0x0a /* Public */,
     173,    1, 1042,    2, 0x0a /* Public */,
     175,    1, 1045,    2, 0x0a /* Public */,
     177,    0, 1048,    2, 0x0a /* Public */,
     178,    0, 1049,    2, 0x0a /* Public */,
     179,    0, 1050,    2, 0x0a /* Public */,
     180,    0, 1051,    2, 0x0a /* Public */,
     181,    1, 1052,    2, 0x0a /* Public */,
     183,    0, 1055,    2, 0x0a /* Public */,
     184,    2, 1056,    2, 0x0a /* Public */,
     187,    0, 1061,    2, 0x0a /* Public */,
     188,    1, 1062,    2, 0x0a /* Public */,
     190,    1, 1065,    2, 0x0a /* Public */,
     192,    0, 1068,    2, 0x0a /* Public */,
     193,    0, 1069,    2, 0x0a /* Public */,
     194,    2, 1070,    2, 0x0a /* Public */,
     197,    1, 1075,    2, 0x0a /* Public */,
     199,    1, 1078,    2, 0x0a /* Public */,
     200,    1, 1081,    2, 0x0a /* Public */,
     201,    1, 1084,    2, 0x0a /* Public */,
     202,    0, 1087,    2, 0x0a /* Public */,
     203,    0, 1088,    2, 0x0a /* Public */,
     204,    0, 1089,    2, 0x0a /* Public */,
     205,    0, 1090,    2, 0x0a /* Public */,
     206,    0, 1091,    2, 0x0a /* Public */,
     207,    1, 1092,    2, 0x0a /* Public */,
     209,    0, 1095,    2, 0x0a /* Public */,
     210,    0, 1096,    2, 0x0a /* Public */,
     211,    0, 1097,    2, 0x0a /* Public */,
     212,    1, 1098,    2, 0x0a /* Public */,
     213,    0, 1101,    2, 0x0a /* Public */,
     214,    1, 1102,    2, 0x0a /* Public */,
     216,    0, 1105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QPolygonF,   17,
    QMetaType::Void, QMetaType::QMatrix,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   28,   29,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   35,   36,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   41,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   44,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   68,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, 0x80000000 | 72,   25,
    QMetaType::Void, QMetaType::QString,   74,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   79,   80,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Bool,   85,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 89,   90,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   92,   93,   94,   95,   96,   97,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  104,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  107,  108,
    QMetaType::Void, QMetaType::QString,   70,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,  110,  111,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   92,   93,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::Bool,  118,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,  123,   45,
    QMetaType::Void, QMetaType::QString,  125,
    QMetaType::Void, 0x80000000 | 127, QMetaType::QString,  128,   36,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   70,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  134,
    QMetaType::Void, QMetaType::Int,  134,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 144, 0x80000000 | 144, QMetaType::Float, QMetaType::Float,   92,   93,  104,  145,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   92,   93,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   41,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  166,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   28,  171,  107,
    QMetaType::Void, QMetaType::QString,  171,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,  174,
    QMetaType::Void, QMetaType::QString,  176,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  182,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,  185,  186,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,  189,
    QMetaType::Void, QMetaType::QPointF,  191,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,  195,  196,
    QMetaType::Void, 0x80000000 | 13,  198,
    QMetaType::Void, QMetaType::QString,   29,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void, QMetaType::Int,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVector3D,  208,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,  215,
    QMetaType::Void,

       0        // eod
};

void RobotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RobotWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangeDeviceState((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->GotObjects((*reinterpret_cast< QVector<Object>(*)>(_a[1]))); break;
        case 2: _t->GotResizePara((*reinterpret_cast< cv::Size(*)>(_a[1]))); break;
        case 3: _t->GotResizeImage((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 4: _t->GotChessboardSize((*reinterpret_cast< cv::Size(*)>(_a[1]))); break;
        case 5: _t->GotCalibPoints((*reinterpret_cast< QPolygonF(*)>(_a[1]))); break;
        case 6: _t->GotMappingMatrix((*reinterpret_cast< QMatrix(*)>(_a[1]))); break;
        case 7: _t->GotOjectFilterInfo((*reinterpret_cast< Object(*)>(_a[1]))); break;
        case 8: _t->RequestClearObjects(); break;
        case 9: _t->RequestDeleteObject((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->RequestFindChessboard(); break;
        case 11: _t->Send((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->ScanAndConnectRobot(); break;
        case 13: _t->DisconnectRobot(); break;
        case 14: _t->ActivateButtonByName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->ActiveWidgetByName((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 16: _t->GetDeviceInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->GetDeviceResponse((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 18: _t->UpdateVarToView((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 19: _t->UpdateObjectsToView(); break;
        case 20: _t->Load3DComponents(); break;
        case 21: _t->ConnectRobot(); break;
        case 22: _t->ChangeSelectedRobot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->ChangeRobotDOF((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->ChangeRobotModel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->SaveProgram(); break;
        case 26: _t->ExecuteProgram(); break;
        case 27: _t->ClickExecuteButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->ImportGcodeFilesFromComputer(); break;
        case 29: _t->ExecuteSelectPrograms(); break;
        case 30: _t->ExecuteCurrentLine((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->HighLineCurrentLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->OnEditorTextChanged(); break;
        case 33: _t->changeFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->RunSmartEditor(); break;
        case 35: _t->StandardFormatEditor(); break;
        case 36: _t->OpenGcodeReference(); break;
        case 37: _t->ExportBlocklyToGcode(); break;
        case 38: _t->ExecuteRequestsFromExternal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->AddGcodeLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->LoadGcodeFromFileToEditor((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 41: _t->LoadGcode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->SelectGcodeExplorer(); break;
        case 43: _t->BackParentExplorer(); break;
        case 44: _t->CreateNewGcodeFile(); break;
        case 45: _t->SaveGcodeFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 46: _t->RefreshExplorer(); break;
        case 47: _t->DeleteGcodeFile(); break;
        case 48: _t->ChangeSelectedEditorThread((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->SetRobotState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->RequestPosition(); break;
        case 51: _t->Home(); break;
        case 52: _t->UpdatePositionControl((*reinterpret_cast< RobotPara(*)>(_a[1]))); break;
        case 53: _t->ReceiveHomePosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 54: _t->UpdateVelocity(); break;
        case 55: _t->UpdateAccel(); break;
        case 56: _t->UpdateStartSpeed(); break;
        case 57: _t->UpdateEndSpeed(); break;
        case 58: _t->UpdateJerk(); break;
        case 59: _t->AdjustGripperAngle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->Grip(); break;
        case 61: _t->Jogging((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 62: _t->MoveRobot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 63: _t->MoveRobot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 64: _t->MoveRobotFollowObject((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 65: _t->DoADemo(); break;
        case 66: _t->UpdateRobotPositionToUI(); break;
        case 67: _t->SetPump((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->SetLaser((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: _t->SetOnOffOutput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->SetValueOutput(); break;
        case 71: _t->RequestValueInput(); break;
        case 72: _t->GetValueInput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 73: _t->UpdateVariable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 74: _t->UpdateVariables((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 75: _t->RespondVariableValue((*reinterpret_cast< QIODevice*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 76: _t->UpdateGcodeValueToDeviceUI((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 77: _t->ChangeConveyorType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 78: _t->ChangeSelectedConveyor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 79: _t->ConnectConveyor(); break;
        case 80: _t->SetConveyorMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 81: _t->SetConveyorMovingMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 82: _t->SetConveyorSpeed(); break;
        case 83: _t->StopConveyor(); break;
        case 84: _t->ForwardConveyor(); break;
        case 85: _t->BackwardConveyor(); break;
        case 86: _t->SetConveyorPosition(); break;
        case 87: _t->SetConveyorAbsolutePosition(); break;
        case 88: _t->TriggedCustomConveyor(); break;
        case 89: _t->UpdatePointPositionOnConveyor((*reinterpret_cast< QLineEdit*(*)>(_a[1])),(*reinterpret_cast< QLineEdit*(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 90: _t->UpdateCursorPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 91: _t->ProcessShortcutKey(); break;
        case 92: _t->ChangeEncoderType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 93: _t->ChangeConveyorLinkToEncoder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 94: _t->ConnectEncoder(); break;
        case 95: _t->ReadEncoder(); break;
        case 96: _t->SetEncoderAutoRead(); break;
        case 97: _t->ResetEncoderPosition(); break;
        case 98: _t->SetEncoderVelocity(); break;
        case 99: _t->CalculateEncoderVelocity((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 100: _t->ProcessProximitySensorValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 101: _t->StartScheduledEncoder(); break;
        case 102: _t->ConnectSliding(); break;
        case 103: _t->GoHomeSliding(); break;
        case 104: _t->DisableSliding(); break;
        case 105: _t->SetSlidingSpeed(); break;
        case 106: _t->SetSlidingPosition(); break;
        case 107: _t->ConnectExternalMCU(); break;
        case 108: _t->TransmitTextToExternalMCU(); break;
        case 109: _t->DisplayTextFromExternalMCU((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 110: _t->TerminalTransmit(); break;
        case 111: _t->RunExternalScript(); break;
        case 112: _t->OpenExternalScriptFolder(); break;
        case 113: _t->UpdateTermite((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 114: _t->UpdateTermite((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 115: _t->UpdateCameraConnectedState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 116: _t->StartContinuousCapture((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 117: _t->ChangeOutputDisplay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 118: _t->LoadWebcam(); break;
        case 119: _t->LoadImages(); break;
        case 120: _t->StopCapture(); break;
        case 121: _t->OpenColorFilterWindow(); break;
        case 122: _t->SelectObjectDetectingAlgorithm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 123: _t->ConfigChessboard(); break;
        case 124: _t->GetCalibPointsFromImage((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 125: _t->UpdateRealPositionOfCalibPoints(); break;
        case 126: _t->GetObjectSizeFromImage((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 127: _t->GetMappingPointFromImage((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 128: _t->GetNewImageSize(); break;
        case 129: _t->UnselectToolButtons(); break;
        case 130: _t->EditImage((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 131: _t->SendImageToExternalScript((*reinterpret_cast< cv::Mat(*)>(_a[1]))); break;
        case 132: _t->AddDisplayObjectFromExternalScript((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 133: _t->ChangeSelectedTracking((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 134: _t->ChangeSelectedTrackingEncoder((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 135: _t->SaveTrackingManager(); break;
        case 136: _t->CalculateMappingMatrixTool(); break;
        case 137: _t->CalculatePointMatrixTool(); break;
        case 138: _t->CalculateTestPoint(); break;
        case 139: _t->CalculateVector(); break;
        case 140: _t->UpdateTestPoint((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 141: _t->MoveTestTrackingPoint(); break;
        case 142: _t->OpenLoadingPopup(); break;
        case 143: _t->CloseLoadingPopup(); break;
        case 144: _t->MaximizeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 145: _t->OpenCameraWindow(); break;
        case 146: _t->SelectImageProviderOption((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 147: _t->ProcessUIEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RobotPara >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 89:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLineEdit* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RobotWindow::*)(QString , bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::ChangeDeviceState)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(QVector<Object> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::GotObjects)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(cv::Size );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::GotResizePara)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(cv::Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::GotResizeImage)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(cv::Size );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::GotChessboardSize)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(QPolygonF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::GotCalibPoints)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(QMatrix );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::GotMappingMatrix)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(Object );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::GotOjectFilterInfo)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::RequestClearObjects)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::RequestDeleteObject)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::RequestFindChessboard)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::Send)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::ScanAndConnectRobot)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (RobotWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RobotWindow::DisconnectRobot)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RobotWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_RobotWindow.data,
    qt_meta_data_RobotWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RobotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RobotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RobotWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RobotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    }
    return _id;
}

// SIGNAL 0
void RobotWindow::ChangeDeviceState(QString _t1, bool _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RobotWindow::GotObjects(QVector<Object> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RobotWindow::GotResizePara(cv::Size _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RobotWindow::GotResizeImage(cv::Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RobotWindow::GotChessboardSize(cv::Size _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RobotWindow::GotCalibPoints(QPolygonF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RobotWindow::GotMappingMatrix(QMatrix _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RobotWindow::GotOjectFilterInfo(Object _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RobotWindow::RequestClearObjects()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void RobotWindow::RequestDeleteObject(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RobotWindow::RequestFindChessboard()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void RobotWindow::Send(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RobotWindow::ScanAndConnectRobot()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void RobotWindow::DisconnectRobot()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
