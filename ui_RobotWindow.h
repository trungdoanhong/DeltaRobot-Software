/********************************************************************************
** Form generated from reading UI file 'RobotWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTWINDOW_H
#define UI_ROBOTWINDOW_H

#include <DrawingWidget.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <codeeditor.h>
#include <imageviewer.h>

QT_BEGIN_NAMESPACE

class Ui_RobotWindow
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionAbout;
    QAction *actionGcode;
    QAction *actionSoftware;
    QAction *actionExecute_All;
    QAction *actionDelta_X_1;
    QAction *actionExecute;
    QAction *actionBaudrate;
    QAction *actionScale;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_15;
    QTabWidget *twDeltaManager;
    QWidget *tabDefaultDelta;
    QWidget *tabAddNewDelta;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_34;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *pbReadI0_3;
    QLabel *label_161;
    QLineEdit *leIP;
    QLabel *label_123;
    QLineEdit *lePort;
    QToolButton *tbServerConfig;
    QWidget *tabManagerLayout;
    QVBoxLayout *verticalLayout_46;
    QSplitter *splitter_2;
    QWidget *ModuleTabManagerWidget;
    QVBoxLayout *ModuleTabManagerLayout;
    QTabWidget *twModule;
    QWidget *tGcodeEditor;
    QVBoxLayout *verticalLayout;
    QFrame *robotTitile_16;
    QHBoxLayout *horizontalLayout_114;
    QLabel *label_28;
    QComboBox *cbProgramThreadID;
    QSpacerItem *horizontalSpacer_118;
    QRadioButton *rbEditorStart;
    QRadioButton *rbEditorCurrent;
    QPushButton *pbExecuteGcodes;
    QFrame *frame_53;
    QVBoxLayout *verticalLayout_84;
    QFrame *robotTitile_18;
    QHBoxLayout *horizontalLayout_120;
    QLabel *label_81;
    QSpacerItem *horizontalSpacer_122;
    QComboBox *cbProgramSource;
    QFrame *frame_55;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QToolButton *tbOpenGcodePath;
    QLineEdit *leGcodeExplorer;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *tbBackGcodeFolder;
    QToolButton *tbNewGcodeFile;
    QToolButton *tbRefreshExplorer;
    QToolButton *tbDeleteGcodeFile;
    QSpacerItem *horizontalSpacer_10;
    QTreeView *tvGcodeExplorer;
    QTreeView *tvCurrentVariable;
    QComboBox *cbVariableDisplayOption;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbSelectedProgram;
    QToolButton *pbSaveGcode;
    QToolButton *pbFormat;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *cbEditGcodeLock;
    QToolButton *pbOpenGcodeDocs;
    CodeEditor *pteGcodeArea;
    QFrame *frame_25;
    QHBoxLayout *horizontalLayout_30;
    QLabel *lbSelectedProgram_3;
    QToolButton *pbSaveFunctionScripts;
    CodeEditor *pteScriptFunction;
    QWidget *tObjectDetecting;
    QVBoxLayout *verticalLayout_25;
    QScrollArea *saObjectDetecting;
    QWidget *wObjectDetecting;
    QVBoxLayout *verticalLayout_17;
    QFrame *fObjectDetectingTitle;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_191;
    QComboBox *cbSelectedDetecting;
    QSpacerItem *horizontalSpacer_49;
    QSplitter *splitter;
    QGroupBox *gbImageViewer;
    QVBoxLayout *vlImageViewer;
    QFrame *fImageViewer;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pbFindChessboardTool;
    QPushButton *pbAreaTool;
    QPushButton *pbCalibPointTool;
    QPushButton *pbMappingPointTool;
    QSpacerItem *horizontalSpacer_12;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pbWarpTool;
    QPushButton *pbFilterTool;
    QPushButton *pbGetSizeTool;
    QSpacerItem *horizontalSpacer_11;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_7;
    ImageViewer *gvImageViewer;
    QFrame *frame_17;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_213;
    QComboBox *cbImageOutput;
    QLabel *lbDisplayRatio_2;
    QLabel *lbDisplayRatio_3;
    QPushButton *pbZoomInCameraView;
    QPushButton *pbZoomOutCameraView;
    QSpacerItem *verticalSpacer_10;
    QLabel *lbDisplayRatio;
    QLabel *lbMatSize;
    QFrame *fObjectDetectingTool;
    QVBoxLayout *verticalLayout_32;
    QGroupBox *gbImageProvider;
    QVBoxLayout *verticalLayout_39;
    QFrame *fImageProvider;
    QVBoxLayout *verticalLayout_51;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_176;
    QComboBox *cbSourceForImageProvider;
    QSpacerItem *horizontalSpacer_44;
    QLabel *label_6;
    QComboBox *cbTrackingThreadForCamera;
    QFrame *fWebcamSource;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *pbLoadCamera;
    QSpacerItem *horizontalSpacer_45;
    QFrame *fImageSource;
    QHBoxLayout *horizontalLayout_27;
    QToolButton *pbLoadTestImage;
    QSpacerItem *horizontalSpacer_64;
    QFrame *fCameraPara;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_178;
    QLineEdit *leImageWidth;
    QLabel *label_179;
    QLineEdit *leImageHeight;
    QLabel *label_73;
    QLineEdit *leCaptureInterval;
    QLabel *label_128;
    QToolButton *pbStartAcquisition;
    QToolButton *pbCapture;
    QLabel *lbCameraState;
    QSpacerItem *horizontalSpacer_65;
    QGroupBox *gbCameraCalibration;
    QVBoxLayout *verticalLayout_29;
    QFrame *fCameraCalibrationFrame;
    QVBoxLayout *verticalLayout_52;
    QPushButton *pbCalibStep1;
    QFrame *fCalibStep1;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lbWarpGuide;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pbCalibStep2;
    QLabel *label_2;
    QLabel *lbCalibGuide;
    QLabel *label_7;
    QFrame *fCalibStep2;
    QGridLayout *gridLayout_26;
    QLineEdit *leRealityP1P2Distance;
    QLineEdit *leCalibOffset_X;
    QLabel *label_148;
    QToolButton *tbPastePoint1;
    QPushButton *pbImageMapping;
    QLabel *label_39;
    QLineEdit *leRealityPoint2Y;
    QToolButton *tbPastePoint2;
    QPushButton *pbCalibPoint1;
    QLineEdit *leRealityPoint1X;
    QLabel *label_133;
    QLabel *label_38;
    QLabel *label_10;
    QPushButton *pbCalibPoint2;
    QLabel *label_40;
    QLabel *label_139;
    QLabel *label_142;
    QLabel *lbCalibType;
    QLabel *lbCalibType_2;
    QLineEdit *leRealityPoint1Y;
    QLabel *lbCalibType_3;
    QLineEdit *leRealityPoint2X;
    QLabel *label_141;
    QLabel *label_132;
    QLabel *label_140;
    QLabel *label_41;
    QLineEdit *leCalibOffset_Y;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *cbCalibType;
    QGroupBox *gbCameraObject;
    QVBoxLayout *verticalLayout_40;
    QFrame *fVisionObjectFrame;
    QVBoxLayout *verticalLayout_31;
    QHBoxLayout *horizontalLayout_29;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_126;
    QComboBox *cbDetectingAlgorithm;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_45;
    QLineEdit *leSimilarityThreshold;
    QFrame *fBlobPanel;
    QGridLayout *gridLayout_14;
    QLineEdit *leLRec;
    QLineEdit *leMaxLRec;
    QSpacerItem *horizontalSpacer_67;
    QLineEdit *leWRec;
    QLineEdit *leMinLRec;
    QLabel *label_42;
    QLabel *label_175;
    QSpacerItem *horizontalSpacer_66;
    QComboBox *cbObjectType;
    QLabel *label_43;
    QLabel *label_163;
    QLabel *label_173;
    QLabel *label_174;
    QLabel *label_55;
    QLabel *label_54;
    QLabel *label_172;
    QLineEdit *leMaxWRec;
    QLineEdit *leMinWRec;
    QFrame *fExternalScriptPanel;
    QGridLayout *gridLayout_28;
    QPushButton *pbRunExternalScript;
    QLabel *label_145;
    QPushButton *pbExternalScriptOpen;
    QLineEdit *lePythonUrl;
    QComboBox *cbImageSource;
    QLabel *label_180;
    QLabel *label_146;
    QLabel *label_186;
    QLabel *label_183;
    QLabel *label_184;
    QLabel *label_185;
    QLabel *label_187;
    QPushButton *pbExternalScriptHelp;
    QLabel *label_182;
    QLabel *label_181;
    QPushButton *pbOpenScriptExample;
    QFrame *fCirclePanel;
    QGridLayout *gridLayout_29;
    QLineEdit *leCenterThreshold;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *leEdgeThreshold;
    QLabel *label_193;
    QLabel *label_190;
    QLabel *label_192;
    QLineEdit *leMaxRadius;
    QLabel *label_194;
    QLabel *label_195;
    QLineEdit *leMinRadius;
    QLabel *label_188;
    QLabel *label_198;
    QLabel *label_199;
    QGroupBox *gbCameraVariable;
    QVBoxLayout *verticalLayout_34;
    QHBoxLayout *horizontalLayout_31;
    QSpacerItem *horizontalSpacer_50;
    QLabel *label_34;
    QComboBox *cbAutoUpdateObjectsDisplay;
    QPushButton *pbUpdateObjectToView;
    QPushButton *pbClearDetectObjects;
    QTableView *tvObjectTable;
    QFrame *fVisionVariableFrame;
    QVBoxLayout *verticalLayout_35;
    QHBoxLayout *horizontalLayout_25;
    QGridLayout *gridLayout_15;
    QLineEdit *leLimitMinX;
    QLabel *label_162;
    QLabel *label_155;
    QLineEdit *leLimitMaxX;
    QLabel *label_170;
    QSpacerItem *horizontalSpacer_25;
    QLineEdit *leLimitMaxY;
    QLabel *label_171;
    QLabel *label_56;
    QLabel *label_156;
    QLineEdit *leLimitMinY;
    QLabel *label_159;
    QLabel *label_157;
    QLabel *label_196;
    QLabel *label_44;
    QLineEdit *leDetectingObjectListName;
    QSpacerItem *verticalSpacer_11;
    QWidget *tPointTool;
    QVBoxLayout *verticalLayout_14;
    QScrollArea *saPointTool;
    QWidget *wPointTool;
    QVBoxLayout *verticalLayout_9;
    QFrame *fPointTool;
    QVBoxLayout *verticalLayout_59;
    QGroupBox *gbTrackingManager;
    QVBoxLayout *verticalLayout_60;
    QFrame *fTrackingManager;
    QGridLayout *gridLayout_16;
    QComboBox *cbSelectedTracking;
    QLabel *label_144;
    QCheckBox *cbReverseEncoderValue;
    QPushButton *pbSaveTrackingManager;
    QLabel *label_164;
    QLineEdit *leSelectedTrackingObjectList;
    QLineEdit *leVelocityVector;
    QSpacerItem *horizontalSpacer_24;
    QComboBox *cbTrackingEncoderSource;
    QLabel *label_160;
    QLabel *label_168;
    QFrame *frame;
    QGridLayout *gridLayout;
    QPushButton *pbMoveTestTrackingPoint;
    QLineEdit *leTestTrackingPointX;
    QLabel *label_231;
    QLineEdit *leTestTrackingPointZ;
    QLabel *label_11;
    QLabel *label_232;
    QLabel *label_230;
    QLineEdit *leTestTrackingPointY;
    QLineEdit *leMovingValue;
    QSpacerItem *horizontalSpacer_9;
    QToolButton *tbCopyTestTrackingPoint;
    QLabel *label_236;
    QGroupBox *gbCameraCalibration_3;
    QVBoxLayout *verticalLayout_63;
    QFrame *frame_19;
    QGridLayout *gridLayout_44;
    QPushButton *pbAddVector;
    QLabel *label_197;
    QLineEdit *leVectorZ;
    QLineEdit *lePointAtT1Z;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_206;
    QLabel *label_229;
    QPushButton *pbAnglePoint1;
    QPushButton *pbCalVector;
    QLineEdit *leVectorY;
    QLineEdit *lePointAtT1Y;
    QLabel *label_226;
    QLabel *label_228;
    QLineEdit *lePointAtT2Z;
    QLabel *label_208;
    QLineEdit *leVectorName;
    QLineEdit *lePointAtT2X;
    QLineEdit *lePointAtT2Y;
    QLabel *label_227;
    QPushButton *pbAnglePoint2;
    QLineEdit *leVectorValue;
    QListWidget *lwVectorList;
    QLabel *label_189;
    QLineEdit *lePointAtT1X;
    QLineEdit *leVectorX;
    QGroupBox *gbCameraCalibration_2;
    QVBoxLayout *verticalLayout_62;
    QFrame *frame_18;
    QGridLayout *gridLayout_41;
    QLabel *label_205;
    QLineEdit *leDestinationPoint2Y;
    QLineEdit *leSourcePoint1X;
    QLabel *label_201;
    QLineEdit *leDestinationPoint1X;
    QLineEdit *leSourcePoint2X;
    QSpacerItem *horizontalSpacer_41;
    QLineEdit *leMatrixName;
    QLineEdit *leSourcePoint1Y;
    QLabel *label_203;
    QLabel *label_165;
    QLabel *label_166;
    QLineEdit *leSourcePoint2Y;
    QPushButton *pbCalculateMappingMatrixTool;
    QLabel *label_202;
    QLineEdit *leDestinationPoint2X;
    QLabel *label_204;
    QLabel *label_177;
    QLineEdit *leDestinationPoint1Y;
    QPushButton *pbAddMappingMatrix;
    QLabel *label_200;
    QListWidget *lwMappingMatrixList;
    QLabel *lbMatrixDisplay;
    QGroupBox *gbCameraObject_2;
    QVBoxLayout *verticalLayout_64;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_136;
    QLineEdit *leObjectListName;
    QLabel *label_137;
    QLineEdit *leObjectX;
    QLabel *label_138;
    QLineEdit *leObjectY;
    QLabel *label_143;
    QLineEdit *leObjectZ;
    QPushButton *pbAddVariablePoint;
    QSpacerItem *horizontalSpacer_43;
    QGroupBox *gbCameraObject_3;
    QVBoxLayout *verticalLayout_65;
    QFrame *frame_20;
    QGridLayout *gridLayout_42;
    QLineEdit *leDPoint2Y;
    QLineEdit *leSPoint3Y;
    QLineEdit *leDPoint1X;
    QLabel *label_212;
    QPushButton *pbAddPointMatrix;
    QLabel *label_217;
    QLineEdit *leDPoint2X;
    QLineEdit *leDPoint4X;
    QLabel *label_207;
    QSpacerItem *horizontalSpacer_55;
    QLabel *label_211;
    QLineEdit *leSPoint2Y;
    QLineEdit *leSPoint1X;
    QLabel *label_218;
    QLabel *label_210;
    QLineEdit *leDPoint3Y;
    QLineEdit *lePointMatrixName;
    QLineEdit *leSPoint1Y;
    QLabel *lbPointMatrixDisplay;
    QLabel *label_219;
    QLabel *label_234;
    QLineEdit *leDPoint1Y;
    QLabel *label_216;
    QLabel *label_220;
    QLabel *label_235;
    QLabel *label_167;
    QLineEdit *leSPoint4X;
    QPushButton *pbCalculatePointMatrixTool;
    QLineEdit *leDPoint3X;
    QLineEdit *leDPoint4Y;
    QLineEdit *leSPoint2X;
    QLineEdit *leSPoint4Y;
    QLabel *label_233;
    QLineEdit *leSPoint3X;
    QListWidget *lwPointMatrixList;
    QGroupBox *gbCameraObject_4;
    QVBoxLayout *verticalLayout_66;
    QFrame *frame_21;
    QGridLayout *gridLayout_43;
    QLineEdit *leTestPointY;
    QLineEdit *leTestPointX;
    QLabel *label_223;
    QLineEdit *leTestMatrixName;
    QLineEdit *leTargetTestPointX;
    QLineEdit *leTargetTestPointY;
    QLabel *label_214;
    QLabel *label_215;
    QPushButton *pbCalculateTestPoint;
    QLabel *label_222;
    QLabel *label_221;
    QSpacerItem *horizontalSpacer_56;
    QSpacerItem *verticalSpacer_18;
    QWidget *tDrawing;
    QVBoxLayout *verticalLayout_26;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_38;
    QVBoxLayout *verticalLayout_37;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_21;
    QToolButton *pbOpenPicture;
    QHBoxLayout *horizontalLayout_24;
    QFrame *frame_2;
    QLabel *lbImageForDrawing;
    QWidget *widget;
    QVBoxLayout *verticalLayout_36;
    QWidget *widget_3;
    QGridLayout *gridLayout_23;
    QLabel *lbImageWidth;
    QLabel *lbImageHeight;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_25;
    QComboBox *cbConversionTool;
    QSlider *hsDrawingThreshold;
    QLineEdit *leDrawingThreshold;
    QLabel *label_14;
    QLabel *label_105;
    QCheckBox *cbReverseDrawing;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_47;
    QToolButton *pbPainting;
    QFrame *frame_7;
    QGridLayout *gridLayout_24;
    QLabel *label_20;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer_40;
    QComboBox *cbLockDrawingArea;
    QLabel *label_104;
    QLineEdit *leWidthScale;
    QLineEdit *leHeightScale;
    QLabel *label_21;
    QFrame *frame_3;
    DrawingWidget *lbDrawingArea;
    QHBoxLayout *horizontalLayout_23;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_26;
    QLineEdit *leDrawAg5;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_25;
    QLineEdit *leDrawAg4;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_24;
    QLineEdit *leDrawAg3;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_22;
    QLineEdit *leDrawAg2;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_19;
    QLineEdit *leDrawAg1;
    QGridLayout *gridLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QToolButton *pbDrawLine;
    QToolButton *pbDrawRectangle;
    QToolButton *pbZoomIn;
    QToolButton *pbCursor;
    QToolButton *pbDrawArc;
    QToolButton *pbDrawCircle;
    QToolButton *pbZoomOut;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_48;
    QToolButton *pbExportDrawingGcodes;
    QGridLayout *gridLayout_22;
    QLabel *label_96;
    QLabel *label_101;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_33;
    QLabel *label_97;
    QLineEdit *leTravelSpeed;
    QComboBox *cbDrawMethod;
    QComboBox *cbDrawingEffector;
    QLineEdit *leSafeZHeight;
    QLineEdit *leDrawingAcceleration;
    QLabel *label_102;
    QLabel *label_93;
    QLabel *label_95;
    QLabel *label_100;
    QLabel *label_98;
    QLineEdit *leDrawingSpeed;
    QLabel *label_99;
    QLabel *label_23;
    QLineEdit *leSpace;
    QLabel *label_103;
    QSpacerItem *verticalSpacer_6;
    QWidget *TermiteTab;
    QVBoxLayout *verticalLayout_11;
    QScrollArea *saTermite;
    QWidget *wgTermite;
    QVBoxLayout *verticalLayout_27;
    QGridLayout *gridLayout_4;
    QTextEdit *teDebug;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *leTerminal;
    QComboBox *cbDeviceSender;
    QWidget *DeviceTabManagerWidget;
    QVBoxLayout *GeometryTabManagerLayout;
    QTabWidget *twDevices;
    QWidget *tRobot;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *wgJoggingScrollWidget;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_28;
    QFrame *robotTitile;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_158;
    QSpacerItem *horizontalSpacer_31;
    QToolButton *tbAutoScanRobot;
    QPushButton *pbConnect;
    QFrame *frame_23;
    QHBoxLayout *horizontalLayout_41;
    QComboBox *cbSelectedRobot;
    QSpacerItem *horizontalSpacer_42;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_42;
    QLabel *lbComName;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_52;
    QLabel *lbBaudrate;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_44;
    QComboBox *cbRobotModel;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_53;
    QComboBox *cbRobotDOF;
    QFrame *fRobotPosition;
    QGridLayout *gridLayout_19;
    QFrame *frame_28;
    QVBoxLayout *verticalLayout_72;
    QFrame *positionTitile;
    QHBoxLayout *horizontalLayout_75;
    QLabel *label_270;
    QSpacerItem *horizontalSpacer_93;
    QToolButton *tbDisableRobot;
    QToolButton *tbRequestPosition;
    QFrame *frame_29;
    QHBoxLayout *horizontalLayout_76;
    QToolButton *pbHome;
    QSpacerItem *horizontalSpacer_95;
    QFrame *frame_9;
    QGridLayout *gridLayout_31;
    QLabel *label_92;
    QLabel *label_90;
    QLabel *label_94;
    QLabel *label_84;
    QLabel *label_88;
    QLabel *label_86;
    QLineEdit *leX;
    QLineEdit *leY;
    QLineEdit *leZ;
    QLineEdit *leW;
    QLineEdit *leU;
    QLineEdit *leV;
    QLabel *label_277;
    QLabel *label_278;
    QFrame *frame_30;
    QVBoxLayout *verticalLayout_73;
    QFrame *robotTitile_4;
    QHBoxLayout *horizontalLayout_77;
    QLabel *label_271;
    QSpacerItem *horizontalSpacer_94;
    QFrame *frame_31;
    QGridLayout *gridLayout_56;
    QToolButton *pbLeft;
    QToolButton *pbBackward;
    QLabel *label_275;
    QToolButton *pbPlusRoll;
    QLabel *label_274;
    QToolButton *pbSubPitch;
    QToolButton *pbSubRoll;
    QToolButton *pbUp;
    QToolButton *pbDown;
    QToolButton *pbForward;
    QToolButton *pbRight;
    QToolButton *pbPlusPitch;
    QToolButton *pbSubYaw;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_276;
    QToolButton *pbPlusYaw;
    QFrame *frame_32;
    QHBoxLayout *horizontalLayout_81;
    QLabel *label_33;
    QRadioButton *rb01;
    QRadioButton *rb05;
    QRadioButton *rb10;
    QRadioButton *rb50;
    QRadioButton *rb100;
    QRadioButton *rb500;
    QRadioButton *rb1000;
    QLabel *label_273;
    QSpacerItem *horizontalSpacer_27;
    QFrame *frame_22;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame1;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_272;
    QSpacerItem *horizontalSpacer_96;
    QFrame *frame_24;
    QGridLayout *gridLayout_3;
    QLineEdit *leEndSpeed;
    QLabel *label_62;
    QLineEdit *leAccel;
    QLineEdit *leVelocity;
    QLabel *label_29;
    QSpacerItem *horizontalSpacer_61;
    QLineEdit *leStartSpeed;
    QLabel *label_32;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_63;
    QLabel *label_116;
    QLabel *label_117;
    QLineEdit *leJerk;
    QLabel *label_64;
    QLabel *label_47;
    QFrame *frame_34;
    QVBoxLayout *verticalLayout_44;
    QFrame *robotTitile_3;
    QHBoxLayout *horizontalLayout_78;
    QLabel *label_279;
    QSpacerItem *horizontalSpacer_32;
    QFrame *frame_35;
    QVBoxLayout *verticalLayout_53;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pbPump;
    QPushButton *pbLaser;
    QSpacerItem *horizontalSpacer_97;
    QWidget *gbGripper;
    QGridLayout *gridLayout_13;
    QGridLayout *gridLayout_6;
    QLabel *label_17;
    QLabel *label_27;
    QPushButton *pbGrip;
    QLineEdit *leGripperMin;
    QLineEdit *leGripperMax;
    QHBoxLayout *horizontalLayout_15;
    QSlider *hsGripperAngle;
    QLabel *lbGripperValue;
    QSpacerItem *horizontalSpacer_46;
    QGroupBox *gbOutput;
    QVBoxLayout *verticalLayout_42;
    QWidget *wgDigitalOutput;
    QGridLayout *gridLayout_34;
    QCheckBox *cbD3;
    QCheckBox *cbD0;
    QLabel *label_71;
    QLabel *label_66;
    QCheckBox *cbD6;
    QLabel *label_53;
    QCheckBox *cbD2;
    QCheckBox *cbD7;
    QLabel *label_72;
    QCheckBox *cbD1;
    QCheckBox *cbD4;
    QLabel *label_51;
    QSpacerItem *horizontalSpacer_69;
    QLabel *label_69;
    QLabel *label_61;
    QSpacerItem *horizontalSpacer_48;
    QCheckBox *cbD5;
    QLabel *label_60;
    QLabel *label_68;
    QLabel *label_67;
    QLineEdit *leDx;
    QCheckBox *cbDx;
    QLineEdit *leRx;
    QCheckBox *cbRx;
    QFrame *frame_36;
    QVBoxLayout *verticalLayout_54;
    QFrame *robotTitile_6;
    QHBoxLayout *horizontalLayout_82;
    QLabel *label_280;
    QSpacerItem *horizontalSpacer_102;
    QFrame *frame_37;
    QHBoxLayout *horizontalLayout_83;
    QFrame *fRobotPosition_4;
    QGridLayout *gridLayout_20;
    QGroupBox *gbInput;
    QVBoxLayout *verticalLayout_43;
    QHBoxLayout *horizontalLayout_37;
    QPushButton *pbReadI0;
    QLabel *label_70;
    QSpacerItem *horizontalSpacer_16;
    QLabel *lbI0Value;
    QSpacerItem *horizontalSpacer_15;
    QCheckBox *cbToggle0;
    QSpacerItem *horizontalSpacer_51;
    QHBoxLayout *horizontalLayout_38;
    QPushButton *pbReadI1;
    QLabel *label_74;
    QSpacerItem *horizontalSpacer_17;
    QLabel *lbI1Value;
    QSpacerItem *horizontalSpacer_18;
    QCheckBox *cbToggle1;
    QSpacerItem *horizontalSpacer_52;
    QHBoxLayout *horizontalLayout_39;
    QPushButton *pbReadI2;
    QLabel *label_76;
    QSpacerItem *horizontalSpacer_19;
    QLabel *lbI2Value;
    QSpacerItem *horizontalSpacer_20;
    QCheckBox *cbToggle2;
    QSpacerItem *horizontalSpacer_53;
    QHBoxLayout *horizontalLayout_40;
    QPushButton *pbReadI3;
    QLabel *label_78;
    QSpacerItem *horizontalSpacer_21;
    QLabel *lbI3Value;
    QSpacerItem *horizontalSpacer_22;
    QCheckBox *cbToggle3;
    QSpacerItem *horizontalSpacer_54;
    QHBoxLayout *horizontalLayout_43;
    QPushButton *pbReadIx;
    QLineEdit *leIx;
    QSpacerItem *horizontalSpacer_29;
    QLabel *lbIxValue;
    QSpacerItem *horizontalSpacer_30;
    QCheckBox *cbTogglex;
    QSpacerItem *horizontalSpacer_57;
    QHBoxLayout *horizontalLayout_45;
    QPushButton *pbReadA0;
    QLabel *label_83;
    QSpacerItem *horizontalSpacer_34;
    QLabel *lbA0Value;
    QSpacerItem *horizontalSpacer_35;
    QLineEdit *leA0Delay;
    QSpacerItem *horizontalSpacer_58;
    QHBoxLayout *horizontalLayout_46;
    QPushButton *pbReadA1;
    QLabel *label_85;
    QSpacerItem *horizontalSpacer_36;
    QLabel *lbA1Value;
    QSpacerItem *horizontalSpacer_37;
    QLineEdit *leA1Delay;
    QSpacerItem *horizontalSpacer_59;
    QHBoxLayout *horizontalLayout_47;
    QPushButton *pbReadAx;
    QLineEdit *leAx;
    QSpacerItem *horizontalSpacer_38;
    QLabel *lbAxValue;
    QSpacerItem *horizontalSpacer_39;
    QLineEdit *leAxDelay;
    QSpacerItem *horizontalSpacer_60;
    QSpacerItem *verticalSpacer;
    QWidget *ConveyorTab;
    QVBoxLayout *verticalLayout_22;
    QFrame *frame_38;
    QVBoxLayout *verticalLayout_55;
    QFrame *robotTitile_7;
    QHBoxLayout *horizontalLayout_84;
    QLabel *label;
    QSpacerItem *horizontalSpacer_47;
    QCheckBox *checkBox;
    QPushButton *pbConveyorConnect;
    QFrame *frame_39;
    QHBoxLayout *horizontalLayout_85;
    QComboBox *cbSelectedConveyor;
    QSpacerItem *horizontalSpacer_103;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_86;
    QLabel *lbConveyorCOMName;
    QGroupBox *groupBox_11;
    QHBoxLayout *horizontalLayout_87;
    QLabel *lbBaudrate_3;
    QHBoxLayout *horizontalLayout_48;
    QFrame *robotTitile_9;
    QHBoxLayout *horizontalLayout_94;
    QLabel *label_8;
    QComboBox *cbConveyorType;
    QSpacerItem *horizontalSpacer_106;
    QFrame *fConveyorX;
    QGridLayout *gridLayout_7;
    QLineEdit *leConveyorXPosition;
    QLabel *label_12;
    QLabel *label_52;
    QLabel *label_57;
    QComboBox *cbConveyorMode;
    QComboBox *cbConveyorValueType;
    QLabel *lbUnitOfConveyorMoving;
    QLabel *lbSpeedOfPositionMode;
    QLineEdit *leConveyorXSpeed;
    QLabel *label_46;
    QFrame *fConveyorXHub;
    QGridLayout *gridLayout_18;
    QLabel *label_77;
    QLineEdit *leSubConveyor1Position;
    QLabel *label_115;
    QLabel *label_114;
    QComboBox *cbSubConveyor2Mode;
    QLineEdit *leSubConveyor1Speed;
    QLabel *label_75;
    QLabel *label_82;
    QLineEdit *leSubConveyor2Position;
    QLineEdit *leSubConveyor2Speed;
    QComboBox *cbSubConveyor3Mode;
    QLineEdit *leSubConveyor3Speed;
    QComboBox *cbSubConveyor1Mode;
    QLabel *label_80;
    QLineEdit *leSubConveyor3Position;
    QFrame *fConveyorCustom;
    QGridLayout *gridLayout_39;
    QLineEdit *pbStopCustomConveyor2Command;
    QPushButton *pbStartCustomConveyor3;
    QPushButton *pbStopCustomConveyor3;
    QLabel *label_147;
    QLineEdit *pbStartCustomConveyor2Command;
    QPushButton *pbStopCustomConveyor2;
    QLineEdit *pbStopCustomConveyor3Command;
    QLabel *label_153;
    QPushButton *pbStartCustomConveyor1;
    QPushButton *pbStopCustomConveyor1;
    QLineEdit *pbStopCustomConveyor1Command;
    QLineEdit *pbStartCustomConveyor1Command;
    QPushButton *pbStartCustomConveyor2;
    QLineEdit *pbStartCustomConveyor3Command;
    QLabel *label_154;
    QSpacerItem *verticalSpacer_2;
    QWidget *EncoderTab;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_40;
    QVBoxLayout *verticalLayout_76;
    QFrame *robotTitile_10;
    QHBoxLayout *horizontalLayout_88;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_107;
    QCheckBox *checkBox_3;
    QPushButton *pbConnectEncoder;
    QFrame *frame_42;
    QHBoxLayout *horizontalLayout_95;
    QComboBox *cbSelectedEncoder;
    QSpacerItem *horizontalSpacer_108;
    QGroupBox *groupBox_12;
    QHBoxLayout *horizontalLayout_96;
    QLabel *lbEncoderCOMname;
    QGroupBox *groupBox_16;
    QHBoxLayout *horizontalLayout_97;
    QLabel *lbBaudrate_5;
    QFrame *frame_43;
    QVBoxLayout *verticalLayout_77;
    QFrame *robotTitile_11;
    QHBoxLayout *horizontalLayout_98;
    QLabel *label_124;
    QComboBox *cbEncoderType;
    QSpacerItem *horizontalSpacer_109;
    QCheckBox *cbEncoderActive;
    QFrame *frame_44;
    QHBoxLayout *horizontalLayout_99;
    QGridLayout *gridLayout_21;
    QLineEdit *leEncoderCurrentPosition;
    QPushButton *pbSetEncoderInterval;
    QLabel *label_129;
    QLineEdit *leEncoderInterval;
    QLabel *label_125;
    QPushButton *pbResetEncoder;
    QPushButton *pbSetEncoderVelocity;
    QLabel *label_130;
    QLineEdit *leEncoderVelocity;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *pbReadEncoder;
    QComboBox *cbConveyorForVirtualEncoder;
    QCheckBox *cbLinkToConveyorX;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_14;
    QWidget *SliderTab;
    QVBoxLayout *verticalLayout_23;
    QFrame *frame_45;
    QVBoxLayout *verticalLayout_79;
    QFrame *robotTitile_13;
    QHBoxLayout *horizontalLayout_105;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_113;
    QCheckBox *checkBox_5;
    QPushButton *pbSlidingConnect;
    QFrame *frame_46;
    QHBoxLayout *horizontalLayout_106;
    QComboBox *cbSelectedSlider;
    QSpacerItem *horizontalSpacer_114;
    QGroupBox *groupBox_19;
    QHBoxLayout *horizontalLayout_107;
    QLabel *lbSliderCOMName;
    QGroupBox *groupBox_20;
    QHBoxLayout *horizontalLayout_108;
    QLabel *lbBaudrate_7;
    QFrame *frame_48;
    QVBoxLayout *verticalLayout_80;
    QFrame *robotTitile_14;
    QHBoxLayout *horizontalLayout_109;
    QLabel *label_284;
    QComboBox *cbEncoderType_2;
    QSpacerItem *horizontalSpacer_115;
    QCheckBox *cbEncoderActive_2;
    QGridLayout *gridLayout_8;
    QLabel *label_36;
    QPushButton *pbSlidingHome;
    QLineEdit *leSlidingSpeed;
    QLabel *label_59;
    QLineEdit *leSlidingPosition;
    QPushButton *pbSlidingDisable;
    QLabel *label_37;
    QLabel *label_58;
    QSpacerItem *verticalSpacer_3;
    QWidget *MCUTab;
    QVBoxLayout *verticalLayout_24;
    QFrame *frame_49;
    QVBoxLayout *verticalLayout_81;
    QFrame *robotTitile_15;
    QHBoxLayout *horizontalLayout_110;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_116;
    QCheckBox *checkBox_6;
    QPushButton *pbExternalControllerConnect;
    QFrame *frame_50;
    QHBoxLayout *horizontalLayout_111;
    QComboBox *cbSelectedDevice;
    QSpacerItem *horizontalSpacer_117;
    QGroupBox *groupBox_21;
    QHBoxLayout *horizontalLayout_112;
    QLabel *lbExternalCOMName;
    QGroupBox *groupBox_22;
    QHBoxLayout *horizontalLayout_113;
    QLabel *lbBaudrate_8;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_50;
    QTextEdit *teReceiveFromMCU;
    QLineEdit *leTransmitToMCU;
    QWidget *PlusDeviceTab;

    void setupUi(QMainWindow *RobotWindow)
    {
        if (RobotWindow->objectName().isEmpty())
            RobotWindow->setObjectName(QString::fromUtf8("RobotWindow"));
        RobotWindow->resize(1210, 780);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RobotWindow->sizePolicy().hasHeightForWidth());
        RobotWindow->setSizePolicy(sizePolicy);
        RobotWindow->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setBold(false);
        font.setKerning(true);
        RobotWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("delta_x_logo_96x96.ico"), QSize(), QIcon::Normal, QIcon::Off);
        RobotWindow->setWindowIcon(icon);
        RobotWindow->setLayoutDirection(Qt::LeftToRight);
        RobotWindow->setStyleSheet(QString::fromUtf8(""));
        actionAdd = new QAction(RobotWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionRemove = new QAction(RobotWindow);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        actionAbout = new QAction(RobotWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionGcode = new QAction(RobotWindow);
        actionGcode->setObjectName(QString::fromUtf8("actionGcode"));
        actionSoftware = new QAction(RobotWindow);
        actionSoftware->setObjectName(QString::fromUtf8("actionSoftware"));
        actionExecute_All = new QAction(RobotWindow);
        actionExecute_All->setObjectName(QString::fromUtf8("actionExecute_All"));
        actionDelta_X_1 = new QAction(RobotWindow);
        actionDelta_X_1->setObjectName(QString::fromUtf8("actionDelta_X_1"));
        actionDelta_X_1->setCheckable(true);
        actionDelta_X_1->setChecked(true);
        actionExecute = new QAction(RobotWindow);
        actionExecute->setObjectName(QString::fromUtf8("actionExecute"));
        actionBaudrate = new QAction(RobotWindow);
        actionBaudrate->setObjectName(QString::fromUtf8("actionBaudrate"));
        actionScale = new QAction(RobotWindow);
        actionScale->setObjectName(QString::fromUtf8("actionScale"));
        centralWidget = new QWidget(RobotWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget#centralWidget\n"
"{	\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
"QTextEdit\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}\n"
"\n"
"/* Global Button*/\n"
"QPushButton {\n"
"    background-color: #4A4A4F;\n"
"    border-radius: 5px;\n"
"    \n"
"	color: rgb(208, 208, 209);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(49, 149, 239);\n"
"}\n"
"\n"
"QCheckBox\n"
"{\n"
"	\n"
"	color: rgb(208, 208, 209);\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    height: 25px; \n"
"	width:25px;\n"
"    border: none; \n"
"    image: url(:/icon/icons8_switch_off_52px.png); \n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    image: url(:/icon/icons8_switch_on_52px.png); \n"
"}\n"
"\n"
"\n"
"QSlider\n"
"{	\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background: white;\n"
"    height: 2px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background:  #2196F3;\n"
"}\n"
"\n"
""
                        "QSlider::add-page:horizontal {\n"
"    background: #D0D0D1;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #2196F3;\n"
"    width: 12px;\n"
"    margin-top: -5px;\n"
"    margin-bottom: -5px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"QComboBox {\n"
"    background-color: #4A4A4F;\n"
"    color: #eaeaea;\n"
"    border: 1px solid #555;\n"
"    border-radius: 3px;\n"
"    selection-background-color: #4a4a4a;\n"
"    selection-color: #eaeaea;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 30px;\n"
"    border: none;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icon/icons8_expand_arrow_10px.png);\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    color: #eaeaea;\n"
"    background-color: #2a2a2a;\n"
"    selection-color: white;\n"
"    selection-background-color: #4a4a4a;\n"
"    border: 1px solid #555;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 1px solid #"
                        "0078d4;\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"	color: #D0D0D1;\n"
"	background-color: transparent;\n"
"	border: 1px solid #D0D0D1;\n"
"	border-radius: 5px;\n"
"	padding-left: 10px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #2196F3;\n"
"}\n"
"\n"
"QScrollArea\n"
"{\n"
"	border: none;\n"
"}\n"
"\n"
"/* VERTICAL SCROLLBAR */\n"
" QScrollBar:vertical {\n"
"	border: none;\n"
"    background: #262629;\n"
"    width: 14px;\n"
"    margin: 15px 0 15px 0;\n"
"	border-radius: 0px;\n"
" }\n"
"\n"
"/*  HANDLE BAR VERTICAL */\n"
"QScrollBar::handle:vertical {	\n"
"	background-color: #333337;\n"
"	min-height: 30px;\n"
"	border-radius: 7px;\n"
"}\n"
"QScrollBar::handle:vertical:hover{	\n"
"	background-color: #2196F3;\n"
"}\n"
"QScrollBar::handle:vertical:pressed {	\n"
"	background-color: #70BBF7;\n"
"}\n"
"\n"
"/* BTN TOP - SCROLLBAR */\n"
"QScrollBar::sub-line:vertical {\n"
"	border: none;\n"
"	background-color: rgb(59, 59, 90);\n"
"	height: 15px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
""
                        "}\n"
"QScrollBar::sub-line:vertical:hover {	\n"
"	background-color: rgb(255, 0, 127);\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed {	\n"
"	background-color: rgb(185, 0, 92);\n"
"}\n"
"\n"
"/* BTN BOTTOM - SCROLLBAR */\n"
"QScrollBar::add-line:vertical {\n"
"	border: none;\n"
"	background-color: #333337;\n"
"	height: 15px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover {	\n"
"	background-color: rgb(255, 0, 127);\n"
"}\n"
"QScrollBar::add-line:vertical:pressed {	\n"
"	background-color: rgb(185, 0, 92);\n"
"}\n"
"\n"
"/* RESET ARROW */\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"	background: none;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"	background: none;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"	border: none;\n"
"    background: #333337;\n"
" }\n"
"\n"
"/* HORIZONTAL SCROLLBAR */\n"
"QScrollBar:horizontal {\n"
"	border: none;\n"
"    background: #262629;\n"
"    height: 14px;\n"
""
                        "    margin: 0 15px 0 15px;\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"/* HANDLE BAR HORIZONTAL */\n"
"QScrollBar::handle:horizontal {	\n"
"	background-color: #333337;\n"
"	min-width: 30px;\n"
"	border-radius: 7px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover{	\n"
"	background-color: #2196F3;\n"
"}\n"
"QScrollBar::handle:horizontal:pressed {	\n"
"	background-color: #70BBF7;\n"
"}\n"
"\n"
"/* BTN LEFT - SCROLLBAR */\n"
"QScrollBar::sub-line:horizontal {\n"
"	border: none;\n"
"	background-color: rgb(59, 59, 90);\n"
"	width: 15px;\n"
"	subcontrol-position: left;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal:hover {	\n"
"	background-color: rgb(255, 0, 127);\n"
"}\n"
"QScrollBar::sub-line:horizontal:pressed {	\n"
"	background-color: rgb(185, 0, 92);\n"
"}\n"
"\n"
"/* BTN RIGHT - SCROLLBAR */\n"
"QScrollBar::add-line:horizontal {\n"
"	border: none;\n"
"	background-color: #333337;\n"
"	width: 15px;\n"
"	subcontrol-position: right;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line"
                        ":horizontal:hover {	\n"
"	background-color: rgb(255, 0, 127);\n"
"}\n"
"QScrollBar::add-line:horizontal:pressed {	\n"
"	background-color: rgb(185, 0, 92);\n"
"}\n"
"\n"
"/* RESET ARROW */\n"
"QScrollBar::left-arrow:horizontal, QScrollBar::right-arrow:horizontal {\n"
"	background: none;\n"
"}\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {\n"
"	background: none;\n"
"}\n"
"\n"
"\n"
""));
        verticalLayout_15 = new QVBoxLayout(centralWidget);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        twDeltaManager = new QTabWidget(centralWidget);
        twDeltaManager->setObjectName(QString::fromUtf8("twDeltaManager"));
        twDeltaManager->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(twDeltaManager->sizePolicy().hasHeightForWidth());
        twDeltaManager->setSizePolicy(sizePolicy1);
        twDeltaManager->setMinimumSize(QSize(0, 0));
        twDeltaManager->setMaximumSize(QSize(16777215, 40));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setKerning(true);
        twDeltaManager->setFont(font1);
        twDeltaManager->setLayoutDirection(Qt::LeftToRight);
        twDeltaManager->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border:  none;\n"
"}\n"
"\n"
"QTabWidget::tab-bar {\n"
"    left: 10px; /* move to the right by 5px */\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: rgb(200, 200, 200);\n"
"	color: rgb(100, 100, 100);\n"
"    border-radius: 13px;\n"
"    min-height: 25px;\n"
"    padding: 2px 20px 2px 20px;\n"
"	margin-left:5px;\n"
"	margin-right:5px;\n"
"	margin-top:2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: rgb(33, 125, 206);	\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius: 13px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 5px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
""));
        twDeltaManager->setTabPosition(QTabWidget::North);
        tabDefaultDelta = new QWidget();
        tabDefaultDelta->setObjectName(QString::fromUtf8("tabDefaultDelta"));
        twDeltaManager->addTab(tabDefaultDelta, QString());
        tabAddNewDelta = new QWidget();
        tabAddNewDelta->setObjectName(QString::fromUtf8("tabAddNewDelta"));
        twDeltaManager->addTab(tabAddNewDelta, QString());

        verticalLayout_15->addWidget(twDeltaManager);

        frame_11 = new QFrame(centralWidget);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setMinimumSize(QSize(0, 35));
        frame_11->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	padding-left: 5px;\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel\n"
"{	\n"
"	color: rgb(208, 208, 209);\n"
"}"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_34 = new QHBoxLayout(frame_11);
        horizontalLayout_34->setSpacing(10);
        horizontalLayout_34->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, 5, 0, 5);
        horizontalSpacer_26 = new QSpacerItem(853, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_34->addItem(horizontalSpacer_26);

        pbReadI0_3 = new QPushButton(frame_11);
        pbReadI0_3->setObjectName(QString::fromUtf8("pbReadI0_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pbReadI0_3->sizePolicy().hasHeightForWidth());
        pbReadI0_3->setSizePolicy(sizePolicy2);
        pbReadI0_3->setMinimumSize(QSize(50, 0));
        pbReadI0_3->setFlat(false);

        horizontalLayout_34->addWidget(pbReadI0_3);

        label_161 = new QLabel(frame_11);
        label_161->setObjectName(QString::fromUtf8("label_161"));
        QFont font2;
        font2.setBold(false);
        label_161->setFont(font2);
        label_161->setAlignment(Qt::AlignCenter);

        horizontalLayout_34->addWidget(label_161);

        leIP = new QLineEdit(frame_11);
        leIP->setObjectName(QString::fromUtf8("leIP"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(leIP->sizePolicy().hasHeightForWidth());
        leIP->setSizePolicy(sizePolicy3);
        leIP->setMinimumSize(QSize(100, 0));
        leIP->setFrame(false);
        leIP->setDragEnabled(false);
        leIP->setReadOnly(true);
        leIP->setClearButtonEnabled(false);

        horizontalLayout_34->addWidget(leIP);

        label_123 = new QLabel(frame_11);
        label_123->setObjectName(QString::fromUtf8("label_123"));
        label_123->setFont(font2);
        label_123->setAlignment(Qt::AlignCenter);

        horizontalLayout_34->addWidget(label_123);

        lePort = new QLineEdit(frame_11);
        lePort->setObjectName(QString::fromUtf8("lePort"));
        sizePolicy.setHeightForWidth(lePort->sizePolicy().hasHeightForWidth());
        lePort->setSizePolicy(sizePolicy);
        lePort->setMinimumSize(QSize(60, 0));
        lePort->setFrame(false);
        lePort->setDragEnabled(false);
        lePort->setReadOnly(true);
        lePort->setClearButtonEnabled(false);

        horizontalLayout_34->addWidget(lePort);

        tbServerConfig = new QToolButton(frame_11);
        tbServerConfig->setObjectName(QString::fromUtf8("tbServerConfig"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icons8_edit_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbServerConfig->setIcon(icon1);
        tbServerConfig->setAutoRaise(true);

        horizontalLayout_34->addWidget(tbServerConfig);


        verticalLayout_15->addWidget(frame_11);

        tabManagerLayout = new QWidget(centralWidget);
        tabManagerLayout->setObjectName(QString::fromUtf8("tabManagerLayout"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tabManagerLayout->sizePolicy().hasHeightForWidth());
        tabManagerLayout->setSizePolicy(sizePolicy4);
        tabManagerLayout->setMinimumSize(QSize(0, 0));
        tabManagerLayout->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border: none;\n"
"}\n"
"\n"
"QTabWidget::tab-bar \n"
"{\n"
"\n"
"}\n"
"\n"
"QTabBar::tab \n"
"{\n"
"    background: #3f3f3f;\n"
"	color: #f5f5f5;\n"
"   /* border-radius: 13px;*/\n"
"	border: 1px solid rgb(90, 90, 90);\n"
"    height: 25px;\n"
"    padding: 0px 10px 2px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #007cd6;	\n"
"	color: rgb(255, 255, 255);\n"
"	/*border-radius: 13px;*/\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #6f6f6f;	\n"
"	color: rgb(255, 255, 255);\n"
"	/*border-radius: 13px;*/\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"}"));
        verticalLayout_46 = new QVBoxLayout(tabManagerLayout);
        verticalLayout_46->setSpacing(0);
        verticalLayout_46->setContentsMargins(11, 11, 11, 11);
        verticalLayout_46->setObjectName(QString::fromUtf8("verticalLayout_46"));
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(tabManagerLayout);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setMinimumSize(QSize(0, 220));
        splitter_2->setStyleSheet(QString::fromUtf8("QSplitter::handle:horizontal {    \n"
"	\n"
"	image: url(:/icon/divider_50px.png);\n"
"}\n"
"\n"
""));
        splitter_2->setOrientation(Qt::Horizontal);
        splitter_2->setOpaqueResize(false);
        splitter_2->setHandleWidth(20);
        ModuleTabManagerWidget = new QWidget(splitter_2);
        ModuleTabManagerWidget->setObjectName(QString::fromUtf8("ModuleTabManagerWidget"));
        ModuleTabManagerWidget->setMinimumSize(QSize(0, 0));
        ModuleTabManagerWidget->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius: 5px;\n"
"	color: \n"
"}\n"
"\n"
"QToolButton::hover\n"
"{\n"
"border: 2px solid #FFFFFF;\n"
"background-color: rgb(129, 129, 129);;\n"
"}\n"
"QToolButton::pressed\n"
"{\n"
"	background-color: rgb(81, 176, 255);\n"
"}"));
        ModuleTabManagerLayout = new QVBoxLayout(ModuleTabManagerWidget);
        ModuleTabManagerLayout->setSpacing(0);
        ModuleTabManagerLayout->setContentsMargins(11, 11, 11, 11);
        ModuleTabManagerLayout->setObjectName(QString::fromUtf8("ModuleTabManagerLayout"));
        ModuleTabManagerLayout->setContentsMargins(0, 0, 0, 0);
        twModule = new QTabWidget(ModuleTabManagerWidget);
        twModule->setObjectName(QString::fromUtf8("twModule"));
        twModule->setEnabled(true);
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(false);
        twModule->setFont(font3);
        twModule->setFocusPolicy(Qt::TabFocus);
        twModule->setStyleSheet(QString::fromUtf8("/* General Tab Widget*/\n"
"#tGcodeEditor, #tDrawing, #tObjectDetecting, #tPointTool, #TermiteTab\n"
"{	\n"
"	background-color: rgb(30, 30, 32);\n"
"}\n"
"\n"
"QLabel\n"
"{	\n"
"	color: #D0D0D1;\n"
"}\n"
"\n"
"QGroupBox {\n"
"}\n"
"\n"
"QGroupBox[checkable=\"true\"]::title {\n"
"	margin-top: 1px;\n"
"}\n"
"\n"
"QGroupBox[checkable=\"true\"]::indicator {\n"
"	padding: 0 -2 -0 2;\n"
"	width: 13;\n"
"	height: 13;\n"
"}\n"
"\n"
"QGroupBox::indicator:checked {	\n"
"	image: url(:/icon/collapse.png);\n"
"}\n"
"\n"
"QGroupBox::indicator:unchecked {	\n"
"	image: url(:/icon/expand.png);\n"
"}\n"
"\n"
"QToolBox::tab\n"
"{	\n"
"	background-image: url(:/icon/icons8_collapse_arrow_10px.png);\n"
"	background-repeat: no-repeat;\n"
"	background-origin: content;\n"
"	padding-left: 5px;\n"
"	padding-top: 2px;\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(33, 125, 206);\n"
"}\n"
"QToolBox::tab:selected\n"
"{	\n"
"	background-image: url(:/icon/icons8_expand_arrow_10px.png);\n"
"	color: rgb(255, 255, 255);\n"
"	backgro"
                        "und-color: rgb(33, 125, 206);\n"
"}\n"
"/*\n"
"QToolBox QScrollArea>QWidget>QWidget\n"
"{\n"
"  background: rgb(255, 255, 255);\n"
"}*/"));
        twModule->setTabShape(QTabWidget::Rounded);
        twModule->setUsesScrollButtons(true);
        twModule->setDocumentMode(false);
        twModule->setTabsClosable(false);
        twModule->setMovable(false);
        twModule->setTabBarAutoHide(false);
        tGcodeEditor = new QWidget();
        tGcodeEditor->setObjectName(QString::fromUtf8("tGcodeEditor"));
        verticalLayout = new QVBoxLayout(tGcodeEditor);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        robotTitile_16 = new QFrame(tGcodeEditor);
        robotTitile_16->setObjectName(QString::fromUtf8("robotTitile_16"));
        robotTitile_16->setMinimumSize(QSize(0, 40));
        robotTitile_16->setMaximumSize(QSize(16777215, 40));
        robotTitile_16->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}\n"
"\n"
"QRadioButton {\n"
"    background-color: #434347;\n"
"    padding: 5px;\n"
"	 width:25px;\n"
"    border: 1px solid #646469;\n"
"	color: #D0D0D1;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QRadioButton:checked {\n"
"    background-color: #646469;\n"
"    border-color: #646469;\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton:hover {\n"
"    border-color: #2196F3;\n"
"}\n"
"\n"
"QRadioButton:disabled {\n"
"    background-color: #D0D0D0;\n"
"    color: #B0B0B0;\n"
"}"));
        robotTitile_16->setFrameShape(QFrame::StyledPanel);
        robotTitile_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_114 = new QHBoxLayout(robotTitile_16);
        horizontalLayout_114->setSpacing(6);
        horizontalLayout_114->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_114->setObjectName(QString::fromUtf8("horizontalLayout_114"));
        horizontalLayout_114->setContentsMargins(-1, 0, -1, 0);
        label_28 = new QLabel(robotTitile_16);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_114->addWidget(label_28);

        cbProgramThreadID = new QComboBox(robotTitile_16);
        cbProgramThreadID->addItem(QString());
        cbProgramThreadID->addItem(QString());
        cbProgramThreadID->addItem(QString());
        cbProgramThreadID->addItem(QString());
        cbProgramThreadID->setObjectName(QString::fromUtf8("cbProgramThreadID"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(cbProgramThreadID->sizePolicy().hasHeightForWidth());
        cbProgramThreadID->setSizePolicy(sizePolicy5);
        cbProgramThreadID->setMinimumSize(QSize(100, 0));

        horizontalLayout_114->addWidget(cbProgramThreadID);

        horizontalSpacer_118 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_114->addItem(horizontalSpacer_118);

        rbEditorStart = new QRadioButton(robotTitile_16);
        rbEditorStart->setObjectName(QString::fromUtf8("rbEditorStart"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(rbEditorStart->sizePolicy().hasHeightForWidth());
        rbEditorStart->setSizePolicy(sizePolicy6);
        rbEditorStart->setMinimumSize(QSize(60, 30));
        rbEditorStart->setChecked(true);

        horizontalLayout_114->addWidget(rbEditorStart);

        rbEditorCurrent = new QRadioButton(robotTitile_16);
        rbEditorCurrent->setObjectName(QString::fromUtf8("rbEditorCurrent"));
        sizePolicy6.setHeightForWidth(rbEditorCurrent->sizePolicy().hasHeightForWidth());
        rbEditorCurrent->setSizePolicy(sizePolicy6);
        rbEditorCurrent->setMinimumSize(QSize(60, 30));
        rbEditorCurrent->setChecked(false);

        horizontalLayout_114->addWidget(rbEditorCurrent);

        pbExecuteGcodes = new QPushButton(robotTitile_16);
        pbExecuteGcodes->setObjectName(QString::fromUtf8("pbExecuteGcodes"));
        QSizePolicy sizePolicy7(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pbExecuteGcodes->sizePolicy().hasHeightForWidth());
        pbExecuteGcodes->setSizePolicy(sizePolicy7);
        pbExecuteGcodes->setMinimumSize(QSize(70, 30));
        QFont font4;
        font4.setPointSize(10);
        pbExecuteGcodes->setFont(font4);
        pbExecuteGcodes->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/Play_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/icon/Pause_96px.png"), QSize(), QIcon::Normal, QIcon::On);
        pbExecuteGcodes->setIcon(icon2);
        pbExecuteGcodes->setIconSize(QSize(30, 30));
        pbExecuteGcodes->setCheckable(true);
        pbExecuteGcodes->setFlat(false);

        horizontalLayout_114->addWidget(pbExecuteGcodes);


        verticalLayout->addWidget(robotTitile_16);

        frame_53 = new QFrame(tGcodeEditor);
        frame_53->setObjectName(QString::fromUtf8("frame_53"));
        frame_53->setMinimumSize(QSize(0, 100));
        frame_53->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}"));
        frame_53->setFrameShape(QFrame::StyledPanel);
        frame_53->setFrameShadow(QFrame::Raised);
        verticalLayout_84 = new QVBoxLayout(frame_53);
        verticalLayout_84->setSpacing(0);
        verticalLayout_84->setContentsMargins(11, 11, 11, 11);
        verticalLayout_84->setObjectName(QString::fromUtf8("verticalLayout_84"));
        verticalLayout_84->setContentsMargins(0, 0, 0, 0);
        robotTitile_18 = new QFrame(frame_53);
        robotTitile_18->setObjectName(QString::fromUtf8("robotTitile_18"));
        robotTitile_18->setMaximumSize(QSize(16777215, 40));
        robotTitile_18->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_18->setFrameShape(QFrame::StyledPanel);
        robotTitile_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_120 = new QHBoxLayout(robotTitile_18);
        horizontalLayout_120->setSpacing(6);
        horizontalLayout_120->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_120->setObjectName(QString::fromUtf8("horizontalLayout_120"));
        label_81 = new QLabel(robotTitile_18);
        label_81->setObjectName(QString::fromUtf8("label_81"));

        horizontalLayout_120->addWidget(label_81);

        horizontalSpacer_122 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_120->addItem(horizontalSpacer_122);

        cbProgramSource = new QComboBox(robotTitile_18);
        cbProgramSource->addItem(QString());
        cbProgramSource->addItem(QString());
        cbProgramSource->setObjectName(QString::fromUtf8("cbProgramSource"));
        sizePolicy5.setHeightForWidth(cbProgramSource->sizePolicy().hasHeightForWidth());
        cbProgramSource->setSizePolicy(sizePolicy5);
        cbProgramSource->setMinimumSize(QSize(100, 0));

        horizontalLayout_120->addWidget(cbProgramSource);


        verticalLayout_84->addWidget(robotTitile_18);

        frame_55 = new QFrame(frame_53);
        frame_55->setObjectName(QString::fromUtf8("frame_55"));
        sizePolicy.setHeightForWidth(frame_55->sizePolicy().hasHeightForWidth());
        frame_55->setSizePolicy(sizePolicy);
        frame_55->setMinimumSize(QSize(0, 0));
        frame_55->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_55->setFrameShape(QFrame::StyledPanel);
        frame_55->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_55);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(frame_55);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        tbOpenGcodePath = new QToolButton(frame_55);
        tbOpenGcodePath->setObjectName(QString::fromUtf8("tbOpenGcodePath"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icons8_folder_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbOpenGcodePath->setIcon(icon3);
        tbOpenGcodePath->setAutoRaise(true);

        horizontalLayout_8->addWidget(tbOpenGcodePath);

        leGcodeExplorer = new QLineEdit(frame_55);
        leGcodeExplorer->setObjectName(QString::fromUtf8("leGcodeExplorer"));

        horizontalLayout_8->addWidget(leGcodeExplorer);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        tbBackGcodeFolder = new QToolButton(frame_55);
        tbBackGcodeFolder->setObjectName(QString::fromUtf8("tbBackGcodeFolder"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icons8_back_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbBackGcodeFolder->setIcon(icon4);
        tbBackGcodeFolder->setAutoRaise(true);

        horizontalLayout_6->addWidget(tbBackGcodeFolder);

        tbNewGcodeFile = new QToolButton(frame_55);
        tbNewGcodeFile->setObjectName(QString::fromUtf8("tbNewGcodeFile"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icons8_add_new_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbNewGcodeFile->setIcon(icon5);

        horizontalLayout_6->addWidget(tbNewGcodeFile);

        tbRefreshExplorer = new QToolButton(frame_55);
        tbRefreshExplorer->setObjectName(QString::fromUtf8("tbRefreshExplorer"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icons8_refresh_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbRefreshExplorer->setIcon(icon6);

        horizontalLayout_6->addWidget(tbRefreshExplorer);

        tbDeleteGcodeFile = new QToolButton(frame_55);
        tbDeleteGcodeFile->setObjectName(QString::fromUtf8("tbDeleteGcodeFile"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icons8_close_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbDeleteGcodeFile->setIcon(icon7);

        horizontalLayout_6->addWidget(tbDeleteGcodeFile);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);


        verticalLayout_2->addLayout(horizontalLayout_6);

        tvGcodeExplorer = new QTreeView(frame_55);
        tvGcodeExplorer->setObjectName(QString::fromUtf8("tvGcodeExplorer"));
        tvGcodeExplorer->setStyleSheet(QString::fromUtf8("QTreeView\n"
"{\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        tvGcodeExplorer->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tvGcodeExplorer->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout_2->addWidget(tvGcodeExplorer);

        tvCurrentVariable = new QTreeView(frame_55);
        tvCurrentVariable->setObjectName(QString::fromUtf8("tvCurrentVariable"));
        tvCurrentVariable->setStyleSheet(QString::fromUtf8("QTreeView\n"
"{\n"
"	color: rgb(224, 224, 224);\n"
"}\n"
"\n"
"QTreeView::header {\n"
"	background-color: rgb(78, 78, 78);\n"
"}"));

        verticalLayout_2->addWidget(tvCurrentVariable);

        cbVariableDisplayOption = new QComboBox(frame_55);
        cbVariableDisplayOption->addItem(QString());
        cbVariableDisplayOption->addItem(QString());
        cbVariableDisplayOption->setObjectName(QString::fromUtf8("cbVariableDisplayOption"));

        verticalLayout_2->addWidget(cbVariableDisplayOption);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_10 = new QFrame(frame_55);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setMinimumSize(QSize(0, 0));
        frame_10->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background-color: #333337;\n"
"}"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_10);
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(5, 5, 5, 5);
        lbSelectedProgram = new QLabel(frame_10);
        lbSelectedProgram->setObjectName(QString::fromUtf8("lbSelectedProgram"));

        horizontalLayout_9->addWidget(lbSelectedProgram);

        pbSaveGcode = new QToolButton(frame_10);
        pbSaveGcode->setObjectName(QString::fromUtf8("pbSaveGcode"));
        sizePolicy.setHeightForWidth(pbSaveGcode->sizePolicy().hasHeightForWidth());
        pbSaveGcode->setSizePolicy(sizePolicy);
        pbSaveGcode->setMinimumSize(QSize(0, 0));
        pbSaveGcode->setMaximumSize(QSize(20, 20));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/icons8_save_52px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSaveGcode->setIcon(icon8);
        pbSaveGcode->setIconSize(QSize(32, 32));
        pbSaveGcode->setAutoRaise(true);

        horizontalLayout_9->addWidget(pbSaveGcode);

        pbFormat = new QToolButton(frame_10);
        pbFormat->setObjectName(QString::fromUtf8("pbFormat"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/icons8_view_details_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFormat->setIcon(icon9);
        pbFormat->setIconSize(QSize(20, 20));
        pbFormat->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbFormat->setAutoRaise(true);

        horizontalLayout_9->addWidget(pbFormat);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        cbEditGcodeLock = new QCheckBox(frame_10);
        cbEditGcodeLock->setObjectName(QString::fromUtf8("cbEditGcodeLock"));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(cbEditGcodeLock->sizePolicy().hasHeightForWidth());
        cbEditGcodeLock->setSizePolicy(sizePolicy8);
        cbEditGcodeLock->setMinimumSize(QSize(20, 0));
        QFont font5;
        font5.setPointSize(8);
        font5.setBold(false);
        font5.setKerning(true);
        cbEditGcodeLock->setFont(font5);
        cbEditGcodeLock->setIconSize(QSize(32, 32));
        cbEditGcodeLock->setChecked(false);

        horizontalLayout_9->addWidget(cbEditGcodeLock);

        pbOpenGcodeDocs = new QToolButton(frame_10);
        pbOpenGcodeDocs->setObjectName(QString::fromUtf8("pbOpenGcodeDocs"));
        sizePolicy6.setHeightForWidth(pbOpenGcodeDocs->sizePolicy().hasHeightForWidth());
        pbOpenGcodeDocs->setSizePolicy(sizePolicy6);
        pbOpenGcodeDocs->setMaximumSize(QSize(20, 20));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/icons8_help_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOpenGcodeDocs->setIcon(icon10);
        pbOpenGcodeDocs->setIconSize(QSize(32, 32));
        pbOpenGcodeDocs->setAutoRaise(true);

        horizontalLayout_9->addWidget(pbOpenGcodeDocs);


        verticalLayout_3->addWidget(frame_10);

        pteGcodeArea = new CodeEditor(frame_55);
        pteGcodeArea->setObjectName(QString::fromUtf8("pteGcodeArea"));
        QSizePolicy sizePolicy9(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(pteGcodeArea->sizePolicy().hasHeightForWidth());
        pteGcodeArea->setSizePolicy(sizePolicy9);
        pteGcodeArea->setMinimumSize(QSize(310, 300));
        pteGcodeArea->setFont(font5);
        pteGcodeArea->setStyleSheet(QString::fromUtf8(""));
        pteGcodeArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pteGcodeArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pteGcodeArea->setReadOnly(false);
        pteGcodeArea->setTextInteractionFlags(Qt::TextEditorInteraction);

        verticalLayout_3->addWidget(pteGcodeArea);

        frame_25 = new QFrame(frame_55);
        frame_25->setObjectName(QString::fromUtf8("frame_25"));
        frame_25->setMinimumSize(QSize(0, 0));
        frame_25->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background-color: #333337;\n"
"}"));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        horizontalLayout_30 = new QHBoxLayout(frame_25);
        horizontalLayout_30->setSpacing(5);
        horizontalLayout_30->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalLayout_30->setContentsMargins(5, 5, 5, 5);
        lbSelectedProgram_3 = new QLabel(frame_25);
        lbSelectedProgram_3->setObjectName(QString::fromUtf8("lbSelectedProgram_3"));

        horizontalLayout_30->addWidget(lbSelectedProgram_3);

        pbSaveFunctionScripts = new QToolButton(frame_25);
        pbSaveFunctionScripts->setObjectName(QString::fromUtf8("pbSaveFunctionScripts"));
        sizePolicy.setHeightForWidth(pbSaveFunctionScripts->sizePolicy().hasHeightForWidth());
        pbSaveFunctionScripts->setSizePolicy(sizePolicy);
        pbSaveFunctionScripts->setMinimumSize(QSize(0, 0));
        pbSaveFunctionScripts->setMaximumSize(QSize(20, 20));
        pbSaveFunctionScripts->setIcon(icon8);
        pbSaveFunctionScripts->setIconSize(QSize(32, 32));
        pbSaveFunctionScripts->setAutoRaise(true);

        horizontalLayout_30->addWidget(pbSaveFunctionScripts);


        verticalLayout_3->addWidget(frame_25);

        pteScriptFunction = new CodeEditor(frame_55);
        pteScriptFunction->setObjectName(QString::fromUtf8("pteScriptFunction"));
        sizePolicy9.setHeightForWidth(pteScriptFunction->sizePolicy().hasHeightForWidth());
        pteScriptFunction->setSizePolicy(sizePolicy9);
        pteScriptFunction->setMinimumSize(QSize(310, 100));
        pteScriptFunction->setFont(font5);
        pteScriptFunction->setStyleSheet(QString::fromUtf8(""));
        pteScriptFunction->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pteScriptFunction->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        pteScriptFunction->setReadOnly(false);
        pteScriptFunction->setTextInteractionFlags(Qt::TextEditorInteraction);

        verticalLayout_3->addWidget(pteScriptFunction);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 3);

        verticalLayout_84->addWidget(frame_55);


        verticalLayout->addWidget(frame_53);

        twModule->addTab(tGcodeEditor, QString());
        tObjectDetecting = new QWidget();
        tObjectDetecting->setObjectName(QString::fromUtf8("tObjectDetecting"));
        tObjectDetecting->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_25 = new QVBoxLayout(tObjectDetecting);
        verticalLayout_25->setSpacing(5);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QString::fromUtf8("verticalLayout_25"));
        verticalLayout_25->setContentsMargins(0, 5, 0, 0);
        saObjectDetecting = new QScrollArea(tObjectDetecting);
        saObjectDetecting->setObjectName(QString::fromUtf8("saObjectDetecting"));
        saObjectDetecting->setLineWidth(1);
        saObjectDetecting->setWidgetResizable(true);
        wObjectDetecting = new QWidget();
        wObjectDetecting->setObjectName(QString::fromUtf8("wObjectDetecting"));
        wObjectDetecting->setGeometry(QRect(0, -1065, 655, 2500));
        wObjectDetecting->setMinimumSize(QSize(100, 2500));
        wObjectDetecting->setStyleSheet(QString::fromUtf8("QWidget#wObjectDetecting\n"
"{	\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
""));
        verticalLayout_17 = new QVBoxLayout(wObjectDetecting);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        fObjectDetectingTitle = new QFrame(wObjectDetecting);
        fObjectDetectingTitle->setObjectName(QString::fromUtf8("fObjectDetectingTitle"));
        fObjectDetectingTitle->setStyleSheet(QString::fromUtf8("QFrame#fObjectDetectingTitle\n"
"{\n"
"	padding: 3px;\n"
"	background-color: #333337;\n"
"	border: 1px solid rgb(16, 16, 16);\n"
"}"));
        horizontalLayout_17 = new QHBoxLayout(fObjectDetectingTitle);
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_191 = new QLabel(fObjectDetectingTitle);
        label_191->setObjectName(QString::fromUtf8("label_191"));

        horizontalLayout_17->addWidget(label_191);

        cbSelectedDetecting = new QComboBox(fObjectDetectingTitle);
        cbSelectedDetecting->addItem(QString());
        cbSelectedDetecting->addItem(QString());
        cbSelectedDetecting->addItem(QString());
        cbSelectedDetecting->addItem(QString());
        cbSelectedDetecting->setObjectName(QString::fromUtf8("cbSelectedDetecting"));
        QSizePolicy sizePolicy10(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(cbSelectedDetecting->sizePolicy().hasHeightForWidth());
        cbSelectedDetecting->setSizePolicy(sizePolicy10);
        cbSelectedDetecting->setMinimumSize(QSize(100, 0));

        horizontalLayout_17->addWidget(cbSelectedDetecting);

        horizontalSpacer_49 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_49);


        verticalLayout_17->addWidget(fObjectDetectingTitle);

        splitter = new QSplitter(wObjectDetecting);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy4.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy4);
        splitter->setStyleSheet(QString::fromUtf8("/*QSplitter::handle:vertical \n"
"{	\n"
"	background: rgb(37, 197, 255);\n"
"}*/\n"
"\n"
"QGroupBox:title\n"
"{\n"
"	padding:2px;\n"
"	color: rgb(208, 208, 209);\n"
"	background-color: rgb(51, 51, 55);\n"
"}\n"
"\n"
"QGroupBox\n"
"{	\n"
"	background-color: rgb(38, 38, 41);\n"
"}\n"
"QFrame\n"
"{	\n"
"	border: none;\n"
"}"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(10);
        gbImageViewer = new QGroupBox(splitter);
        gbImageViewer->setObjectName(QString::fromUtf8("gbImageViewer"));
        sizePolicy1.setHeightForWidth(gbImageViewer->sizePolicy().hasHeightForWidth());
        gbImageViewer->setSizePolicy(sizePolicy1);
        gbImageViewer->setMinimumSize(QSize(0, 300));
        gbImageViewer->setMaximumSize(QSize(16777215, 16777215));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        gbImageViewer->setFont(font6);
        gbImageViewer->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{	\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"}"));
        gbImageViewer->setCheckable(true);
        vlImageViewer = new QVBoxLayout(gbImageViewer);
        vlImageViewer->setSpacing(0);
        vlImageViewer->setContentsMargins(11, 11, 11, 11);
        vlImageViewer->setObjectName(QString::fromUtf8("vlImageViewer"));
        vlImageViewer->setContentsMargins(0, 0, 0, 0);
        fImageViewer = new QFrame(gbImageViewer);
        fImageViewer->setObjectName(QString::fromUtf8("fImageViewer"));
        fImageViewer->setFrameShape(QFrame::StyledPanel);
        fImageViewer->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(fImageViewer);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        frame_16 = new QFrame(fImageViewer);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setMinimumSize(QSize(30, 0));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_16);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pbFindChessboardTool = new QPushButton(frame_16);
        pbFindChessboardTool->setObjectName(QString::fromUtf8("pbFindChessboardTool"));
        sizePolicy5.setHeightForWidth(pbFindChessboardTool->sizePolicy().hasHeightForWidth());
        pbFindChessboardTool->setSizePolicy(sizePolicy5);
        pbFindChessboardTool->setMinimumSize(QSize(0, 30));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icon/icons8_chessboard_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFindChessboardTool->setIcon(icon11);
        pbFindChessboardTool->setIconSize(QSize(24, 24));
        pbFindChessboardTool->setCheckable(true);
        pbFindChessboardTool->setFlat(true);

        horizontalLayout_3->addWidget(pbFindChessboardTool);

        pbAreaTool = new QPushButton(frame_16);
        pbAreaTool->setObjectName(QString::fromUtf8("pbAreaTool"));
        sizePolicy5.setHeightForWidth(pbAreaTool->sizePolicy().hasHeightForWidth());
        pbAreaTool->setSizePolicy(sizePolicy5);
        pbAreaTool->setMinimumSize(QSize(0, 30));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icon/icons8_rectangle_64px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAreaTool->setIcon(icon12);
        pbAreaTool->setIconSize(QSize(24, 24));
        pbAreaTool->setCheckable(true);
        pbAreaTool->setFlat(true);

        horizontalLayout_3->addWidget(pbAreaTool);

        pbCalibPointTool = new QPushButton(frame_16);
        pbCalibPointTool->setObjectName(QString::fromUtf8("pbCalibPointTool"));
        sizePolicy5.setHeightForWidth(pbCalibPointTool->sizePolicy().hasHeightForWidth());
        pbCalibPointTool->setSizePolicy(sizePolicy5);
        pbCalibPointTool->setMinimumSize(QSize(0, 30));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icon/icons8_select_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCalibPointTool->setIcon(icon13);
        pbCalibPointTool->setIconSize(QSize(24, 24));
        pbCalibPointTool->setCheckable(true);
        pbCalibPointTool->setFlat(true);

        horizontalLayout_3->addWidget(pbCalibPointTool);

        pbMappingPointTool = new QPushButton(frame_16);
        pbMappingPointTool->setObjectName(QString::fromUtf8("pbMappingPointTool"));
        sizePolicy5.setHeightForWidth(pbMappingPointTool->sizePolicy().hasHeightForWidth());
        pbMappingPointTool->setSizePolicy(sizePolicy5);
        pbMappingPointTool->setMinimumSize(QSize(0, 30));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icon/icons8_target_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbMappingPointTool->setIcon(icon14);
        pbMappingPointTool->setIconSize(QSize(24, 24));
        pbMappingPointTool->setCheckable(true);
        pbMappingPointTool->setFlat(true);

        horizontalLayout_3->addWidget(pbMappingPointTool);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);


        verticalLayout_7->addWidget(frame_16);

        frame_8 = new QFrame(fImageViewer);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setMinimumSize(QSize(20, 0));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_8);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pbWarpTool = new QPushButton(frame_8);
        pbWarpTool->setObjectName(QString::fromUtf8("pbWarpTool"));
        sizePolicy5.setHeightForWidth(pbWarpTool->sizePolicy().hasHeightForWidth());
        pbWarpTool->setSizePolicy(sizePolicy5);
        pbWarpTool->setMinimumSize(QSize(0, 30));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icon/icons8_opacity_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbWarpTool->setIcon(icon15);
        pbWarpTool->setIconSize(QSize(24, 24));
        pbWarpTool->setCheckable(true);
        pbWarpTool->setFlat(true);

        horizontalLayout_4->addWidget(pbWarpTool);

        pbFilterTool = new QPushButton(frame_8);
        pbFilterTool->setObjectName(QString::fromUtf8("pbFilterTool"));
        sizePolicy5.setHeightForWidth(pbFilterTool->sizePolicy().hasHeightForWidth());
        pbFilterTool->setSizePolicy(sizePolicy5);
        pbFilterTool->setMinimumSize(QSize(0, 30));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icon/Slider 2_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFilterTool->setIcon(icon16);
        pbFilterTool->setIconSize(QSize(24, 24));
        pbFilterTool->setFlat(true);

        horizontalLayout_4->addWidget(pbFilterTool);

        pbGetSizeTool = new QPushButton(frame_8);
        pbGetSizeTool->setObjectName(QString::fromUtf8("pbGetSizeTool"));
        sizePolicy5.setHeightForWidth(pbGetSizeTool->sizePolicy().hasHeightForWidth());
        pbGetSizeTool->setSizePolicy(sizePolicy5);
        pbGetSizeTool->setMinimumSize(QSize(0, 30));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icon/icons8_page_size_64px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbGetSizeTool->setIcon(icon17);
        pbGetSizeTool->setIconSize(QSize(24, 24));
        pbGetSizeTool->setCheckable(true);
        pbGetSizeTool->setFlat(true);

        horizontalLayout_4->addWidget(pbGetSizeTool);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_11);


        verticalLayout_7->addWidget(frame_8);

        frame_15 = new QFrame(fImageViewer);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setMinimumSize(QSize(20, 0));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_15);
        horizontalLayout_13->setSpacing(5);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);


        verticalLayout_7->addWidget(frame_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        gvImageViewer = new ImageViewer(fImageViewer);
        gvImageViewer->setObjectName(QString::fromUtf8("gvImageViewer"));
        sizePolicy4.setHeightForWidth(gvImageViewer->sizePolicy().hasHeightForWidth());
        gvImageViewer->setSizePolicy(sizePolicy4);

        horizontalLayout_7->addWidget(gvImageViewer);

        frame_17 = new QFrame(fImageViewer);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setMinimumSize(QSize(30, 0));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_17);
        verticalLayout_10->setSpacing(5);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(5, 5, 5, 5);
        label_213 = new QLabel(frame_17);
        label_213->setObjectName(QString::fromUtf8("label_213"));

        verticalLayout_10->addWidget(label_213);

        cbImageOutput = new QComboBox(frame_17);
        cbImageOutput->addItem(QString());
        cbImageOutput->addItem(QString());
        cbImageOutput->addItem(QString());
        cbImageOutput->setObjectName(QString::fromUtf8("cbImageOutput"));
        cbImageOutput->setEnabled(false);
        sizePolicy.setHeightForWidth(cbImageOutput->sizePolicy().hasHeightForWidth());
        cbImageOutput->setSizePolicy(sizePolicy);
        cbImageOutput->setMinimumSize(QSize(90, 0));

        verticalLayout_10->addWidget(cbImageOutput);

        lbDisplayRatio_2 = new QLabel(frame_17);
        lbDisplayRatio_2->setObjectName(QString::fromUtf8("lbDisplayRatio_2"));

        verticalLayout_10->addWidget(lbDisplayRatio_2);

        lbDisplayRatio_3 = new QLabel(frame_17);
        lbDisplayRatio_3->setObjectName(QString::fromUtf8("lbDisplayRatio_3"));

        verticalLayout_10->addWidget(lbDisplayRatio_3);

        pbZoomInCameraView = new QPushButton(frame_17);
        pbZoomInCameraView->setObjectName(QString::fromUtf8("pbZoomInCameraView"));

        verticalLayout_10->addWidget(pbZoomInCameraView);

        pbZoomOutCameraView = new QPushButton(frame_17);
        pbZoomOutCameraView->setObjectName(QString::fromUtf8("pbZoomOutCameraView"));

        verticalLayout_10->addWidget(pbZoomOutCameraView);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_10);

        lbDisplayRatio = new QLabel(frame_17);
        lbDisplayRatio->setObjectName(QString::fromUtf8("lbDisplayRatio"));

        verticalLayout_10->addWidget(lbDisplayRatio);

        lbMatSize = new QLabel(frame_17);
        lbMatSize->setObjectName(QString::fromUtf8("lbMatSize"));

        verticalLayout_10->addWidget(lbMatSize);


        horizontalLayout_7->addWidget(frame_17);


        verticalLayout_7->addLayout(horizontalLayout_7);


        vlImageViewer->addWidget(fImageViewer);

        splitter->addWidget(gbImageViewer);
        fObjectDetectingTool = new QFrame(splitter);
        fObjectDetectingTool->setObjectName(QString::fromUtf8("fObjectDetectingTool"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(30);
        sizePolicy11.setHeightForWidth(fObjectDetectingTool->sizePolicy().hasHeightForWidth());
        fObjectDetectingTool->setSizePolicy(sizePolicy11);
        fObjectDetectingTool->setMinimumSize(QSize(0, 0));
        fObjectDetectingTool->setFrameShape(QFrame::StyledPanel);
        fObjectDetectingTool->setFrameShadow(QFrame::Raised);
        verticalLayout_32 = new QVBoxLayout(fObjectDetectingTool);
        verticalLayout_32->setSpacing(6);
        verticalLayout_32->setContentsMargins(11, 11, 11, 11);
        verticalLayout_32->setObjectName(QString::fromUtf8("verticalLayout_32"));
        verticalLayout_32->setContentsMargins(0, 0, 0, 0);
        gbImageProvider = new QGroupBox(fObjectDetectingTool);
        gbImageProvider->setObjectName(QString::fromUtf8("gbImageProvider"));
        gbImageProvider->setEnabled(true);
        gbImageProvider->setFont(font6);
        gbImageProvider->setCheckable(true);
        verticalLayout_39 = new QVBoxLayout(gbImageProvider);
        verticalLayout_39->setSpacing(7);
        verticalLayout_39->setContentsMargins(11, 11, 11, 11);
        verticalLayout_39->setObjectName(QString::fromUtf8("verticalLayout_39"));
        verticalLayout_39->setContentsMargins(-1, 10, -1, 11);
        fImageProvider = new QFrame(gbImageProvider);
        fImageProvider->setObjectName(QString::fromUtf8("fImageProvider"));
        fImageProvider->setMinimumSize(QSize(0, 100));
        fImageProvider->setFrameShape(QFrame::StyledPanel);
        fImageProvider->setFrameShadow(QFrame::Raised);
        verticalLayout_51 = new QVBoxLayout(fImageProvider);
        verticalLayout_51->setSpacing(5);
        verticalLayout_51->setContentsMargins(11, 11, 11, 11);
        verticalLayout_51->setObjectName(QString::fromUtf8("verticalLayout_51"));
        verticalLayout_51->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_176 = new QLabel(fImageProvider);
        label_176->setObjectName(QString::fromUtf8("label_176"));

        horizontalLayout_10->addWidget(label_176);

        cbSourceForImageProvider = new QComboBox(fImageProvider);
        cbSourceForImageProvider->addItem(QString());
        cbSourceForImageProvider->addItem(QString());
        cbSourceForImageProvider->addItem(QString());
        cbSourceForImageProvider->addItem(QString());
        cbSourceForImageProvider->setObjectName(QString::fromUtf8("cbSourceForImageProvider"));
        cbSourceForImageProvider->setMinimumSize(QSize(200, 0));

        horizontalLayout_10->addWidget(cbSourceForImageProvider);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_44);

        label_6 = new QLabel(fImageProvider);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_10->addWidget(label_6);

        cbTrackingThreadForCamera = new QComboBox(fImageProvider);
        cbTrackingThreadForCamera->addItem(QString());
        cbTrackingThreadForCamera->addItem(QString());
        cbTrackingThreadForCamera->addItem(QString());
        cbTrackingThreadForCamera->addItem(QString());
        cbTrackingThreadForCamera->setObjectName(QString::fromUtf8("cbTrackingThreadForCamera"));
        cbTrackingThreadForCamera->setMinimumSize(QSize(100, 0));

        horizontalLayout_10->addWidget(cbTrackingThreadForCamera);


        verticalLayout_51->addLayout(horizontalLayout_10);

        fWebcamSource = new QFrame(fImageProvider);
        fWebcamSource->setObjectName(QString::fromUtf8("fWebcamSource"));
        fWebcamSource->setMinimumSize(QSize(0, 20));
        fWebcamSource->setMaximumSize(QSize(16777215, 50));
        fWebcamSource->setStyleSheet(QString::fromUtf8("QFrame#fWebcamSource\n"
"{\n"
"	border: 1px solid rgb(10, 198, 255);\n"
"}"));
        fWebcamSource->setFrameShape(QFrame::StyledPanel);
        fWebcamSource->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(fWebcamSource);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(5, 5, 5, 5);
        pbLoadCamera = new QToolButton(fWebcamSource);
        pbLoadCamera->setObjectName(QString::fromUtf8("pbLoadCamera"));
        sizePolicy.setHeightForWidth(pbLoadCamera->sizePolicy().hasHeightForWidth());
        pbLoadCamera->setSizePolicy(sizePolicy);
        pbLoadCamera->setMinimumSize(QSize(0, 0));
        QFont font7;
        font7.setPointSize(8);
        font7.setBold(false);
        pbLoadCamera->setFont(font7);
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icon/webcam.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLoadCamera->setIcon(icon18);
        pbLoadCamera->setIconSize(QSize(30, 30));
        pbLoadCamera->setCheckable(true);
        pbLoadCamera->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbLoadCamera->setAutoRaise(true);

        horizontalLayout_11->addWidget(pbLoadCamera);

        horizontalSpacer_45 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_45);


        verticalLayout_51->addWidget(fWebcamSource);

        fImageSource = new QFrame(fImageProvider);
        fImageSource->setObjectName(QString::fromUtf8("fImageSource"));
        fImageSource->setMinimumSize(QSize(0, 20));
        fImageSource->setMaximumSize(QSize(16777215, 50));
        fImageSource->setStyleSheet(QString::fromUtf8("QFrame#fImageSource\n"
"{\n"
"	border: 1px solid rgb(10, 198, 255);\n"
"}"));
        fImageSource->setFrameShape(QFrame::StyledPanel);
        fImageSource->setFrameShadow(QFrame::Raised);
        horizontalLayout_27 = new QHBoxLayout(fImageSource);
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        horizontalLayout_27->setContentsMargins(5, 5, 5, 5);
        pbLoadTestImage = new QToolButton(fImageSource);
        pbLoadTestImage->setObjectName(QString::fromUtf8("pbLoadTestImage"));
        sizePolicy.setHeightForWidth(pbLoadTestImage->sizePolicy().hasHeightForWidth());
        pbLoadTestImage->setSizePolicy(sizePolicy);
        pbLoadTestImage->setMinimumSize(QSize(0, 0));
        pbLoadTestImage->setMaximumSize(QSize(120, 16777215));
        QFont font8;
        font8.setPointSize(8);
        pbLoadTestImage->setFont(font8);
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icon/icons8_image_30px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLoadTestImage->setIcon(icon19);
        pbLoadTestImage->setIconSize(QSize(30, 30));
        pbLoadTestImage->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbLoadTestImage->setAutoRaise(true);

        horizontalLayout_27->addWidget(pbLoadTestImage);

        horizontalSpacer_64 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_64);


        verticalLayout_51->addWidget(fImageSource);

        fCameraPara = new QFrame(fImageProvider);
        fCameraPara->setObjectName(QString::fromUtf8("fCameraPara"));
        fCameraPara->setMinimumSize(QSize(0, 20));
        fCameraPara->setMaximumSize(QSize(16777215, 50));
        fCameraPara->setStyleSheet(QString::fromUtf8("QFrame#fPluginSource\n"
"{\n"
"	border: 1px solid rgb(10, 198, 255);\n"
"}"));
        fCameraPara->setFrameShape(QFrame::StyledPanel);
        fCameraPara->setFrameShadow(QFrame::Raised);
        horizontalLayout_28 = new QHBoxLayout(fCameraPara);
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        horizontalLayout_28->setContentsMargins(5, 5, 5, 5);
        label_178 = new QLabel(fCameraPara);
        label_178->setObjectName(QString::fromUtf8("label_178"));
        label_178->setFont(font8);
        label_178->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_28->addWidget(label_178);

        leImageWidth = new QLineEdit(fCameraPara);
        leImageWidth->setObjectName(QString::fromUtf8("leImageWidth"));
        QSizePolicy sizePolicy12(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(leImageWidth->sizePolicy().hasHeightForWidth());
        leImageWidth->setSizePolicy(sizePolicy12);
        leImageWidth->setMinimumSize(QSize(0, 10));
        leImageWidth->setMaximumSize(QSize(40, 25));
        leImageWidth->setFont(font8);
        leImageWidth->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(leImageWidth);

        label_179 = new QLabel(fCameraPara);
        label_179->setObjectName(QString::fromUtf8("label_179"));
        label_179->setFont(font8);
        label_179->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_28->addWidget(label_179);

        leImageHeight = new QLineEdit(fCameraPara);
        leImageHeight->setObjectName(QString::fromUtf8("leImageHeight"));
        sizePolicy12.setHeightForWidth(leImageHeight->sizePolicy().hasHeightForWidth());
        leImageHeight->setSizePolicy(sizePolicy12);
        leImageHeight->setMinimumSize(QSize(0, 10));
        leImageHeight->setMaximumSize(QSize(40, 25));
        leImageHeight->setFont(font8);
        leImageHeight->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(leImageHeight);

        label_73 = new QLabel(fCameraPara);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setMaximumSize(QSize(50, 16777215));
        label_73->setFont(font8);

        horizontalLayout_28->addWidget(label_73);

        leCaptureInterval = new QLineEdit(fCameraPara);
        leCaptureInterval->setObjectName(QString::fromUtf8("leCaptureInterval"));
        sizePolicy12.setHeightForWidth(leCaptureInterval->sizePolicy().hasHeightForWidth());
        leCaptureInterval->setSizePolicy(sizePolicy12);
        leCaptureInterval->setMinimumSize(QSize(0, 10));
        leCaptureInterval->setMaximumSize(QSize(40, 25));
        leCaptureInterval->setFont(font8);
        leCaptureInterval->setAlignment(Qt::AlignCenter);

        horizontalLayout_28->addWidget(leCaptureInterval);

        label_128 = new QLabel(fCameraPara);
        label_128->setObjectName(QString::fromUtf8("label_128"));
        label_128->setMaximumSize(QSize(50, 16777215));
        label_128->setFont(font8);

        horizontalLayout_28->addWidget(label_128);

        pbStartAcquisition = new QToolButton(fCameraPara);
        pbStartAcquisition->setObjectName(QString::fromUtf8("pbStartAcquisition"));
        pbStartAcquisition->setEnabled(true);
        sizePolicy.setHeightForWidth(pbStartAcquisition->sizePolicy().hasHeightForWidth());
        pbStartAcquisition->setSizePolicy(sizePolicy);
        pbStartAcquisition->setMinimumSize(QSize(0, 0));
        pbStartAcquisition->setFont(font8);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icon/icons8-play-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon20.addFile(QString::fromUtf8(":/icon/icons8-pause-48.png"), QSize(), QIcon::Normal, QIcon::On);
        icon20.addFile(QString::fromUtf8("icon/icons8-play-48.png"), QSize(), QIcon::Selected, QIcon::Off);
        pbStartAcquisition->setIcon(icon20);
        pbStartAcquisition->setIconSize(QSize(30, 30));
        pbStartAcquisition->setCheckable(true);
        pbStartAcquisition->setChecked(false);
        pbStartAcquisition->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbStartAcquisition->setAutoRaise(true);

        horizontalLayout_28->addWidget(pbStartAcquisition);

        pbCapture = new QToolButton(fCameraPara);
        pbCapture->setObjectName(QString::fromUtf8("pbCapture"));
        pbCapture->setEnabled(true);
        pbCapture->setMinimumSize(QSize(0, 0));
        pbCapture->setFont(font8);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/icon/icons8-screenshot-40.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCapture->setIcon(icon21);
        pbCapture->setIconSize(QSize(30, 30));
        pbCapture->setCheckable(false);
        pbCapture->setChecked(false);
        pbCapture->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbCapture->setAutoRaise(true);

        horizontalLayout_28->addWidget(pbCapture);

        lbCameraState = new QLabel(fCameraPara);
        lbCameraState->setObjectName(QString::fromUtf8("lbCameraState"));
        lbCameraState->setEnabled(true);
        lbCameraState->setMaximumSize(QSize(20, 20));
        lbCameraState->setPixmap(QPixmap(QString::fromUtf8("icon/icons8-connection-status-on-48.png")));
        lbCameraState->setScaledContents(true);

        horizontalLayout_28->addWidget(lbCameraState);

        horizontalSpacer_65 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_65);


        verticalLayout_51->addWidget(fCameraPara);


        verticalLayout_39->addWidget(fImageProvider);


        verticalLayout_32->addWidget(gbImageProvider);

        gbCameraCalibration = new QGroupBox(fObjectDetectingTool);
        gbCameraCalibration->setObjectName(QString::fromUtf8("gbCameraCalibration"));
        gbCameraCalibration->setFont(font6);
        gbCameraCalibration->setCheckable(true);
        gbCameraCalibration->setChecked(true);
        verticalLayout_29 = new QVBoxLayout(gbCameraCalibration);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QString::fromUtf8("verticalLayout_29"));
        fCameraCalibrationFrame = new QFrame(gbCameraCalibration);
        fCameraCalibrationFrame->setObjectName(QString::fromUtf8("fCameraCalibrationFrame"));
        sizePolicy.setHeightForWidth(fCameraCalibrationFrame->sizePolicy().hasHeightForWidth());
        fCameraCalibrationFrame->setSizePolicy(sizePolicy);
        fCameraCalibrationFrame->setMinimumSize(QSize(0, 0));
        fCameraCalibrationFrame->setFrameShape(QFrame::StyledPanel);
        fCameraCalibrationFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_52 = new QVBoxLayout(fCameraCalibrationFrame);
        verticalLayout_52->setSpacing(6);
        verticalLayout_52->setContentsMargins(11, 11, 11, 11);
        verticalLayout_52->setObjectName(QString::fromUtf8("verticalLayout_52"));
        pbCalibStep1 = new QPushButton(fCameraCalibrationFrame);
        pbCalibStep1->setObjectName(QString::fromUtf8("pbCalibStep1"));
        pbCalibStep1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	height: 25px;\n"
"	text-align: left;\n"
"	padding-left: 50px;\n"
"}"));
        pbCalibStep1->setCheckable(true);
        pbCalibStep1->setChecked(true);

        verticalLayout_52->addWidget(pbCalibStep1);

        fCalibStep1 = new QFrame(fCameraCalibrationFrame);
        fCalibStep1->setObjectName(QString::fromUtf8("fCalibStep1"));
        fCalibStep1->setMinimumSize(QSize(0, 0));
        horizontalLayout_14 = new QHBoxLayout(fCalibStep1);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        lbWarpGuide = new QLabel(fCalibStep1);
        lbWarpGuide->setObjectName(QString::fromUtf8("lbWarpGuide"));
        sizePolicy6.setHeightForWidth(lbWarpGuide->sizePolicy().hasHeightForWidth());
        lbWarpGuide->setSizePolicy(sizePolicy6);
        lbWarpGuide->setMinimumSize(QSize(400, 91));
        lbWarpGuide->setMaximumSize(QSize(400, 91));
        lbWarpGuide->setStyleSheet(QString::fromUtf8(""));
        lbWarpGuide->setPixmap(QPixmap(QString::fromUtf8("icon/image-warp.png")));
        lbWarpGuide->setScaledContents(true);

        horizontalLayout_14->addWidget(lbWarpGuide);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_7);


        verticalLayout_52->addWidget(fCalibStep1);

        pbCalibStep2 = new QPushButton(fCameraCalibrationFrame);
        pbCalibStep2->setObjectName(QString::fromUtf8("pbCalibStep2"));
        pbCalibStep2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	height: 25px;\n"
"	text-align: left;\n"
"	padding-left: 50px;\n"
"}"));
        pbCalibStep2->setCheckable(true);
        pbCalibStep2->setChecked(true);

        verticalLayout_52->addWidget(pbCalibStep2);

        label_2 = new QLabel(fCameraCalibrationFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_52->addWidget(label_2);

        lbCalibGuide = new QLabel(fCameraCalibrationFrame);
        lbCalibGuide->setObjectName(QString::fromUtf8("lbCalibGuide"));
        sizePolicy6.setHeightForWidth(lbCalibGuide->sizePolicy().hasHeightForWidth());
        lbCalibGuide->setSizePolicy(sizePolicy6);
        lbCalibGuide->setMinimumSize(QSize(350, 91));
        lbCalibGuide->setMaximumSize(QSize(350, 91));
        lbCalibGuide->setStyleSheet(QString::fromUtf8(""));
        lbCalibGuide->setPixmap(QPixmap(QString::fromUtf8("icon/image-calib.png")));
        lbCalibGuide->setScaledContents(true);

        verticalLayout_52->addWidget(lbCalibGuide);

        label_7 = new QLabel(fCameraCalibrationFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_52->addWidget(label_7);

        fCalibStep2 = new QFrame(fCameraCalibrationFrame);
        fCalibStep2->setObjectName(QString::fromUtf8("fCalibStep2"));
        gridLayout_26 = new QGridLayout(fCalibStep2);
        gridLayout_26->setSpacing(10);
        gridLayout_26->setContentsMargins(11, 11, 11, 11);
        gridLayout_26->setObjectName(QString::fromUtf8("gridLayout_26"));
        leRealityP1P2Distance = new QLineEdit(fCalibStep2);
        leRealityP1P2Distance->setObjectName(QString::fromUtf8("leRealityP1P2Distance"));
        sizePolicy.setHeightForWidth(leRealityP1P2Distance->sizePolicy().hasHeightForWidth());
        leRealityP1P2Distance->setSizePolicy(sizePolicy);
        leRealityP1P2Distance->setMinimumSize(QSize(0, 0));
        leRealityP1P2Distance->setMaximumSize(QSize(50, 16777215));

        gridLayout_26->addWidget(leRealityP1P2Distance, 11, 2, 1, 1);

        leCalibOffset_X = new QLineEdit(fCalibStep2);
        leCalibOffset_X->setObjectName(QString::fromUtf8("leCalibOffset_X"));
        sizePolicy.setHeightForWidth(leCalibOffset_X->sizePolicy().hasHeightForWidth());
        leCalibOffset_X->setSizePolicy(sizePolicy);
        leCalibOffset_X->setMinimumSize(QSize(0, 0));
        leCalibOffset_X->setMaximumSize(QSize(50, 16777215));

        gridLayout_26->addWidget(leCalibOffset_X, 9, 2, 1, 1);

        label_148 = new QLabel(fCalibStep2);
        label_148->setObjectName(QString::fromUtf8("label_148"));
        label_148->setMinimumSize(QSize(0, 30));

        gridLayout_26->addWidget(label_148, 11, 3, 1, 1);

        tbPastePoint1 = new QToolButton(fCalibStep2);
        tbPastePoint1->setObjectName(QString::fromUtf8("tbPastePoint1"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/icon/Paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbPastePoint1->setIcon(icon22);
        tbPastePoint1->setIconSize(QSize(24, 24));

        gridLayout_26->addWidget(tbPastePoint1, 5, 7, 1, 1);

        pbImageMapping = new QPushButton(fCalibStep2);
        pbImageMapping->setObjectName(QString::fromUtf8("pbImageMapping"));
        sizePolicy.setHeightForWidth(pbImageMapping->sizePolicy().hasHeightForWidth());
        pbImageMapping->setSizePolicy(sizePolicy);
        pbImageMapping->setMinimumSize(QSize(0, 45));
        pbImageMapping->setMaximumSize(QSize(16777215, 16777215));
        pbImageMapping->setAutoFillBackground(false);
        pbImageMapping->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{	\n"
"	padding-left:5px;\n"
"	padding-right:5px;\n"
"}"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/icon/icons8_grid_3_48px_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbImageMapping->setIcon(icon23);
        pbImageMapping->setIconSize(QSize(30, 30));
        pbImageMapping->setCheckable(true);
        pbImageMapping->setChecked(false);
        pbImageMapping->setAutoDefault(false);
        pbImageMapping->setFlat(false);

        gridLayout_26->addWidget(pbImageMapping, 13, 1, 1, 2);

        label_39 = new QLabel(fCalibStep2);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_39, 3, 4, 1, 1);

        leRealityPoint2Y = new QLineEdit(fCalibStep2);
        leRealityPoint2Y->setObjectName(QString::fromUtf8("leRealityPoint2Y"));
        sizePolicy.setHeightForWidth(leRealityPoint2Y->sizePolicy().hasHeightForWidth());
        leRealityPoint2Y->setSizePolicy(sizePolicy);
        leRealityPoint2Y->setMinimumSize(QSize(0, 0));
        leRealityPoint2Y->setMaximumSize(QSize(50, 16777215));

        gridLayout_26->addWidget(leRealityPoint2Y, 6, 4, 1, 1);

        tbPastePoint2 = new QToolButton(fCalibStep2);
        tbPastePoint2->setObjectName(QString::fromUtf8("tbPastePoint2"));
        tbPastePoint2->setIcon(icon22);
        tbPastePoint2->setIconSize(QSize(24, 24));

        gridLayout_26->addWidget(tbPastePoint2, 6, 7, 1, 1);

        pbCalibPoint1 = new QPushButton(fCalibStep2);
        pbCalibPoint1->setObjectName(QString::fromUtf8("pbCalibPoint1"));
        sizePolicy6.setHeightForWidth(pbCalibPoint1->sizePolicy().hasHeightForWidth());
        pbCalibPoint1->setSizePolicy(sizePolicy6);
        pbCalibPoint1->setMinimumSize(QSize(180, 0));
        pbCalibPoint1->setFlat(true);

        gridLayout_26->addWidget(pbCalibPoint1, 5, 6, 1, 1);

        leRealityPoint1X = new QLineEdit(fCalibStep2);
        leRealityPoint1X->setObjectName(QString::fromUtf8("leRealityPoint1X"));
        sizePolicy.setHeightForWidth(leRealityPoint1X->sizePolicy().hasHeightForWidth());
        leRealityPoint1X->setSizePolicy(sizePolicy);
        leRealityPoint1X->setMinimumSize(QSize(0, 0));
        leRealityPoint1X->setMaximumSize(QSize(50, 16777215));

        gridLayout_26->addWidget(leRealityPoint1X, 5, 2, 1, 1);

        label_133 = new QLabel(fCalibStep2);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setMinimumSize(QSize(0, 30));

        gridLayout_26->addWidget(label_133, 5, 5, 1, 1);

        label_38 = new QLabel(fCalibStep2);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setMinimumSize(QSize(0, 0));
        QFont font9;
        font9.setBold(false);
        font9.setItalic(false);
        font9.setUnderline(false);
        font9.setStrikeOut(false);
        font9.setKerning(true);
        label_38->setFont(font9);
        label_38->setMouseTracking(true);
        label_38->setTextFormat(Qt::AutoText);
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_26->addWidget(label_38, 3, 2, 1, 1);

        label_10 = new QLabel(fCalibStep2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_26->addWidget(label_10, 12, 1, 1, 10);

        pbCalibPoint2 = new QPushButton(fCalibStep2);
        pbCalibPoint2->setObjectName(QString::fromUtf8("pbCalibPoint2"));
        sizePolicy6.setHeightForWidth(pbCalibPoint2->sizePolicy().hasHeightForWidth());
        pbCalibPoint2->setSizePolicy(sizePolicy6);
        pbCalibPoint2->setFlat(true);

        gridLayout_26->addWidget(pbCalibPoint2, 6, 6, 1, 1);

        label_40 = new QLabel(fCalibStep2);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setMinimumSize(QSize(0, 0));
        label_40->setFont(font9);
        label_40->setMouseTracking(true);
        label_40->setTextFormat(Qt::AutoText);
        label_40->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(label_40, 5, 1, 1, 1);

        label_139 = new QLabel(fCalibStep2);
        label_139->setObjectName(QString::fromUtf8("label_139"));
        label_139->setMinimumSize(QSize(0, 30));

        gridLayout_26->addWidget(label_139, 6, 3, 1, 1);

        label_142 = new QLabel(fCalibStep2);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        label_142->setMinimumSize(QSize(0, 30));

        gridLayout_26->addWidget(label_142, 9, 5, 1, 1);

        lbCalibType = new QLabel(fCalibStep2);
        lbCalibType->setObjectName(QString::fromUtf8("lbCalibType"));

        gridLayout_26->addWidget(lbCalibType, 9, 1, 1, 1);

        lbCalibType_2 = new QLabel(fCalibStep2);
        lbCalibType_2->setObjectName(QString::fromUtf8("lbCalibType_2"));

        gridLayout_26->addWidget(lbCalibType_2, 8, 1, 1, 1);

        leRealityPoint1Y = new QLineEdit(fCalibStep2);
        leRealityPoint1Y->setObjectName(QString::fromUtf8("leRealityPoint1Y"));
        sizePolicy.setHeightForWidth(leRealityPoint1Y->sizePolicy().hasHeightForWidth());
        leRealityPoint1Y->setSizePolicy(sizePolicy);
        leRealityPoint1Y->setMinimumSize(QSize(0, 0));
        leRealityPoint1Y->setMaximumSize(QSize(50, 16777215));

        gridLayout_26->addWidget(leRealityPoint1Y, 5, 4, 1, 1);

        lbCalibType_3 = new QLabel(fCalibStep2);
        lbCalibType_3->setObjectName(QString::fromUtf8("lbCalibType_3"));

        gridLayout_26->addWidget(lbCalibType_3, 11, 1, 1, 1);

        leRealityPoint2X = new QLineEdit(fCalibStep2);
        leRealityPoint2X->setObjectName(QString::fromUtf8("leRealityPoint2X"));
        sizePolicy.setHeightForWidth(leRealityPoint2X->sizePolicy().hasHeightForWidth());
        leRealityPoint2X->setSizePolicy(sizePolicy);
        leRealityPoint2X->setMinimumSize(QSize(0, 0));
        leRealityPoint2X->setMaximumSize(QSize(50, 16777215));

        gridLayout_26->addWidget(leRealityPoint2X, 6, 2, 1, 1);

        label_141 = new QLabel(fCalibStep2);
        label_141->setObjectName(QString::fromUtf8("label_141"));
        label_141->setMinimumSize(QSize(0, 30));

        gridLayout_26->addWidget(label_141, 9, 3, 1, 1);

        label_132 = new QLabel(fCalibStep2);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setMinimumSize(QSize(0, 30));

        gridLayout_26->addWidget(label_132, 5, 3, 1, 1);

        label_140 = new QLabel(fCalibStep2);
        label_140->setObjectName(QString::fromUtf8("label_140"));
        label_140->setMinimumSize(QSize(0, 30));

        gridLayout_26->addWidget(label_140, 6, 5, 1, 1);

        label_41 = new QLabel(fCalibStep2);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setMinimumSize(QSize(0, 0));
        label_41->setFont(font9);
        label_41->setMouseTracking(true);
        label_41->setTextFormat(Qt::AutoText);
        label_41->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_26->addWidget(label_41, 6, 1, 1, 1);

        leCalibOffset_Y = new QLineEdit(fCalibStep2);
        leCalibOffset_Y->setObjectName(QString::fromUtf8("leCalibOffset_Y"));
        sizePolicy.setHeightForWidth(leCalibOffset_Y->sizePolicy().hasHeightForWidth());
        leCalibOffset_Y->setSizePolicy(sizePolicy);
        leCalibOffset_Y->setMinimumSize(QSize(0, 0));
        leCalibOffset_Y->setMaximumSize(QSize(50, 16777215));

        gridLayout_26->addWidget(leCalibOffset_Y, 9, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_26->addItem(horizontalSpacer_3, 5, 8, 1, 1);

        cbCalibType = new QComboBox(fCalibStep2);
        cbCalibType->addItem(QString());
        cbCalibType->addItem(QString());
        cbCalibType->setObjectName(QString::fromUtf8("cbCalibType"));
        sizePolicy.setHeightForWidth(cbCalibType->sizePolicy().hasHeightForWidth());
        cbCalibType->setSizePolicy(sizePolicy);
        cbCalibType->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_26->addWidget(cbCalibType, 8, 2, 1, 2);


        verticalLayout_52->addWidget(fCalibStep2);


        verticalLayout_29->addWidget(fCameraCalibrationFrame);


        verticalLayout_32->addWidget(gbCameraCalibration);

        gbCameraObject = new QGroupBox(fObjectDetectingTool);
        gbCameraObject->setObjectName(QString::fromUtf8("gbCameraObject"));
        gbCameraObject->setFont(font6);
        gbCameraObject->setCheckable(true);
        verticalLayout_40 = new QVBoxLayout(gbCameraObject);
        verticalLayout_40->setSpacing(6);
        verticalLayout_40->setContentsMargins(11, 11, 11, 11);
        verticalLayout_40->setObjectName(QString::fromUtf8("verticalLayout_40"));
        verticalLayout_40->setContentsMargins(-1, 10, -1, -1);
        fVisionObjectFrame = new QFrame(gbCameraObject);
        fVisionObjectFrame->setObjectName(QString::fromUtf8("fVisionObjectFrame"));
        fVisionObjectFrame->setMinimumSize(QSize(0, 0));
        verticalLayout_31 = new QVBoxLayout(fVisionObjectFrame);
        verticalLayout_31->setSpacing(6);
        verticalLayout_31->setContentsMargins(11, 11, 11, 11);
        verticalLayout_31->setObjectName(QString::fromUtf8("verticalLayout_31"));
        verticalLayout_31->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));

        verticalLayout_31->addLayout(horizontalLayout_29);

        frame_13 = new QFrame(fVisionObjectFrame);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setMinimumSize(QSize(0, 0));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_26 = new QHBoxLayout(frame_13);
        horizontalLayout_26->setSpacing(10);
        horizontalLayout_26->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        label_126 = new QLabel(frame_13);
        label_126->setObjectName(QString::fromUtf8("label_126"));

        horizontalLayout_26->addWidget(label_126);

        cbDetectingAlgorithm = new QComboBox(frame_13);
        cbDetectingAlgorithm->addItem(QString());
        cbDetectingAlgorithm->addItem(QString());
        cbDetectingAlgorithm->addItem(QString());
        cbDetectingAlgorithm->setObjectName(QString::fromUtf8("cbDetectingAlgorithm"));

        horizontalLayout_26->addWidget(cbDetectingAlgorithm);

        horizontalSpacer_6 = new QSpacerItem(239, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_6);

        label_45 = new QLabel(frame_13);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        horizontalLayout_26->addWidget(label_45);

        leSimilarityThreshold = new QLineEdit(frame_13);
        leSimilarityThreshold->setObjectName(QString::fromUtf8("leSimilarityThreshold"));
        sizePolicy6.setHeightForWidth(leSimilarityThreshold->sizePolicy().hasHeightForWidth());
        leSimilarityThreshold->setSizePolicy(sizePolicy6);
        leSimilarityThreshold->setMinimumSize(QSize(0, 30));
        leSimilarityThreshold->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_26->addWidget(leSimilarityThreshold);


        verticalLayout_31->addWidget(frame_13);

        fBlobPanel = new QFrame(fVisionObjectFrame);
        fBlobPanel->setObjectName(QString::fromUtf8("fBlobPanel"));
        fBlobPanel->setMinimumSize(QSize(0, 0));
        fBlobPanel->setStyleSheet(QString::fromUtf8("QFrame#fBlobPanel\n"
"{\n"
"	border: 1px solid rgb(10, 198, 255);\n"
"}"));
        fBlobPanel->setFrameShape(QFrame::StyledPanel);
        fBlobPanel->setFrameShadow(QFrame::Raised);
        gridLayout_14 = new QGridLayout(fBlobPanel);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        leLRec = new QLineEdit(fBlobPanel);
        leLRec->setObjectName(QString::fromUtf8("leLRec"));
        sizePolicy6.setHeightForWidth(leLRec->sizePolicy().hasHeightForWidth());
        leLRec->setSizePolicy(sizePolicy6);
        leLRec->setMinimumSize(QSize(0, 30));
        leLRec->setMaximumSize(QSize(50, 16777215));

        gridLayout_14->addWidget(leLRec, 4, 2, 1, 1);

        leMaxLRec = new QLineEdit(fBlobPanel);
        leMaxLRec->setObjectName(QString::fromUtf8("leMaxLRec"));
        sizePolicy6.setHeightForWidth(leMaxLRec->sizePolicy().hasHeightForWidth());
        leMaxLRec->setSizePolicy(sizePolicy6);
        leMaxLRec->setMinimumSize(QSize(0, 20));
        leMaxLRec->setMaximumSize(QSize(50, 16777215));

        gridLayout_14->addWidget(leMaxLRec, 4, 9, 1, 1);

        horizontalSpacer_67 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_67, 3, 4, 1, 1);

        leWRec = new QLineEdit(fBlobPanel);
        leWRec->setObjectName(QString::fromUtf8("leWRec"));
        sizePolicy6.setHeightForWidth(leWRec->sizePolicy().hasHeightForWidth());
        leWRec->setSizePolicy(sizePolicy6);
        leWRec->setMinimumSize(QSize(0, 30));
        leWRec->setMaximumSize(QSize(50, 16777215));

        gridLayout_14->addWidget(leWRec, 3, 2, 1, 1);

        leMinLRec = new QLineEdit(fBlobPanel);
        leMinLRec->setObjectName(QString::fromUtf8("leMinLRec"));
        sizePolicy6.setHeightForWidth(leMinLRec->sizePolicy().hasHeightForWidth());
        leMinLRec->setSizePolicy(sizePolicy6);
        leMinLRec->setMinimumSize(QSize(0, 20));
        leMinLRec->setMaximumSize(QSize(50, 16777215));

        gridLayout_14->addWidget(leMinLRec, 4, 7, 1, 1);

        label_42 = new QLabel(fBlobPanel);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_14->addWidget(label_42, 3, 1, 1, 1);

        label_175 = new QLabel(fBlobPanel);
        label_175->setObjectName(QString::fromUtf8("label_175"));
        label_175->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_14->addWidget(label_175, 4, 8, 1, 1);

        horizontalSpacer_66 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_14->addItem(horizontalSpacer_66, 3, 10, 1, 1);

        cbObjectType = new QComboBox(fBlobPanel);
        cbObjectType->addItem(QString());
        cbObjectType->addItem(QString());
        cbObjectType->addItem(QString());
        cbObjectType->addItem(QString());
        cbObjectType->addItem(QString());
        cbObjectType->addItem(QString());
        cbObjectType->setObjectName(QString::fromUtf8("cbObjectType"));
        cbObjectType->setEnabled(true);
        cbObjectType->setMinimumSize(QSize(0, 30));

        gridLayout_14->addWidget(cbObjectType, 0, 2, 1, 1);

        label_43 = new QLabel(fBlobPanel);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_14->addWidget(label_43, 4, 1, 1, 1);

        label_163 = new QLabel(fBlobPanel);
        label_163->setObjectName(QString::fromUtf8("label_163"));

        gridLayout_14->addWidget(label_163, 0, 1, 1, 1);

        label_173 = new QLabel(fBlobPanel);
        label_173->setObjectName(QString::fromUtf8("label_173"));
        label_173->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_14->addWidget(label_173, 3, 8, 1, 1);

        label_174 = new QLabel(fBlobPanel);
        label_174->setObjectName(QString::fromUtf8("label_174"));
        label_174->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_14->addWidget(label_174, 4, 6, 1, 1);

        label_55 = new QLabel(fBlobPanel);
        label_55->setObjectName(QString::fromUtf8("label_55"));

        gridLayout_14->addWidget(label_55, 4, 3, 1, 1);

        label_54 = new QLabel(fBlobPanel);
        label_54->setObjectName(QString::fromUtf8("label_54"));

        gridLayout_14->addWidget(label_54, 3, 3, 1, 1);

        label_172 = new QLabel(fBlobPanel);
        label_172->setObjectName(QString::fromUtf8("label_172"));
        label_172->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_14->addWidget(label_172, 3, 6, 1, 1);

        leMaxWRec = new QLineEdit(fBlobPanel);
        leMaxWRec->setObjectName(QString::fromUtf8("leMaxWRec"));
        sizePolicy6.setHeightForWidth(leMaxWRec->sizePolicy().hasHeightForWidth());
        leMaxWRec->setSizePolicy(sizePolicy6);
        leMaxWRec->setMinimumSize(QSize(0, 20));
        leMaxWRec->setMaximumSize(QSize(50, 16777215));

        gridLayout_14->addWidget(leMaxWRec, 3, 9, 1, 1);

        leMinWRec = new QLineEdit(fBlobPanel);
        leMinWRec->setObjectName(QString::fromUtf8("leMinWRec"));
        sizePolicy6.setHeightForWidth(leMinWRec->sizePolicy().hasHeightForWidth());
        leMinWRec->setSizePolicy(sizePolicy6);
        leMinWRec->setMinimumSize(QSize(0, 20));
        leMinWRec->setMaximumSize(QSize(50, 16777215));

        gridLayout_14->addWidget(leMinWRec, 3, 7, 1, 1);


        verticalLayout_31->addWidget(fBlobPanel);

        fExternalScriptPanel = new QFrame(fVisionObjectFrame);
        fExternalScriptPanel->setObjectName(QString::fromUtf8("fExternalScriptPanel"));
        fExternalScriptPanel->setMinimumSize(QSize(0, 0));
        fExternalScriptPanel->setStyleSheet(QString::fromUtf8("QFrame#fExternalScriptPanel\n"
"{\n"
"	border: 1px solid rgb(10, 198, 255);\n"
"}"));
        fExternalScriptPanel->setFrameShape(QFrame::StyledPanel);
        fExternalScriptPanel->setFrameShadow(QFrame::Raised);
        gridLayout_28 = new QGridLayout(fExternalScriptPanel);
        gridLayout_28->setSpacing(6);
        gridLayout_28->setContentsMargins(11, 11, 11, 11);
        gridLayout_28->setObjectName(QString::fromUtf8("gridLayout_28"));
        pbRunExternalScript = new QPushButton(fExternalScriptPanel);
        pbRunExternalScript->setObjectName(QString::fromUtf8("pbRunExternalScript"));
        sizePolicy6.setHeightForWidth(pbRunExternalScript->sizePolicy().hasHeightForWidth());
        pbRunExternalScript->setSizePolicy(sizePolicy6);
        pbRunExternalScript->setMaximumSize(QSize(30, 16777215));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/icon/icons8_play_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon24.addFile(QString::fromUtf8(":/icon/Pause_96px.png"), QSize(), QIcon::Normal, QIcon::On);
        pbRunExternalScript->setIcon(icon24);
        pbRunExternalScript->setCheckable(true);

        gridLayout_28->addWidget(pbRunExternalScript, 1, 3, 1, 1);

        label_145 = new QLabel(fExternalScriptPanel);
        label_145->setObjectName(QString::fromUtf8("label_145"));

        gridLayout_28->addWidget(label_145, 1, 0, 1, 1);

        pbExternalScriptOpen = new QPushButton(fExternalScriptPanel);
        pbExternalScriptOpen->setObjectName(QString::fromUtf8("pbExternalScriptOpen"));
        sizePolicy6.setHeightForWidth(pbExternalScriptOpen->sizePolicy().hasHeightForWidth());
        pbExternalScriptOpen->setSizePolicy(sizePolicy6);
        pbExternalScriptOpen->setMaximumSize(QSize(30, 16777215));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/icon/icons8_folder_64px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbExternalScriptOpen->setIcon(icon25);

        gridLayout_28->addWidget(pbExternalScriptOpen, 1, 2, 1, 1);

        lePythonUrl = new QLineEdit(fExternalScriptPanel);
        lePythonUrl->setObjectName(QString::fromUtf8("lePythonUrl"));
        QSizePolicy sizePolicy13(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(lePythonUrl->sizePolicy().hasHeightForWidth());
        lePythonUrl->setSizePolicy(sizePolicy13);
        lePythonUrl->setMinimumSize(QSize(0, 30));
        lePythonUrl->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_28->addWidget(lePythonUrl, 1, 1, 1, 1);

        cbImageSource = new QComboBox(fExternalScriptPanel);
        cbImageSource->addItem(QString());
        cbImageSource->addItem(QString());
        cbImageSource->addItem(QString());
        cbImageSource->setObjectName(QString::fromUtf8("cbImageSource"));

        gridLayout_28->addWidget(cbImageSource, 2, 1, 1, 1);

        label_180 = new QLabel(fExternalScriptPanel);
        label_180->setObjectName(QString::fromUtf8("label_180"));

        gridLayout_28->addWidget(label_180, 3, 0, 1, 1);

        label_146 = new QLabel(fExternalScriptPanel);
        label_146->setObjectName(QString::fromUtf8("label_146"));

        gridLayout_28->addWidget(label_146, 2, 0, 1, 1);

        label_186 = new QLabel(fExternalScriptPanel);
        label_186->setObjectName(QString::fromUtf8("label_186"));

        gridLayout_28->addWidget(label_186, 4, 1, 1, 1);

        label_183 = new QLabel(fExternalScriptPanel);
        label_183->setObjectName(QString::fromUtf8("label_183"));

        gridLayout_28->addWidget(label_183, 3, 3, 1, 2);

        label_184 = new QLabel(fExternalScriptPanel);
        label_184->setObjectName(QString::fromUtf8("label_184"));

        gridLayout_28->addWidget(label_184, 4, 0, 1, 1);

        label_185 = new QLabel(fExternalScriptPanel);
        label_185->setObjectName(QString::fromUtf8("label_185"));

        gridLayout_28->addWidget(label_185, 5, 0, 1, 1);

        label_187 = new QLabel(fExternalScriptPanel);
        label_187->setObjectName(QString::fromUtf8("label_187"));

        gridLayout_28->addWidget(label_187, 5, 1, 1, 3);

        pbExternalScriptHelp = new QPushButton(fExternalScriptPanel);
        pbExternalScriptHelp->setObjectName(QString::fromUtf8("pbExternalScriptHelp"));
        sizePolicy6.setHeightForWidth(pbExternalScriptHelp->sizePolicy().hasHeightForWidth());
        pbExternalScriptHelp->setSizePolicy(sizePolicy6);
        pbExternalScriptHelp->setMaximumSize(QSize(30, 16777215));

        gridLayout_28->addWidget(pbExternalScriptHelp, 1, 4, 1, 1);

        label_182 = new QLabel(fExternalScriptPanel);
        label_182->setObjectName(QString::fromUtf8("label_182"));

        gridLayout_28->addWidget(label_182, 3, 2, 1, 1);

        label_181 = new QLabel(fExternalScriptPanel);
        label_181->setObjectName(QString::fromUtf8("label_181"));

        gridLayout_28->addWidget(label_181, 3, 1, 1, 1);

        pbOpenScriptExample = new QPushButton(fExternalScriptPanel);
        pbOpenScriptExample->setObjectName(QString::fromUtf8("pbOpenScriptExample"));
        QSizePolicy sizePolicy14(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy14.setHorizontalStretch(0);
        sizePolicy14.setVerticalStretch(0);
        sizePolicy14.setHeightForWidth(pbOpenScriptExample->sizePolicy().hasHeightForWidth());
        pbOpenScriptExample->setSizePolicy(sizePolicy14);
        pbOpenScriptExample->setMinimumSize(QSize(0, 30));
        pbOpenScriptExample->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	padding: 5px;\n"
"}"));

        gridLayout_28->addWidget(pbOpenScriptExample, 0, 0, 1, 1);


        verticalLayout_31->addWidget(fExternalScriptPanel);

        fCirclePanel = new QFrame(fVisionObjectFrame);
        fCirclePanel->setObjectName(QString::fromUtf8("fCirclePanel"));
        fCirclePanel->setMinimumSize(QSize(0, 0));
        fCirclePanel->setMaximumSize(QSize(16777215, 16777215));
        fCirclePanel->setStyleSheet(QString::fromUtf8("QFrame#fCirclePanel\n"
"{\n"
"	border: 1px solid rgb(10, 198, 255);\n"
"}"));
        fCirclePanel->setFrameShape(QFrame::StyledPanel);
        fCirclePanel->setFrameShadow(QFrame::Raised);
        gridLayout_29 = new QGridLayout(fCirclePanel);
        gridLayout_29->setSpacing(6);
        gridLayout_29->setContentsMargins(11, 11, 11, 11);
        gridLayout_29->setObjectName(QString::fromUtf8("gridLayout_29"));
        leCenterThreshold = new QLineEdit(fCirclePanel);
        leCenterThreshold->setObjectName(QString::fromUtf8("leCenterThreshold"));
        sizePolicy10.setHeightForWidth(leCenterThreshold->sizePolicy().hasHeightForWidth());
        leCenterThreshold->setSizePolicy(sizePolicy10);
        leCenterThreshold->setMinimumSize(QSize(0, 0));
        leCenterThreshold->setMaximumSize(QSize(50, 16777215));

        gridLayout_29->addWidget(leCenterThreshold, 3, 1, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_29->addItem(horizontalSpacer_8, 2, 4, 1, 1);

        leEdgeThreshold = new QLineEdit(fCirclePanel);
        leEdgeThreshold->setObjectName(QString::fromUtf8("leEdgeThreshold"));
        sizePolicy10.setHeightForWidth(leEdgeThreshold->sizePolicy().hasHeightForWidth());
        leEdgeThreshold->setSizePolicy(sizePolicy10);
        leEdgeThreshold->setMinimumSize(QSize(0, 0));
        leEdgeThreshold->setMaximumSize(QSize(50, 16777215));

        gridLayout_29->addWidget(leEdgeThreshold, 2, 1, 1, 2);

        label_193 = new QLabel(fCirclePanel);
        label_193->setObjectName(QString::fromUtf8("label_193"));

        gridLayout_29->addWidget(label_193, 4, 3, 1, 1);

        label_190 = new QLabel(fCirclePanel);
        label_190->setObjectName(QString::fromUtf8("label_190"));

        gridLayout_29->addWidget(label_190, 3, 0, 1, 1);

        label_192 = new QLabel(fCirclePanel);
        label_192->setObjectName(QString::fromUtf8("label_192"));

        gridLayout_29->addWidget(label_192, 4, 0, 1, 1);

        leMaxRadius = new QLineEdit(fCirclePanel);
        leMaxRadius->setObjectName(QString::fromUtf8("leMaxRadius"));
        sizePolicy10.setHeightForWidth(leMaxRadius->sizePolicy().hasHeightForWidth());
        leMaxRadius->setSizePolicy(sizePolicy10);
        leMaxRadius->setMinimumSize(QSize(0, 0));
        leMaxRadius->setMaximumSize(QSize(50, 16777215));

        gridLayout_29->addWidget(leMaxRadius, 5, 1, 1, 1);

        label_194 = new QLabel(fCirclePanel);
        label_194->setObjectName(QString::fromUtf8("label_194"));

        gridLayout_29->addWidget(label_194, 5, 0, 1, 1);

        label_195 = new QLabel(fCirclePanel);
        label_195->setObjectName(QString::fromUtf8("label_195"));

        gridLayout_29->addWidget(label_195, 5, 3, 1, 1);

        leMinRadius = new QLineEdit(fCirclePanel);
        leMinRadius->setObjectName(QString::fromUtf8("leMinRadius"));
        sizePolicy10.setHeightForWidth(leMinRadius->sizePolicy().hasHeightForWidth());
        leMinRadius->setSizePolicy(sizePolicy10);
        leMinRadius->setMinimumSize(QSize(0, 0));
        leMinRadius->setMaximumSize(QSize(50, 16777215));

        gridLayout_29->addWidget(leMinRadius, 4, 1, 1, 1);

        label_188 = new QLabel(fCirclePanel);
        label_188->setObjectName(QString::fromUtf8("label_188"));

        gridLayout_29->addWidget(label_188, 2, 0, 1, 1);

        label_198 = new QLabel(fCirclePanel);
        label_198->setObjectName(QString::fromUtf8("label_198"));

        gridLayout_29->addWidget(label_198, 2, 3, 1, 1);

        label_199 = new QLabel(fCirclePanel);
        label_199->setObjectName(QString::fromUtf8("label_199"));

        gridLayout_29->addWidget(label_199, 3, 3, 1, 1);


        verticalLayout_31->addWidget(fCirclePanel);


        verticalLayout_40->addWidget(fVisionObjectFrame);


        verticalLayout_32->addWidget(gbCameraObject);

        gbCameraVariable = new QGroupBox(fObjectDetectingTool);
        gbCameraVariable->setObjectName(QString::fromUtf8("gbCameraVariable"));
        gbCameraVariable->setFont(font6);
        gbCameraVariable->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	padding:5px;\n"
"}"));
        gbCameraVariable->setFlat(false);
        gbCameraVariable->setCheckable(true);
        verticalLayout_34 = new QVBoxLayout(gbCameraVariable);
        verticalLayout_34->setSpacing(6);
        verticalLayout_34->setContentsMargins(11, 11, 11, 11);
        verticalLayout_34->setObjectName(QString::fromUtf8("verticalLayout_34"));
        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalSpacer_50 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_50);

        label_34 = new QLabel(gbCameraVariable);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_31->addWidget(label_34);

        cbAutoUpdateObjectsDisplay = new QComboBox(gbCameraVariable);
        cbAutoUpdateObjectsDisplay->addItem(QString());
        cbAutoUpdateObjectsDisplay->addItem(QString());
        cbAutoUpdateObjectsDisplay->setObjectName(QString::fromUtf8("cbAutoUpdateObjectsDisplay"));

        horizontalLayout_31->addWidget(cbAutoUpdateObjectsDisplay);

        pbUpdateObjectToView = new QPushButton(gbCameraVariable);
        pbUpdateObjectToView->setObjectName(QString::fromUtf8("pbUpdateObjectToView"));
        QSizePolicy sizePolicy15(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy15.setHorizontalStretch(0);
        sizePolicy15.setVerticalStretch(0);
        sizePolicy15.setHeightForWidth(pbUpdateObjectToView->sizePolicy().hasHeightForWidth());
        pbUpdateObjectToView->setSizePolicy(sizePolicy15);
        pbUpdateObjectToView->setMinimumSize(QSize(0, 0));
        pbUpdateObjectToView->setMaximumSize(QSize(16777215, 16777215));
        pbUpdateObjectToView->setStyleSheet(QString::fromUtf8(""));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/icon/icons8_replay_48px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbUpdateObjectToView->setIcon(icon26);

        horizontalLayout_31->addWidget(pbUpdateObjectToView);

        pbClearDetectObjects = new QPushButton(gbCameraVariable);
        pbClearDetectObjects->setObjectName(QString::fromUtf8("pbClearDetectObjects"));
        sizePolicy.setHeightForWidth(pbClearDetectObjects->sizePolicy().hasHeightForWidth());
        pbClearDetectObjects->setSizePolicy(sizePolicy);
        pbClearDetectObjects->setMinimumSize(QSize(0, 0));
        pbClearDetectObjects->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/icon/Eraser_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbClearDetectObjects->setIcon(icon27);

        horizontalLayout_31->addWidget(pbClearDetectObjects);


        verticalLayout_34->addLayout(horizontalLayout_31);

        tvObjectTable = new QTableView(gbCameraVariable);
        tvObjectTable->setObjectName(QString::fromUtf8("tvObjectTable"));
        tvObjectTable->setMinimumSize(QSize(0, 400));

        verticalLayout_34->addWidget(tvObjectTable);

        fVisionVariableFrame = new QFrame(gbCameraVariable);
        fVisionVariableFrame->setObjectName(QString::fromUtf8("fVisionVariableFrame"));
        fVisionVariableFrame->setMinimumSize(QSize(0, 0));
        fVisionVariableFrame->setFrameShape(QFrame::StyledPanel);
        fVisionVariableFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_35 = new QVBoxLayout(fVisionVariableFrame);
        verticalLayout_35->setSpacing(6);
        verticalLayout_35->setContentsMargins(11, 11, 11, 11);
        verticalLayout_35->setObjectName(QString::fromUtf8("verticalLayout_35"));
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));

        verticalLayout_35->addLayout(horizontalLayout_25);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setSpacing(6);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        leLimitMinX = new QLineEdit(fVisionVariableFrame);
        leLimitMinX->setObjectName(QString::fromUtf8("leLimitMinX"));

        gridLayout_15->addWidget(leLimitMinX, 1, 2, 1, 1);

        label_162 = new QLabel(fVisionVariableFrame);
        label_162->setObjectName(QString::fromUtf8("label_162"));

        gridLayout_15->addWidget(label_162, 2, 3, 1, 1);

        label_155 = new QLabel(fVisionVariableFrame);
        label_155->setObjectName(QString::fromUtf8("label_155"));

        gridLayout_15->addWidget(label_155, 1, 5, 1, 1);

        leLimitMaxX = new QLineEdit(fVisionVariableFrame);
        leLimitMaxX->setObjectName(QString::fromUtf8("leLimitMaxX"));

        gridLayout_15->addWidget(leLimitMaxX, 1, 6, 1, 1);

        label_170 = new QLabel(fVisionVariableFrame);
        label_170->setObjectName(QString::fromUtf8("label_170"));

        gridLayout_15->addWidget(label_170, 1, 7, 1, 1);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_25, 1, 4, 1, 1);

        leLimitMaxY = new QLineEdit(fVisionVariableFrame);
        leLimitMaxY->setObjectName(QString::fromUtf8("leLimitMaxY"));

        gridLayout_15->addWidget(leLimitMaxY, 2, 6, 1, 1);

        label_171 = new QLabel(fVisionVariableFrame);
        label_171->setObjectName(QString::fromUtf8("label_171"));

        gridLayout_15->addWidget(label_171, 2, 7, 1, 1);

        label_56 = new QLabel(fVisionVariableFrame);
        label_56->setObjectName(QString::fromUtf8("label_56"));

        gridLayout_15->addWidget(label_56, 1, 1, 1, 1);

        label_156 = new QLabel(fVisionVariableFrame);
        label_156->setObjectName(QString::fromUtf8("label_156"));

        gridLayout_15->addWidget(label_156, 2, 1, 1, 1);

        leLimitMinY = new QLineEdit(fVisionVariableFrame);
        leLimitMinY->setObjectName(QString::fromUtf8("leLimitMinY"));

        gridLayout_15->addWidget(leLimitMinY, 2, 2, 1, 1);

        label_159 = new QLabel(fVisionVariableFrame);
        label_159->setObjectName(QString::fromUtf8("label_159"));

        gridLayout_15->addWidget(label_159, 1, 3, 1, 1);

        label_157 = new QLabel(fVisionVariableFrame);
        label_157->setObjectName(QString::fromUtf8("label_157"));

        gridLayout_15->addWidget(label_157, 2, 5, 1, 1);

        label_196 = new QLabel(fVisionVariableFrame);
        label_196->setObjectName(QString::fromUtf8("label_196"));

        gridLayout_15->addWidget(label_196, 0, 0, 1, 1);

        label_44 = new QLabel(fVisionVariableFrame);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        gridLayout_15->addWidget(label_44, 1, 0, 1, 1);

        leDetectingObjectListName = new QLineEdit(fVisionVariableFrame);
        leDetectingObjectListName->setObjectName(QString::fromUtf8("leDetectingObjectListName"));

        gridLayout_15->addWidget(leDetectingObjectListName, 0, 2, 1, 1);


        verticalLayout_35->addLayout(gridLayout_15);


        verticalLayout_34->addWidget(fVisionVariableFrame);


        verticalLayout_32->addWidget(gbCameraVariable);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_32->addItem(verticalSpacer_11);

        splitter->addWidget(fObjectDetectingTool);

        verticalLayout_17->addWidget(splitter);

        saObjectDetecting->setWidget(wObjectDetecting);

        verticalLayout_25->addWidget(saObjectDetecting);

        twModule->addTab(tObjectDetecting, QString());
        tPointTool = new QWidget();
        tPointTool->setObjectName(QString::fromUtf8("tPointTool"));
        verticalLayout_14 = new QVBoxLayout(tPointTool);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        saPointTool = new QScrollArea(tPointTool);
        saPointTool->setObjectName(QString::fromUtf8("saPointTool"));
        saPointTool->setLineWidth(1);
        saPointTool->setWidgetResizable(true);
        wPointTool = new QWidget();
        wPointTool->setObjectName(QString::fromUtf8("wPointTool"));
        wPointTool->setGeometry(QRect(0, -371, 643, 1900));
        wPointTool->setMinimumSize(QSize(0, 1900));
        wPointTool->setStyleSheet(QString::fromUtf8("QWidget#wPointTool\n"
"{	\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
"QFrame\n"
"{\n"
"	border: none;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: rgb(51, 51, 55);\n"
"}\n"
"\n"
"QGroupBox::title\n"
"{\n"
"	\n"
"	color: rgb(208, 208, 209);\n"
"}\n"
"\n"
""));
        verticalLayout_9 = new QVBoxLayout(wPointTool);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        fPointTool = new QFrame(wPointTool);
        fPointTool->setObjectName(QString::fromUtf8("fPointTool"));
        sizePolicy.setHeightForWidth(fPointTool->sizePolicy().hasHeightForWidth());
        fPointTool->setSizePolicy(sizePolicy);
        fPointTool->setMinimumSize(QSize(0, 0));
        fPointTool->setFrameShape(QFrame::StyledPanel);
        fPointTool->setFrameShadow(QFrame::Raised);
        verticalLayout_59 = new QVBoxLayout(fPointTool);
        verticalLayout_59->setSpacing(6);
        verticalLayout_59->setContentsMargins(11, 11, 11, 11);
        verticalLayout_59->setObjectName(QString::fromUtf8("verticalLayout_59"));
        verticalLayout_59->setContentsMargins(0, 0, 0, 0);
        gbTrackingManager = new QGroupBox(fPointTool);
        gbTrackingManager->setObjectName(QString::fromUtf8("gbTrackingManager"));
        gbTrackingManager->setEnabled(true);
        gbTrackingManager->setFont(font6);
        gbTrackingManager->setStyleSheet(QString::fromUtf8(""));
        gbTrackingManager->setCheckable(true);
        verticalLayout_60 = new QVBoxLayout(gbTrackingManager);
        verticalLayout_60->setSpacing(7);
        verticalLayout_60->setContentsMargins(11, 11, 11, 11);
        verticalLayout_60->setObjectName(QString::fromUtf8("verticalLayout_60"));
        verticalLayout_60->setContentsMargins(-1, 10, -1, 11);
        fTrackingManager = new QFrame(gbTrackingManager);
        fTrackingManager->setObjectName(QString::fromUtf8("fTrackingManager"));
        fTrackingManager->setMinimumSize(QSize(0, 0));
        fTrackingManager->setFrameShape(QFrame::StyledPanel);
        fTrackingManager->setFrameShadow(QFrame::Raised);
        gridLayout_16 = new QGridLayout(fTrackingManager);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        cbSelectedTracking = new QComboBox(fTrackingManager);
        cbSelectedTracking->addItem(QString());
        cbSelectedTracking->addItem(QString());
        cbSelectedTracking->addItem(QString());
        cbSelectedTracking->addItem(QString());
        cbSelectedTracking->setObjectName(QString::fromUtf8("cbSelectedTracking"));
        sizePolicy10.setHeightForWidth(cbSelectedTracking->sizePolicy().hasHeightForWidth());
        cbSelectedTracking->setSizePolicy(sizePolicy10);

        gridLayout_16->addWidget(cbSelectedTracking, 0, 2, 1, 1);

        label_144 = new QLabel(fTrackingManager);
        label_144->setObjectName(QString::fromUtf8("label_144"));

        gridLayout_16->addWidget(label_144, 1, 0, 1, 1);

        cbReverseEncoderValue = new QCheckBox(fTrackingManager);
        cbReverseEncoderValue->setObjectName(QString::fromUtf8("cbReverseEncoderValue"));

        gridLayout_16->addWidget(cbReverseEncoderValue, 2, 3, 1, 1);

        pbSaveTrackingManager = new QPushButton(fTrackingManager);
        pbSaveTrackingManager->setObjectName(QString::fromUtf8("pbSaveTrackingManager"));
        sizePolicy10.setHeightForWidth(pbSaveTrackingManager->sizePolicy().hasHeightForWidth());
        pbSaveTrackingManager->setSizePolicy(sizePolicy10);
        pbSaveTrackingManager->setMinimumSize(QSize(0, 20));

        gridLayout_16->addWidget(pbSaveTrackingManager, 4, 0, 1, 1);

        label_164 = new QLabel(fTrackingManager);
        label_164->setObjectName(QString::fromUtf8("label_164"));

        gridLayout_16->addWidget(label_164, 2, 0, 1, 1);

        leSelectedTrackingObjectList = new QLineEdit(fTrackingManager);
        leSelectedTrackingObjectList->setObjectName(QString::fromUtf8("leSelectedTrackingObjectList"));

        gridLayout_16->addWidget(leSelectedTrackingObjectList, 1, 2, 1, 1);

        leVelocityVector = new QLineEdit(fTrackingManager);
        leVelocityVector->setObjectName(QString::fromUtf8("leVelocityVector"));

        gridLayout_16->addWidget(leVelocityVector, 3, 2, 1, 1);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_24, 1, 4, 1, 1);

        cbTrackingEncoderSource = new QComboBox(fTrackingManager);
        cbTrackingEncoderSource->addItem(QString());
        cbTrackingEncoderSource->addItem(QString());
        cbTrackingEncoderSource->addItem(QString());
        cbTrackingEncoderSource->setObjectName(QString::fromUtf8("cbTrackingEncoderSource"));
        sizePolicy.setHeightForWidth(cbTrackingEncoderSource->sizePolicy().hasHeightForWidth());
        cbTrackingEncoderSource->setSizePolicy(sizePolicy);
        cbTrackingEncoderSource->setMinimumSize(QSize(0, 0));

        gridLayout_16->addWidget(cbTrackingEncoderSource, 2, 2, 1, 1);

        label_160 = new QLabel(fTrackingManager);
        label_160->setObjectName(QString::fromUtf8("label_160"));

        gridLayout_16->addWidget(label_160, 0, 0, 1, 1);

        label_168 = new QLabel(fTrackingManager);
        label_168->setObjectName(QString::fromUtf8("label_168"));

        gridLayout_16->addWidget(label_168, 3, 0, 1, 1);


        verticalLayout_60->addWidget(fTrackingManager);

        frame = new QFrame(gbTrackingManager);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        pbMoveTestTrackingPoint = new QPushButton(frame);
        pbMoveTestTrackingPoint->setObjectName(QString::fromUtf8("pbMoveTestTrackingPoint"));
        sizePolicy10.setHeightForWidth(pbMoveTestTrackingPoint->sizePolicy().hasHeightForWidth());
        pbMoveTestTrackingPoint->setSizePolicy(sizePolicy10);
        pbMoveTestTrackingPoint->setMinimumSize(QSize(0, 20));

        gridLayout->addWidget(pbMoveTestTrackingPoint, 2, 0, 1, 1);

        leTestTrackingPointX = new QLineEdit(frame);
        leTestTrackingPointX->setObjectName(QString::fromUtf8("leTestTrackingPointX"));

        gridLayout->addWidget(leTestTrackingPointX, 1, 1, 1, 1);

        label_231 = new QLabel(frame);
        label_231->setObjectName(QString::fromUtf8("label_231"));
        label_231->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_231, 0, 1, 1, 1);

        leTestTrackingPointZ = new QLineEdit(frame);
        leTestTrackingPointZ->setObjectName(QString::fromUtf8("leTestTrackingPointZ"));

        gridLayout->addWidget(leTestTrackingPointZ, 1, 4, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_232 = new QLabel(frame);
        label_232->setObjectName(QString::fromUtf8("label_232"));
        label_232->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_232, 2, 2, 1, 1);

        label_230 = new QLabel(frame);
        label_230->setObjectName(QString::fromUtf8("label_230"));
        label_230->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_230, 0, 2, 1, 1);

        leTestTrackingPointY = new QLineEdit(frame);
        leTestTrackingPointY->setObjectName(QString::fromUtf8("leTestTrackingPointY"));

        gridLayout->addWidget(leTestTrackingPointY, 1, 2, 1, 1);

        leMovingValue = new QLineEdit(frame);
        leMovingValue->setObjectName(QString::fromUtf8("leMovingValue"));

        gridLayout->addWidget(leMovingValue, 2, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 1, 6, 1, 1);

        tbCopyTestTrackingPoint = new QToolButton(frame);
        tbCopyTestTrackingPoint->setObjectName(QString::fromUtf8("tbCopyTestTrackingPoint"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/icon/Copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbCopyTestTrackingPoint->setIcon(icon28);
        tbCopyTestTrackingPoint->setIconSize(QSize(24, 24));

        gridLayout->addWidget(tbCopyTestTrackingPoint, 1, 5, 1, 1);

        label_236 = new QLabel(frame);
        label_236->setObjectName(QString::fromUtf8("label_236"));
        label_236->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_236, 0, 4, 1, 1);


        verticalLayout_60->addWidget(frame);


        verticalLayout_59->addWidget(gbTrackingManager);

        gbCameraCalibration_3 = new QGroupBox(fPointTool);
        gbCameraCalibration_3->setObjectName(QString::fromUtf8("gbCameraCalibration_3"));
        gbCameraCalibration_3->setFont(font6);
        gbCameraCalibration_3->setCheckable(true);
        gbCameraCalibration_3->setChecked(true);
        verticalLayout_63 = new QVBoxLayout(gbCameraCalibration_3);
        verticalLayout_63->setSpacing(6);
        verticalLayout_63->setContentsMargins(11, 11, 11, 11);
        verticalLayout_63->setObjectName(QString::fromUtf8("verticalLayout_63"));
        frame_19 = new QFrame(gbCameraCalibration_3);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setMinimumSize(QSize(0, 0));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        gridLayout_44 = new QGridLayout(frame_19);
        gridLayout_44->setSpacing(6);
        gridLayout_44->setContentsMargins(11, 11, 11, 11);
        gridLayout_44->setObjectName(QString::fromUtf8("gridLayout_44"));
        pbAddVector = new QPushButton(frame_19);
        pbAddVector->setObjectName(QString::fromUtf8("pbAddVector"));
        sizePolicy12.setHeightForWidth(pbAddVector->sizePolicy().hasHeightForWidth());
        pbAddVector->setSizePolicy(sizePolicy12);
        pbAddVector->setMinimumSize(QSize(80, 20));

        gridLayout_44->addWidget(pbAddVector, 8, 7, 1, 1);

        label_197 = new QLabel(frame_19);
        label_197->setObjectName(QString::fromUtf8("label_197"));
        label_197->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_197, 5, 2, 1, 1);

        leVectorZ = new QLineEdit(frame_19);
        leVectorZ->setObjectName(QString::fromUtf8("leVectorZ"));

        gridLayout_44->addWidget(leVectorZ, 8, 6, 1, 1);

        lePointAtT1Z = new QLineEdit(frame_19);
        lePointAtT1Z->setObjectName(QString::fromUtf8("lePointAtT1Z"));

        gridLayout_44->addWidget(lePointAtT1Z, 2, 6, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_44->addItem(horizontalSpacer_13, 2, 7, 1, 1);

        label_206 = new QLabel(frame_19);
        label_206->setObjectName(QString::fromUtf8("label_206"));
        label_206->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_206, 1, 5, 1, 1);

        label_229 = new QLabel(frame_19);
        label_229->setObjectName(QString::fromUtf8("label_229"));
        label_229->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_229, 7, 2, 1, 1);

        pbAnglePoint1 = new QPushButton(frame_19);
        pbAnglePoint1->setObjectName(QString::fromUtf8("pbAnglePoint1"));
        QSizePolicy sizePolicy16(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy16.setHorizontalStretch(0);
        sizePolicy16.setVerticalStretch(0);
        sizePolicy16.setHeightForWidth(pbAnglePoint1->sizePolicy().hasHeightForWidth());
        pbAnglePoint1->setSizePolicy(sizePolicy16);
        pbAnglePoint1->setMinimumSize(QSize(0, 20));
        pbAnglePoint1->setFlat(true);

        gridLayout_44->addWidget(pbAnglePoint1, 2, 2, 1, 1);

        pbCalVector = new QPushButton(frame_19);
        pbCalVector->setObjectName(QString::fromUtf8("pbCalVector"));
        sizePolicy6.setHeightForWidth(pbCalVector->sizePolicy().hasHeightForWidth());
        pbCalVector->setSizePolicy(sizePolicy6);
        pbCalVector->setMinimumSize(QSize(80, 20));

        gridLayout_44->addWidget(pbCalVector, 6, 2, 1, 1);

        leVectorY = new QLineEdit(frame_19);
        leVectorY->setObjectName(QString::fromUtf8("leVectorY"));

        gridLayout_44->addWidget(leVectorY, 8, 5, 1, 1);

        lePointAtT1Y = new QLineEdit(frame_19);
        lePointAtT1Y->setObjectName(QString::fromUtf8("lePointAtT1Y"));

        gridLayout_44->addWidget(lePointAtT1Y, 2, 5, 1, 1);

        label_226 = new QLabel(frame_19);
        label_226->setObjectName(QString::fromUtf8("label_226"));
        label_226->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_226, 7, 3, 1, 1);

        label_228 = new QLabel(frame_19);
        label_228->setObjectName(QString::fromUtf8("label_228"));
        label_228->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_228, 7, 6, 1, 1);

        lePointAtT2Z = new QLineEdit(frame_19);
        lePointAtT2Z->setObjectName(QString::fromUtf8("lePointAtT2Z"));

        gridLayout_44->addWidget(lePointAtT2Z, 4, 6, 1, 1);

        label_208 = new QLabel(frame_19);
        label_208->setObjectName(QString::fromUtf8("label_208"));
        label_208->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_208, 1, 6, 1, 1);

        leVectorName = new QLineEdit(frame_19);
        leVectorName->setObjectName(QString::fromUtf8("leVectorName"));

        gridLayout_44->addWidget(leVectorName, 8, 2, 1, 1);

        lePointAtT2X = new QLineEdit(frame_19);
        lePointAtT2X->setObjectName(QString::fromUtf8("lePointAtT2X"));

        gridLayout_44->addWidget(lePointAtT2X, 4, 3, 1, 1);

        lePointAtT2Y = new QLineEdit(frame_19);
        lePointAtT2Y->setObjectName(QString::fromUtf8("lePointAtT2Y"));

        gridLayout_44->addWidget(lePointAtT2Y, 4, 5, 1, 1);

        label_227 = new QLabel(frame_19);
        label_227->setObjectName(QString::fromUtf8("label_227"));
        label_227->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_227, 7, 5, 1, 1);

        pbAnglePoint2 = new QPushButton(frame_19);
        pbAnglePoint2->setObjectName(QString::fromUtf8("pbAnglePoint2"));
        pbAnglePoint2->setMinimumSize(QSize(0, 20));
        pbAnglePoint2->setFlat(true);

        gridLayout_44->addWidget(pbAnglePoint2, 4, 2, 1, 1);

        leVectorValue = new QLineEdit(frame_19);
        leVectorValue->setObjectName(QString::fromUtf8("leVectorValue"));

        gridLayout_44->addWidget(leVectorValue, 5, 3, 1, 1);

        lwVectorList = new QListWidget(frame_19);
        lwVectorList->setObjectName(QString::fromUtf8("lwVectorList"));
        QSizePolicy sizePolicy17(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy17.setHorizontalStretch(0);
        sizePolicy17.setVerticalStretch(0);
        sizePolicy17.setHeightForWidth(lwVectorList->sizePolicy().hasHeightForWidth());
        lwVectorList->setSizePolicy(sizePolicy17);
        lwVectorList->setMinimumSize(QSize(0, 70));
        lwVectorList->setMaximumSize(QSize(16777215, 100));
        lwVectorList->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);\n"
"color: rgb(241, 241, 241);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_44->addWidget(lwVectorList, 9, 6, 1, 2);

        label_189 = new QLabel(frame_19);
        label_189->setObjectName(QString::fromUtf8("label_189"));
        label_189->setAlignment(Qt::AlignCenter);

        gridLayout_44->addWidget(label_189, 1, 3, 1, 1);

        lePointAtT1X = new QLineEdit(frame_19);
        lePointAtT1X->setObjectName(QString::fromUtf8("lePointAtT1X"));

        gridLayout_44->addWidget(lePointAtT1X, 2, 3, 1, 1);

        leVectorX = new QLineEdit(frame_19);
        leVectorX->setObjectName(QString::fromUtf8("leVectorX"));

        gridLayout_44->addWidget(leVectorX, 8, 3, 1, 1);


        verticalLayout_63->addWidget(frame_19);


        verticalLayout_59->addWidget(gbCameraCalibration_3);

        gbCameraCalibration_2 = new QGroupBox(fPointTool);
        gbCameraCalibration_2->setObjectName(QString::fromUtf8("gbCameraCalibration_2"));
        gbCameraCalibration_2->setFont(font6);
        gbCameraCalibration_2->setCheckable(true);
        gbCameraCalibration_2->setChecked(true);
        verticalLayout_62 = new QVBoxLayout(gbCameraCalibration_2);
        verticalLayout_62->setSpacing(6);
        verticalLayout_62->setContentsMargins(11, 11, 11, 11);
        verticalLayout_62->setObjectName(QString::fromUtf8("verticalLayout_62"));
        frame_18 = new QFrame(gbCameraCalibration_2);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setMinimumSize(QSize(0, 0));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        gridLayout_41 = new QGridLayout(frame_18);
        gridLayout_41->setSpacing(6);
        gridLayout_41->setContentsMargins(11, 11, 11, 11);
        gridLayout_41->setObjectName(QString::fromUtf8("gridLayout_41"));
        gridLayout_41->setVerticalSpacing(4);
        label_205 = new QLabel(frame_18);
        label_205->setObjectName(QString::fromUtf8("label_205"));

        gridLayout_41->addWidget(label_205, 7, 3, 1, 1);

        leDestinationPoint2Y = new QLineEdit(frame_18);
        leDestinationPoint2Y->setObjectName(QString::fromUtf8("leDestinationPoint2Y"));

        gridLayout_41->addWidget(leDestinationPoint2Y, 7, 6, 1, 1);

        leSourcePoint1X = new QLineEdit(frame_18);
        leSourcePoint1X->setObjectName(QString::fromUtf8("leSourcePoint1X"));

        gridLayout_41->addWidget(leSourcePoint1X, 2, 4, 1, 1);

        label_201 = new QLabel(frame_18);
        label_201->setObjectName(QString::fromUtf8("label_201"));

        gridLayout_41->addWidget(label_201, 3, 3, 1, 1);

        leDestinationPoint1X = new QLineEdit(frame_18);
        leDestinationPoint1X->setObjectName(QString::fromUtf8("leDestinationPoint1X"));

        gridLayout_41->addWidget(leDestinationPoint1X, 6, 4, 1, 1);

        leSourcePoint2X = new QLineEdit(frame_18);
        leSourcePoint2X->setObjectName(QString::fromUtf8("leSourcePoint2X"));

        gridLayout_41->addWidget(leSourcePoint2X, 3, 4, 1, 1);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_41->addItem(horizontalSpacer_41, 7, 7, 1, 1);

        leMatrixName = new QLineEdit(frame_18);
        leMatrixName->setObjectName(QString::fromUtf8("leMatrixName"));

        gridLayout_41->addWidget(leMatrixName, 2, 1, 1, 1);

        leSourcePoint1Y = new QLineEdit(frame_18);
        leSourcePoint1Y->setObjectName(QString::fromUtf8("leSourcePoint1Y"));

        gridLayout_41->addWidget(leSourcePoint1Y, 2, 6, 1, 1);

        label_203 = new QLabel(frame_18);
        label_203->setObjectName(QString::fromUtf8("label_203"));

        gridLayout_41->addWidget(label_203, 2, 3, 1, 1);

        label_165 = new QLabel(frame_18);
        label_165->setObjectName(QString::fromUtf8("label_165"));

        gridLayout_41->addWidget(label_165, 2, 0, 1, 1);

        label_166 = new QLabel(frame_18);
        label_166->setObjectName(QString::fromUtf8("label_166"));
        QFont font10;
        font10.setBold(true);
        label_166->setFont(font10);

        gridLayout_41->addWidget(label_166, 1, 3, 1, 1);

        leSourcePoint2Y = new QLineEdit(frame_18);
        leSourcePoint2Y->setObjectName(QString::fromUtf8("leSourcePoint2Y"));

        gridLayout_41->addWidget(leSourcePoint2Y, 3, 6, 1, 1);

        pbCalculateMappingMatrixTool = new QPushButton(frame_18);
        pbCalculateMappingMatrixTool->setObjectName(QString::fromUtf8("pbCalculateMappingMatrixTool"));
        pbCalculateMappingMatrixTool->setMinimumSize(QSize(0, 20));

        gridLayout_41->addWidget(pbCalculateMappingMatrixTool, 3, 1, 1, 1);

        label_202 = new QLabel(frame_18);
        label_202->setObjectName(QString::fromUtf8("label_202"));
        label_202->setAlignment(Qt::AlignCenter);

        gridLayout_41->addWidget(label_202, 1, 6, 1, 1);

        leDestinationPoint2X = new QLineEdit(frame_18);
        leDestinationPoint2X->setObjectName(QString::fromUtf8("leDestinationPoint2X"));

        gridLayout_41->addWidget(leDestinationPoint2X, 7, 4, 1, 1);

        label_204 = new QLabel(frame_18);
        label_204->setObjectName(QString::fromUtf8("label_204"));

        gridLayout_41->addWidget(label_204, 6, 3, 1, 1);

        label_177 = new QLabel(frame_18);
        label_177->setObjectName(QString::fromUtf8("label_177"));
        label_177->setAlignment(Qt::AlignCenter);

        gridLayout_41->addWidget(label_177, 1, 4, 1, 1);

        leDestinationPoint1Y = new QLineEdit(frame_18);
        leDestinationPoint1Y->setObjectName(QString::fromUtf8("leDestinationPoint1Y"));

        gridLayout_41->addWidget(leDestinationPoint1Y, 6, 6, 1, 1);

        pbAddMappingMatrix = new QPushButton(frame_18);
        pbAddMappingMatrix->setObjectName(QString::fromUtf8("pbAddMappingMatrix"));
        pbAddMappingMatrix->setMinimumSize(QSize(0, 20));

        gridLayout_41->addWidget(pbAddMappingMatrix, 8, 6, 1, 1);

        label_200 = new QLabel(frame_18);
        label_200->setObjectName(QString::fromUtf8("label_200"));
        label_200->setFont(font10);

        gridLayout_41->addWidget(label_200, 5, 3, 1, 1);

        lwMappingMatrixList = new QListWidget(frame_18);
        lwMappingMatrixList->setObjectName(QString::fromUtf8("lwMappingMatrixList"));
        sizePolicy17.setHeightForWidth(lwMappingMatrixList->sizePolicy().hasHeightForWidth());
        lwMappingMatrixList->setSizePolicy(sizePolicy17);
        lwMappingMatrixList->setMinimumSize(QSize(0, 70));
        lwMappingMatrixList->setMaximumSize(QSize(16777215, 100));
        lwMappingMatrixList->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);\n"
"color: rgb(241, 241, 241);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_41->addWidget(lwMappingMatrixList, 9, 4, 1, 3);

        lbMatrixDisplay = new QLabel(frame_18);
        lbMatrixDisplay->setObjectName(QString::fromUtf8("lbMatrixDisplay"));

        gridLayout_41->addWidget(lbMatrixDisplay, 5, 1, 3, 1);


        verticalLayout_62->addWidget(frame_18);


        verticalLayout_59->addWidget(gbCameraCalibration_2);

        gbCameraObject_2 = new QGroupBox(fPointTool);
        gbCameraObject_2->setObjectName(QString::fromUtf8("gbCameraObject_2"));
        gbCameraObject_2->setFont(font6);
        gbCameraObject_2->setCheckable(true);
        verticalLayout_64 = new QVBoxLayout(gbCameraObject_2);
        verticalLayout_64->setSpacing(6);
        verticalLayout_64->setContentsMargins(11, 11, 11, 11);
        verticalLayout_64->setObjectName(QString::fromUtf8("verticalLayout_64"));
        verticalLayout_64->setContentsMargins(-1, 10, -1, -1);
        frame_14 = new QFrame(gbCameraObject_2);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setMinimumSize(QSize(0, 0));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_14);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_136 = new QLabel(frame_14);
        label_136->setObjectName(QString::fromUtf8("label_136"));

        horizontalLayout_5->addWidget(label_136);

        leObjectListName = new QLineEdit(frame_14);
        leObjectListName->setObjectName(QString::fromUtf8("leObjectListName"));

        horizontalLayout_5->addWidget(leObjectListName);

        label_137 = new QLabel(frame_14);
        label_137->setObjectName(QString::fromUtf8("label_137"));

        horizontalLayout_5->addWidget(label_137);

        leObjectX = new QLineEdit(frame_14);
        leObjectX->setObjectName(QString::fromUtf8("leObjectX"));

        horizontalLayout_5->addWidget(leObjectX);

        label_138 = new QLabel(frame_14);
        label_138->setObjectName(QString::fromUtf8("label_138"));

        horizontalLayout_5->addWidget(label_138);

        leObjectY = new QLineEdit(frame_14);
        leObjectY->setObjectName(QString::fromUtf8("leObjectY"));

        horizontalLayout_5->addWidget(leObjectY);

        label_143 = new QLabel(frame_14);
        label_143->setObjectName(QString::fromUtf8("label_143"));

        horizontalLayout_5->addWidget(label_143);

        leObjectZ = new QLineEdit(frame_14);
        leObjectZ->setObjectName(QString::fromUtf8("leObjectZ"));

        horizontalLayout_5->addWidget(leObjectZ);

        pbAddVariablePoint = new QPushButton(frame_14);
        pbAddVariablePoint->setObjectName(QString::fromUtf8("pbAddVariablePoint"));
        sizePolicy12.setHeightForWidth(pbAddVariablePoint->sizePolicy().hasHeightForWidth());
        pbAddVariablePoint->setSizePolicy(sizePolicy12);
        pbAddVariablePoint->setMinimumSize(QSize(80, 20));

        horizontalLayout_5->addWidget(pbAddVariablePoint);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_43);


        verticalLayout_64->addWidget(frame_14);


        verticalLayout_59->addWidget(gbCameraObject_2);

        gbCameraObject_3 = new QGroupBox(fPointTool);
        gbCameraObject_3->setObjectName(QString::fromUtf8("gbCameraObject_3"));
        gbCameraObject_3->setFont(font6);
        gbCameraObject_3->setCheckable(true);
        verticalLayout_65 = new QVBoxLayout(gbCameraObject_3);
        verticalLayout_65->setSpacing(6);
        verticalLayout_65->setContentsMargins(11, 11, 11, 11);
        verticalLayout_65->setObjectName(QString::fromUtf8("verticalLayout_65"));
        verticalLayout_65->setContentsMargins(-1, 10, -1, -1);
        frame_20 = new QFrame(gbCameraObject_3);
        frame_20->setObjectName(QString::fromUtf8("frame_20"));
        frame_20->setMinimumSize(QSize(0, 0));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        gridLayout_42 = new QGridLayout(frame_20);
        gridLayout_42->setSpacing(6);
        gridLayout_42->setContentsMargins(11, 11, 11, 11);
        gridLayout_42->setObjectName(QString::fromUtf8("gridLayout_42"));
        leDPoint2Y = new QLineEdit(frame_20);
        leDPoint2Y->setObjectName(QString::fromUtf8("leDPoint2Y"));

        gridLayout_42->addWidget(leDPoint2Y, 8, 5, 1, 1);

        leSPoint3Y = new QLineEdit(frame_20);
        leSPoint3Y->setObjectName(QString::fromUtf8("leSPoint3Y"));

        gridLayout_42->addWidget(leSPoint3Y, 4, 5, 1, 1);

        leDPoint1X = new QLineEdit(frame_20);
        leDPoint1X->setObjectName(QString::fromUtf8("leDPoint1X"));

        gridLayout_42->addWidget(leDPoint1X, 7, 3, 1, 1);

        label_212 = new QLabel(frame_20);
        label_212->setObjectName(QString::fromUtf8("label_212"));

        gridLayout_42->addWidget(label_212, 4, 2, 1, 1);

        pbAddPointMatrix = new QPushButton(frame_20);
        pbAddPointMatrix->setObjectName(QString::fromUtf8("pbAddPointMatrix"));
        pbAddPointMatrix->setMinimumSize(QSize(0, 20));

        gridLayout_42->addWidget(pbAddPointMatrix, 11, 5, 1, 1);

        label_217 = new QLabel(frame_20);
        label_217->setObjectName(QString::fromUtf8("label_217"));

        gridLayout_42->addWidget(label_217, 2, 2, 1, 1);

        leDPoint2X = new QLineEdit(frame_20);
        leDPoint2X->setObjectName(QString::fromUtf8("leDPoint2X"));

        gridLayout_42->addWidget(leDPoint2X, 8, 3, 1, 1);

        leDPoint4X = new QLineEdit(frame_20);
        leDPoint4X->setObjectName(QString::fromUtf8("leDPoint4X"));

        gridLayout_42->addWidget(leDPoint4X, 10, 3, 1, 1);

        label_207 = new QLabel(frame_20);
        label_207->setObjectName(QString::fromUtf8("label_207"));
        label_207->setFont(font10);

        gridLayout_42->addWidget(label_207, 6, 2, 1, 1);

        horizontalSpacer_55 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_42->addItem(horizontalSpacer_55, 1, 6, 1, 1);

        label_211 = new QLabel(frame_20);
        label_211->setObjectName(QString::fromUtf8("label_211"));

        gridLayout_42->addWidget(label_211, 1, 2, 1, 1);

        leSPoint2Y = new QLineEdit(frame_20);
        leSPoint2Y->setObjectName(QString::fromUtf8("leSPoint2Y"));

        gridLayout_42->addWidget(leSPoint2Y, 2, 5, 1, 1);

        leSPoint1X = new QLineEdit(frame_20);
        leSPoint1X->setObjectName(QString::fromUtf8("leSPoint1X"));

        gridLayout_42->addWidget(leSPoint1X, 1, 3, 1, 1);

        label_218 = new QLabel(frame_20);
        label_218->setObjectName(QString::fromUtf8("label_218"));
        label_218->setAlignment(Qt::AlignCenter);

        gridLayout_42->addWidget(label_218, 0, 3, 1, 1);

        label_210 = new QLabel(frame_20);
        label_210->setObjectName(QString::fromUtf8("label_210"));
        label_210->setAlignment(Qt::AlignCenter);

        gridLayout_42->addWidget(label_210, 0, 5, 1, 1);

        leDPoint3Y = new QLineEdit(frame_20);
        leDPoint3Y->setObjectName(QString::fromUtf8("leDPoint3Y"));

        gridLayout_42->addWidget(leDPoint3Y, 9, 5, 1, 1);

        lePointMatrixName = new QLineEdit(frame_20);
        lePointMatrixName->setObjectName(QString::fromUtf8("lePointMatrixName"));

        gridLayout_42->addWidget(lePointMatrixName, 1, 1, 1, 1);

        leSPoint1Y = new QLineEdit(frame_20);
        leSPoint1Y->setObjectName(QString::fromUtf8("leSPoint1Y"));

        gridLayout_42->addWidget(leSPoint1Y, 1, 5, 1, 1);

        lbPointMatrixDisplay = new QLabel(frame_20);
        lbPointMatrixDisplay->setObjectName(QString::fromUtf8("lbPointMatrixDisplay"));

        gridLayout_42->addWidget(lbPointMatrixDisplay, 4, 1, 3, 1);

        label_219 = new QLabel(frame_20);
        label_219->setObjectName(QString::fromUtf8("label_219"));

        gridLayout_42->addWidget(label_219, 5, 2, 1, 1);

        label_234 = new QLabel(frame_20);
        label_234->setObjectName(QString::fromUtf8("label_234"));

        gridLayout_42->addWidget(label_234, 9, 2, 1, 1);

        leDPoint1Y = new QLineEdit(frame_20);
        leDPoint1Y->setObjectName(QString::fromUtf8("leDPoint1Y"));

        gridLayout_42->addWidget(leDPoint1Y, 7, 5, 1, 1);

        label_216 = new QLabel(frame_20);
        label_216->setObjectName(QString::fromUtf8("label_216"));

        gridLayout_42->addWidget(label_216, 1, 0, 1, 1);

        label_220 = new QLabel(frame_20);
        label_220->setObjectName(QString::fromUtf8("label_220"));

        gridLayout_42->addWidget(label_220, 7, 2, 1, 1);

        label_235 = new QLabel(frame_20);
        label_235->setObjectName(QString::fromUtf8("label_235"));

        gridLayout_42->addWidget(label_235, 10, 2, 1, 1);

        label_167 = new QLabel(frame_20);
        label_167->setObjectName(QString::fromUtf8("label_167"));
        label_167->setFont(font10);

        gridLayout_42->addWidget(label_167, 0, 2, 1, 1);

        leSPoint4X = new QLineEdit(frame_20);
        leSPoint4X->setObjectName(QString::fromUtf8("leSPoint4X"));

        gridLayout_42->addWidget(leSPoint4X, 5, 3, 1, 1);

        pbCalculatePointMatrixTool = new QPushButton(frame_20);
        pbCalculatePointMatrixTool->setObjectName(QString::fromUtf8("pbCalculatePointMatrixTool"));
        pbCalculatePointMatrixTool->setMinimumSize(QSize(0, 20));

        gridLayout_42->addWidget(pbCalculatePointMatrixTool, 2, 1, 1, 1);

        leDPoint3X = new QLineEdit(frame_20);
        leDPoint3X->setObjectName(QString::fromUtf8("leDPoint3X"));

        gridLayout_42->addWidget(leDPoint3X, 9, 3, 1, 1);

        leDPoint4Y = new QLineEdit(frame_20);
        leDPoint4Y->setObjectName(QString::fromUtf8("leDPoint4Y"));

        gridLayout_42->addWidget(leDPoint4Y, 10, 5, 1, 1);

        leSPoint2X = new QLineEdit(frame_20);
        leSPoint2X->setObjectName(QString::fromUtf8("leSPoint2X"));

        gridLayout_42->addWidget(leSPoint2X, 2, 3, 1, 1);

        leSPoint4Y = new QLineEdit(frame_20);
        leSPoint4Y->setObjectName(QString::fromUtf8("leSPoint4Y"));

        gridLayout_42->addWidget(leSPoint4Y, 5, 5, 1, 1);

        label_233 = new QLabel(frame_20);
        label_233->setObjectName(QString::fromUtf8("label_233"));

        gridLayout_42->addWidget(label_233, 8, 2, 1, 1);

        leSPoint3X = new QLineEdit(frame_20);
        leSPoint3X->setObjectName(QString::fromUtf8("leSPoint3X"));

        gridLayout_42->addWidget(leSPoint3X, 4, 3, 1, 1);

        lwPointMatrixList = new QListWidget(frame_20);
        lwPointMatrixList->setObjectName(QString::fromUtf8("lwPointMatrixList"));
        sizePolicy17.setHeightForWidth(lwPointMatrixList->sizePolicy().hasHeightForWidth());
        lwPointMatrixList->setSizePolicy(sizePolicy17);
        lwPointMatrixList->setMinimumSize(QSize(0, 70));
        lwPointMatrixList->setMaximumSize(QSize(16777215, 100));
        lwPointMatrixList->setStyleSheet(QString::fromUtf8("background-color: rgb(118, 118, 118);\n"
"color: rgb(241, 241, 241);\n"
"border-radius: 5px;\n"
"padding: 5px;"));

        gridLayout_42->addWidget(lwPointMatrixList, 12, 3, 1, 3);


        verticalLayout_65->addWidget(frame_20);


        verticalLayout_59->addWidget(gbCameraObject_3);

        gbCameraObject_4 = new QGroupBox(fPointTool);
        gbCameraObject_4->setObjectName(QString::fromUtf8("gbCameraObject_4"));
        gbCameraObject_4->setFont(font6);
        gbCameraObject_4->setCheckable(true);
        verticalLayout_66 = new QVBoxLayout(gbCameraObject_4);
        verticalLayout_66->setSpacing(6);
        verticalLayout_66->setContentsMargins(11, 11, 11, 11);
        verticalLayout_66->setObjectName(QString::fromUtf8("verticalLayout_66"));
        verticalLayout_66->setContentsMargins(-1, 10, -1, -1);
        frame_21 = new QFrame(gbCameraObject_4);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setMinimumSize(QSize(0, 0));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        gridLayout_43 = new QGridLayout(frame_21);
        gridLayout_43->setSpacing(6);
        gridLayout_43->setContentsMargins(11, 11, 11, 11);
        gridLayout_43->setObjectName(QString::fromUtf8("gridLayout_43"));
        leTestPointY = new QLineEdit(frame_21);
        leTestPointY->setObjectName(QString::fromUtf8("leTestPointY"));
        sizePolicy5.setHeightForWidth(leTestPointY->sizePolicy().hasHeightForWidth());
        leTestPointY->setSizePolicy(sizePolicy5);

        gridLayout_43->addWidget(leTestPointY, 2, 3, 1, 1);

        leTestPointX = new QLineEdit(frame_21);
        leTestPointX->setObjectName(QString::fromUtf8("leTestPointX"));
        sizePolicy5.setHeightForWidth(leTestPointX->sizePolicy().hasHeightForWidth());
        leTestPointX->setSizePolicy(sizePolicy5);

        gridLayout_43->addWidget(leTestPointX, 2, 2, 1, 1);

        label_223 = new QLabel(frame_21);
        label_223->setObjectName(QString::fromUtf8("label_223"));

        gridLayout_43->addWidget(label_223, 2, 4, 1, 1);

        leTestMatrixName = new QLineEdit(frame_21);
        leTestMatrixName->setObjectName(QString::fromUtf8("leTestMatrixName"));
        QSizePolicy sizePolicy18(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy18.setHorizontalStretch(0);
        sizePolicy18.setVerticalStretch(0);
        sizePolicy18.setHeightForWidth(leTestMatrixName->sizePolicy().hasHeightForWidth());
        leTestMatrixName->setSizePolicy(sizePolicy18);
        leTestMatrixName->setMinimumSize(QSize(0, 0));

        gridLayout_43->addWidget(leTestMatrixName, 2, 5, 1, 1);

        leTargetTestPointX = new QLineEdit(frame_21);
        leTargetTestPointX->setObjectName(QString::fromUtf8("leTargetTestPointX"));
        sizePolicy5.setHeightForWidth(leTargetTestPointX->sizePolicy().hasHeightForWidth());
        leTargetTestPointX->setSizePolicy(sizePolicy5);

        gridLayout_43->addWidget(leTargetTestPointX, 5, 2, 1, 1);

        leTargetTestPointY = new QLineEdit(frame_21);
        leTargetTestPointY->setObjectName(QString::fromUtf8("leTargetTestPointY"));
        sizePolicy5.setHeightForWidth(leTargetTestPointY->sizePolicy().hasHeightForWidth());
        leTargetTestPointY->setSizePolicy(sizePolicy5);

        gridLayout_43->addWidget(leTargetTestPointY, 5, 3, 1, 1);

        label_214 = new QLabel(frame_21);
        label_214->setObjectName(QString::fromUtf8("label_214"));
        label_214->setAlignment(Qt::AlignCenter);

        gridLayout_43->addWidget(label_214, 4, 3, 1, 1);

        label_215 = new QLabel(frame_21);
        label_215->setObjectName(QString::fromUtf8("label_215"));
        label_215->setAlignment(Qt::AlignCenter);

        gridLayout_43->addWidget(label_215, 1, 2, 1, 2);

        pbCalculateTestPoint = new QPushButton(frame_21);
        pbCalculateTestPoint->setObjectName(QString::fromUtf8("pbCalculateTestPoint"));
        sizePolicy5.setHeightForWidth(pbCalculateTestPoint->sizePolicy().hasHeightForWidth());
        pbCalculateTestPoint->setSizePolicy(sizePolicy5);
        pbCalculateTestPoint->setMinimumSize(QSize(0, 20));

        gridLayout_43->addWidget(pbCalculateTestPoint, 3, 2, 1, 1);

        label_222 = new QLabel(frame_21);
        label_222->setObjectName(QString::fromUtf8("label_222"));
        label_222->setAlignment(Qt::AlignCenter);

        gridLayout_43->addWidget(label_222, 1, 5, 1, 1);

        label_221 = new QLabel(frame_21);
        label_221->setObjectName(QString::fromUtf8("label_221"));
        label_221->setAlignment(Qt::AlignCenter);

        gridLayout_43->addWidget(label_221, 4, 2, 1, 1);

        horizontalSpacer_56 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_43->addItem(horizontalSpacer_56, 2, 6, 1, 1);


        verticalLayout_66->addWidget(frame_21);


        verticalLayout_59->addWidget(gbCameraObject_4);

        verticalSpacer_18 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_59->addItem(verticalSpacer_18);


        verticalLayout_9->addWidget(fPointTool);

        saPointTool->setWidget(wPointTool);

        verticalLayout_14->addWidget(saPointTool);

        twModule->addTab(tPointTool, QString());
        tDrawing = new QWidget();
        tDrawing->setObjectName(QString::fromUtf8("tDrawing"));
        verticalLayout_26 = new QVBoxLayout(tDrawing);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QString::fromUtf8("verticalLayout_26"));
        scrollArea_6 = new QScrollArea(tDrawing);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 643, 1600));
        scrollAreaWidgetContents_6->setMinimumSize(QSize(450, 1600));
        scrollAreaWidgetContents_6->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_38 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_38->setSpacing(6);
        verticalLayout_38->setContentsMargins(11, 11, 11, 11);
        verticalLayout_38->setObjectName(QString::fromUtf8("verticalLayout_38"));
        verticalLayout_37 = new QVBoxLayout();
        verticalLayout_37->setSpacing(6);
        verticalLayout_37->setObjectName(QString::fromUtf8("verticalLayout_37"));
        frame_4 = new QFrame(scrollAreaWidgetContents_6);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        sizePolicy6.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy6);
        frame_4->setMinimumSize(QSize(0, 75));
        frame_4->setMaximumSize(QSize(16777215, 16777215));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"	border: 1px solid rgb(131, 131, 131);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QToolButton::hover\n"
"{\n"
"	border: 1px solid rgb(32, 140, 255);\n"
"	background-color: rgb(217, 240, 255);\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_21 = new QVBoxLayout(frame_4);
        verticalLayout_21->setSpacing(0);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(5, 5, 0, 5);
        pbOpenPicture = new QToolButton(frame_4);
        pbOpenPicture->setObjectName(QString::fromUtf8("pbOpenPicture"));
        QSizePolicy sizePolicy19(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy19.setHorizontalStretch(0);
        sizePolicy19.setVerticalStretch(0);
        sizePolicy19.setHeightForWidth(pbOpenPicture->sizePolicy().hasHeightForWidth());
        pbOpenPicture->setSizePolicy(sizePolicy19);
        pbOpenPicture->setMinimumSize(QSize(0, 0));
        pbOpenPicture->setMaximumSize(QSize(16777215, 16777215));
        QFont font11;
        font11.setPointSize(10);
        font11.setBold(false);
        pbOpenPicture->setFont(font11);
        pbOpenPicture->setLayoutDirection(Qt::LeftToRight);
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/icon/icons8_image_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbOpenPicture->setIcon(icon29);
        pbOpenPicture->setIconSize(QSize(64, 64));
        pbOpenPicture->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbOpenPicture->setAutoRaise(false);

        verticalLayout_21->addWidget(pbOpenPicture);


        verticalLayout_37->addWidget(frame_4);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        frame_2 = new QFrame(scrollAreaWidgetContents_6);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(0, 250));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lbImageForDrawing = new QLabel(frame_2);
        lbImageForDrawing->setObjectName(QString::fromUtf8("lbImageForDrawing"));
        lbImageForDrawing->setGeometry(QRect(10, 10, 281, 226));
        sizePolicy.setHeightForWidth(lbImageForDrawing->sizePolicy().hasHeightForWidth());
        lbImageForDrawing->setSizePolicy(sizePolicy);
        lbImageForDrawing->setMinimumSize(QSize(0, 0));
        lbImageForDrawing->setStyleSheet(QString::fromUtf8("/*background-color: rgb(142, 254, 255);*/\n"
"QLabel\n"
"{\n"
"	/*background-color: rgb(255, 255, 255);*/\n"
"	border: 1px solid rgb(140, 140, 140);\n"
"	border-radius: 5px;\n"
"}"));
        lbImageForDrawing->setScaledContents(false);

        horizontalLayout_24->addWidget(frame_2);

        widget = new QWidget(scrollAreaWidgetContents_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(100, 16777215));
        verticalLayout_36 = new QVBoxLayout(widget);
        verticalLayout_36->setSpacing(6);
        verticalLayout_36->setContentsMargins(11, 11, 11, 11);
        verticalLayout_36->setObjectName(QString::fromUtf8("verticalLayout_36"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setStyleSheet(QString::fromUtf8(""));
        gridLayout_23 = new QGridLayout(widget_3);
        gridLayout_23->setSpacing(6);
        gridLayout_23->setContentsMargins(11, 11, 11, 11);
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        lbImageWidth = new QLabel(widget_3);
        lbImageWidth->setObjectName(QString::fromUtf8("lbImageWidth"));
        lbImageWidth->setFont(font5);
        lbImageWidth->setStyleSheet(QString::fromUtf8(""));

        gridLayout_23->addWidget(lbImageWidth, 0, 0, 1, 1);

        lbImageHeight = new QLabel(widget_3);
        lbImageHeight->setObjectName(QString::fromUtf8("lbImageHeight"));
        lbImageHeight->setFont(font5);
        lbImageHeight->setStyleSheet(QString::fromUtf8(""));

        gridLayout_23->addWidget(lbImageHeight, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_23->addItem(verticalSpacer_4, 2, 0, 1, 1);


        verticalLayout_36->addWidget(widget_3);


        horizontalLayout_24->addWidget(widget);


        verticalLayout_37->addLayout(horizontalLayout_24);

        widget_2 = new QWidget(scrollAreaWidgetContents_6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 50));
        widget_2->setMaximumSize(QSize(16777215, 80));
        widget_2->setStyleSheet(QString::fromUtf8("/*background-color: rgb(171, 225, 224);*/"));
        gridLayout_25 = new QGridLayout(widget_2);
        gridLayout_25->setSpacing(6);
        gridLayout_25->setContentsMargins(11, 11, 11, 11);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        cbConversionTool = new QComboBox(widget_2);
        cbConversionTool->addItem(QString());
        cbConversionTool->addItem(QString());
        cbConversionTool->addItem(QString());
        cbConversionTool->setObjectName(QString::fromUtf8("cbConversionTool"));
        cbConversionTool->setMinimumSize(QSize(0, 30));

        gridLayout_25->addWidget(cbConversionTool, 1, 1, 1, 1);

        hsDrawingThreshold = new QSlider(widget_2);
        hsDrawingThreshold->setObjectName(QString::fromUtf8("hsDrawingThreshold"));
        hsDrawingThreshold->setMaximum(255);
        hsDrawingThreshold->setSingleStep(1);
        hsDrawingThreshold->setValue(150);
        hsDrawingThreshold->setOrientation(Qt::Horizontal);

        gridLayout_25->addWidget(hsDrawingThreshold, 1, 2, 1, 1);

        leDrawingThreshold = new QLineEdit(widget_2);
        leDrawingThreshold->setObjectName(QString::fromUtf8("leDrawingThreshold"));
        leDrawingThreshold->setMinimumSize(QSize(0, 30));
        leDrawingThreshold->setMaximumSize(QSize(60, 16777215));
        leDrawingThreshold->setFont(font5);

        gridLayout_25->addWidget(leDrawingThreshold, 1, 3, 1, 1);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font5);

        gridLayout_25->addWidget(label_14, 1, 0, 1, 1);

        label_105 = new QLabel(widget_2);
        label_105->setObjectName(QString::fromUtf8("label_105"));
        label_105->setFont(font5);

        gridLayout_25->addWidget(label_105, 2, 0, 1, 1);

        cbReverseDrawing = new QCheckBox(widget_2);
        cbReverseDrawing->setObjectName(QString::fromUtf8("cbReverseDrawing"));

        gridLayout_25->addWidget(cbReverseDrawing, 2, 1, 1, 1);


        verticalLayout_37->addWidget(widget_2);

        frame_5 = new QFrame(scrollAreaWidgetContents_6);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy4.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy4);
        frame_5->setMinimumSize(QSize(0, 75));
        frame_5->setMaximumSize(QSize(16777215, 16777215));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"	border: 1px solid rgb(131, 131, 131);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QToolButton::hover\n"
"{\n"
"	border: 1px solid rgb(32, 140, 255);\n"
"	background-color: rgb(217, 240, 255);\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_47 = new QVBoxLayout(frame_5);
        verticalLayout_47->setSpacing(0);
        verticalLayout_47->setContentsMargins(11, 11, 11, 11);
        verticalLayout_47->setObjectName(QString::fromUtf8("verticalLayout_47"));
        verticalLayout_47->setContentsMargins(5, 5, 0, 5);
        pbPainting = new QToolButton(frame_5);
        pbPainting->setObjectName(QString::fromUtf8("pbPainting"));
        sizePolicy19.setHeightForWidth(pbPainting->sizePolicy().hasHeightForWidth());
        pbPainting->setSizePolicy(sizePolicy19);
        pbPainting->setMinimumSize(QSize(0, 0));
        pbPainting->setMaximumSize(QSize(16777215, 16777215));
        pbPainting->setFont(font11);
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/icon/icons8_pencil_drawing_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbPainting->setIcon(icon30);
        pbPainting->setIconSize(QSize(64, 64));
        pbPainting->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbPainting->setAutoRaise(false);
        pbPainting->setArrowType(Qt::NoArrow);

        verticalLayout_47->addWidget(pbPainting);


        verticalLayout_37->addWidget(frame_5);

        frame_7 = new QFrame(scrollAreaWidgetContents_6);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(0, 50));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        gridLayout_24 = new QGridLayout(frame_7);
        gridLayout_24->setSpacing(6);
        gridLayout_24->setContentsMargins(11, 11, 11, 11);
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        label_20 = new QLabel(frame_7);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font5);

        gridLayout_24->addWidget(label_20, 0, 1, 1, 1);

        label_18 = new QLabel(frame_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font5);

        gridLayout_24->addWidget(label_18, 0, 2, 1, 1);

        horizontalSpacer_40 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_40, 1, 4, 1, 1);

        cbLockDrawingArea = new QComboBox(frame_7);
        cbLockDrawingArea->addItem(QString());
        cbLockDrawingArea->addItem(QString());
        cbLockDrawingArea->setObjectName(QString::fromUtf8("cbLockDrawingArea"));

        gridLayout_24->addWidget(cbLockDrawingArea, 1, 3, 1, 1);

        label_104 = new QLabel(frame_7);
        label_104->setObjectName(QString::fromUtf8("label_104"));

        gridLayout_24->addWidget(label_104, 0, 3, 1, 1);

        leWidthScale = new QLineEdit(frame_7);
        leWidthScale->setObjectName(QString::fromUtf8("leWidthScale"));
        leWidthScale->setMinimumSize(QSize(0, 30));
        leWidthScale->setMaximumSize(QSize(100, 16777215));

        gridLayout_24->addWidget(leWidthScale, 1, 2, 1, 1);

        leHeightScale = new QLineEdit(frame_7);
        leHeightScale->setObjectName(QString::fromUtf8("leHeightScale"));
        leHeightScale->setMinimumSize(QSize(0, 30));
        leHeightScale->setMaximumSize(QSize(100, 16777215));

        gridLayout_24->addWidget(leHeightScale, 1, 1, 1, 1);


        verticalLayout_37->addWidget(frame_7);

        label_21 = new QLabel(scrollAreaWidgetContents_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_37->addWidget(label_21);

        frame_3 = new QFrame(scrollAreaWidgetContents_6);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        sizePolicy6.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy6);
        frame_3->setMinimumSize(QSize(300, 300));
        frame_3->setMaximumSize(QSize(300, 300));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        lbDrawingArea = new DrawingWidget(frame_3);
        lbDrawingArea->setObjectName(QString::fromUtf8("lbDrawingArea"));
        lbDrawingArea->setGeometry(QRect(0, 0, 300, 300));
        sizePolicy.setHeightForWidth(lbDrawingArea->sizePolicy().hasHeightForWidth());
        lbDrawingArea->setSizePolicy(sizePolicy);
        lbDrawingArea->setMinimumSize(QSize(300, 300));
        lbDrawingArea->setMaximumSize(QSize(300, 300));
        lbDrawingArea->setStyleSheet(QString::fromUtf8("/*background-color: rgb(142, 254, 255);*/\n"
"QLabel\n"
"{\n"
"	/*background-color: rgb(255, 255, 255);*/\n"
"	border: 1px solid rgb(140, 140, 140);\n"
"	border-radius: 150px;\n"
"}"));
        lbDrawingArea->setScaledContents(true);

        verticalLayout_37->addWidget(frame_3);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(0);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        widget_11 = new QWidget(scrollAreaWidgetContents_6);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        horizontalLayout_22 = new QHBoxLayout(widget_11);
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_26 = new QLabel(widget_11);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_22->addWidget(label_26);

        leDrawAg5 = new QLineEdit(widget_11);
        leDrawAg5->setObjectName(QString::fromUtf8("leDrawAg5"));
        QSizePolicy sizePolicy20(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy20.setHorizontalStretch(0);
        sizePolicy20.setVerticalStretch(0);
        sizePolicy20.setHeightForWidth(leDrawAg5->sizePolicy().hasHeightForWidth());
        leDrawAg5->setSizePolicy(sizePolicy20);
        leDrawAg5->setMinimumSize(QSize(0, 20));
        leDrawAg5->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_22->addWidget(leDrawAg5);


        horizontalLayout_23->addWidget(widget_11);

        widget_10 = new QWidget(scrollAreaWidgetContents_6);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        horizontalLayout_21 = new QHBoxLayout(widget_10);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_25 = new QLabel(widget_10);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font5);

        horizontalLayout_21->addWidget(label_25);

        leDrawAg4 = new QLineEdit(widget_10);
        leDrawAg4->setObjectName(QString::fromUtf8("leDrawAg4"));
        sizePolicy20.setHeightForWidth(leDrawAg4->sizePolicy().hasHeightForWidth());
        leDrawAg4->setSizePolicy(sizePolicy20);
        leDrawAg4->setMinimumSize(QSize(0, 20));
        leDrawAg4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_21->addWidget(leDrawAg4);


        horizontalLayout_23->addWidget(widget_10);

        widget_9 = new QWidget(scrollAreaWidgetContents_6);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        widget_9->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        horizontalLayout_20 = new QHBoxLayout(widget_9);
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_24 = new QLabel(widget_9);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_20->addWidget(label_24);

        leDrawAg3 = new QLineEdit(widget_9);
        leDrawAg3->setObjectName(QString::fromUtf8("leDrawAg3"));
        sizePolicy20.setHeightForWidth(leDrawAg3->sizePolicy().hasHeightForWidth());
        leDrawAg3->setSizePolicy(sizePolicy20);
        leDrawAg3->setMinimumSize(QSize(0, 20));
        leDrawAg3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_20->addWidget(leDrawAg3);


        horizontalLayout_23->addWidget(widget_9);

        widget_8 = new QWidget(scrollAreaWidgetContents_6);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        widget_8->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        horizontalLayout_19 = new QHBoxLayout(widget_8);
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_22 = new QLabel(widget_8);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_19->addWidget(label_22);

        leDrawAg2 = new QLineEdit(widget_8);
        leDrawAg2->setObjectName(QString::fromUtf8("leDrawAg2"));
        sizePolicy20.setHeightForWidth(leDrawAg2->sizePolicy().hasHeightForWidth());
        leDrawAg2->setSizePolicy(sizePolicy20);
        leDrawAg2->setMinimumSize(QSize(0, 20));
        leDrawAg2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_19->addWidget(leDrawAg2);


        horizontalLayout_23->addWidget(widget_8);

        widget_7 = new QWidget(scrollAreaWidgetContents_6);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        horizontalLayout_18 = new QHBoxLayout(widget_7);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_19 = new QLabel(widget_7);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_18->addWidget(label_19);

        leDrawAg1 = new QLineEdit(widget_7);
        leDrawAg1->setObjectName(QString::fromUtf8("leDrawAg1"));
        sizePolicy20.setHeightForWidth(leDrawAg1->sizePolicy().hasHeightForWidth());
        leDrawAg1->setSizePolicy(sizePolicy20);
        leDrawAg1->setMinimumSize(QSize(0, 20));
        leDrawAg1->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_18->addWidget(leDrawAg1);


        horizontalLayout_23->addWidget(widget_7);


        verticalLayout_37->addLayout(horizontalLayout_23);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(10);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        pbDrawLine = new QToolButton(scrollAreaWidgetContents_6);
        pbDrawLine->setObjectName(QString::fromUtf8("pbDrawLine"));
        sizePolicy18.setHeightForWidth(pbDrawLine->sizePolicy().hasHeightForWidth());
        pbDrawLine->setSizePolicy(sizePolicy18);
        pbDrawLine->setMinimumSize(QSize(0, 0));
        pbDrawLine->setMaximumSize(QSize(70, 16777215));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/icon/Line_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDrawLine->setIcon(icon31);
        pbDrawLine->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbDrawLine->setAutoRaise(true);

        gridLayout_11->addWidget(pbDrawLine, 0, 0, 1, 1);

        pbDrawRectangle = new QToolButton(scrollAreaWidgetContents_6);
        pbDrawRectangle->setObjectName(QString::fromUtf8("pbDrawRectangle"));
        sizePolicy18.setHeightForWidth(pbDrawRectangle->sizePolicy().hasHeightForWidth());
        pbDrawRectangle->setSizePolicy(sizePolicy18);
        pbDrawRectangle->setMinimumSize(QSize(0, 0));
        pbDrawRectangle->setMaximumSize(QSize(70, 16777215));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/icon/Rectangular_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDrawRectangle->setIcon(icon32);
        pbDrawRectangle->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbDrawRectangle->setAutoRaise(true);

        gridLayout_11->addWidget(pbDrawRectangle, 0, 1, 1, 1);

        pbZoomIn = new QToolButton(scrollAreaWidgetContents_6);
        pbZoomIn->setObjectName(QString::fromUtf8("pbZoomIn"));
        sizePolicy18.setHeightForWidth(pbZoomIn->sizePolicy().hasHeightForWidth());
        pbZoomIn->setSizePolicy(sizePolicy18);
        pbZoomIn->setMinimumSize(QSize(0, 0));
        pbZoomIn->setMaximumSize(QSize(70, 16777215));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/icon/Zoom In_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbZoomIn->setIcon(icon33);
        pbZoomIn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbZoomIn->setAutoRaise(true);

        gridLayout_11->addWidget(pbZoomIn, 0, 2, 1, 1);

        pbCursor = new QToolButton(scrollAreaWidgetContents_6);
        pbCursor->setObjectName(QString::fromUtf8("pbCursor"));
        sizePolicy18.setHeightForWidth(pbCursor->sizePolicy().hasHeightForWidth());
        pbCursor->setSizePolicy(sizePolicy18);
        pbCursor->setMinimumSize(QSize(0, 0));
        pbCursor->setMaximumSize(QSize(70, 16777215));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/icon/Cursor-color_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbCursor->setIcon(icon34);
        pbCursor->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbCursor->setAutoRaise(true);

        gridLayout_11->addWidget(pbCursor, 0, 3, 1, 1);

        pbDrawArc = new QToolButton(scrollAreaWidgetContents_6);
        pbDrawArc->setObjectName(QString::fromUtf8("pbDrawArc"));
        sizePolicy18.setHeightForWidth(pbDrawArc->sizePolicy().hasHeightForWidth());
        pbDrawArc->setSizePolicy(sizePolicy18);
        pbDrawArc->setMinimumSize(QSize(0, 0));
        pbDrawArc->setMaximumSize(QSize(70, 16777215));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/icon/Circled Notch_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDrawArc->setIcon(icon35);
        pbDrawArc->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbDrawArc->setAutoRaise(true);

        gridLayout_11->addWidget(pbDrawArc, 1, 0, 1, 1);

        pbDrawCircle = new QToolButton(scrollAreaWidgetContents_6);
        pbDrawCircle->setObjectName(QString::fromUtf8("pbDrawCircle"));
        sizePolicy18.setHeightForWidth(pbDrawCircle->sizePolicy().hasHeightForWidth());
        pbDrawCircle->setSizePolicy(sizePolicy18);
        pbDrawCircle->setMinimumSize(QSize(0, 0));
        pbDrawCircle->setMaximumSize(QSize(70, 16777215));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/icon/Circle_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbDrawCircle->setIcon(icon36);
        pbDrawCircle->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbDrawCircle->setAutoRaise(true);

        gridLayout_11->addWidget(pbDrawCircle, 1, 1, 1, 1);

        pbZoomOut = new QToolButton(scrollAreaWidgetContents_6);
        pbZoomOut->setObjectName(QString::fromUtf8("pbZoomOut"));
        sizePolicy18.setHeightForWidth(pbZoomOut->sizePolicy().hasHeightForWidth());
        pbZoomOut->setSizePolicy(sizePolicy18);
        pbZoomOut->setMinimumSize(QSize(0, 0));
        pbZoomOut->setMaximumSize(QSize(70, 16777215));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/icon/Zoom Out_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbZoomOut->setIcon(icon37);
        pbZoomOut->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbZoomOut->setAutoRaise(true);

        gridLayout_11->addWidget(pbZoomOut, 1, 2, 1, 1);


        verticalLayout_37->addLayout(gridLayout_11);

        frame_6 = new QFrame(scrollAreaWidgetContents_6);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        sizePolicy4.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy4);
        frame_6->setMinimumSize(QSize(0, 75));
        frame_6->setMaximumSize(QSize(16777215, 16777215));
        frame_6->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"	border: 1px solid rgb(131, 131, 131);\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QToolButton::hover\n"
"{\n"
"	border: 1px solid rgb(32, 140, 255);\n"
"	background-color: rgb(217, 240, 255);\n"
"}"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_48 = new QVBoxLayout(frame_6);
        verticalLayout_48->setSpacing(0);
        verticalLayout_48->setContentsMargins(11, 11, 11, 11);
        verticalLayout_48->setObjectName(QString::fromUtf8("verticalLayout_48"));
        verticalLayout_48->setContentsMargins(5, 5, 0, 5);
        pbExportDrawingGcodes = new QToolButton(frame_6);
        pbExportDrawingGcodes->setObjectName(QString::fromUtf8("pbExportDrawingGcodes"));
        sizePolicy19.setHeightForWidth(pbExportDrawingGcodes->sizePolicy().hasHeightForWidth());
        pbExportDrawingGcodes->setSizePolicy(sizePolicy19);
        pbExportDrawingGcodes->setMinimumSize(QSize(185, 65));
        pbExportDrawingGcodes->setMaximumSize(QSize(16777215, 16777215));
        pbExportDrawingGcodes->setFont(font11);
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/icon/icons8_code_96px.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbExportDrawingGcodes->setIcon(icon38);
        pbExportDrawingGcodes->setIconSize(QSize(64, 64));
        pbExportDrawingGcodes->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        pbExportDrawingGcodes->setAutoRaise(false);

        verticalLayout_48->addWidget(pbExportDrawingGcodes);


        verticalLayout_37->addWidget(frame_6);

        gridLayout_22 = new QGridLayout();
        gridLayout_22->setSpacing(15);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        gridLayout_22->setContentsMargins(-1, 5, -1, 5);
        label_96 = new QLabel(scrollAreaWidgetContents_6);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        sizePolicy7.setHeightForWidth(label_96->sizePolicy().hasHeightForWidth());
        label_96->setSizePolicy(sizePolicy7);
        label_96->setMinimumSize(QSize(0, 0));
        label_96->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_96, 4, 0, 1, 1);

        label_101 = new QLabel(scrollAreaWidgetContents_6);
        label_101->setObjectName(QString::fromUtf8("label_101"));
        sizePolicy.setHeightForWidth(label_101->sizePolicy().hasHeightForWidth());
        label_101->setSizePolicy(sizePolicy);
        label_101->setMinimumSize(QSize(0, 0));
        QFont font12;
        font12.setItalic(false);
        label_101->setFont(font12);
        label_101->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_101, 6, 2, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font5);
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_13, 1, 0, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_22->addItem(horizontalSpacer_33, 0, 2, 1, 1);

        label_97 = new QLabel(scrollAreaWidgetContents_6);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        sizePolicy7.setHeightForWidth(label_97->sizePolicy().hasHeightForWidth());
        label_97->setSizePolicy(sizePolicy7);
        label_97->setMinimumSize(QSize(0, 0));
        label_97->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_97, 6, 0, 1, 1);

        leTravelSpeed = new QLineEdit(scrollAreaWidgetContents_6);
        leTravelSpeed->setObjectName(QString::fromUtf8("leTravelSpeed"));
        leTravelSpeed->setMinimumSize(QSize(0, 30));
        leTravelSpeed->setMaximumSize(QSize(150, 16777215));

        gridLayout_22->addWidget(leTravelSpeed, 4, 1, 1, 1);

        cbDrawMethod = new QComboBox(scrollAreaWidgetContents_6);
        cbDrawMethod->addItem(QString());
        cbDrawMethod->addItem(QString());
        cbDrawMethod->setObjectName(QString::fromUtf8("cbDrawMethod"));
        cbDrawMethod->setMinimumSize(QSize(0, 30));
        cbDrawMethod->setMaximumSize(QSize(150, 16777215));

        gridLayout_22->addWidget(cbDrawMethod, 1, 1, 1, 1);

        cbDrawingEffector = new QComboBox(scrollAreaWidgetContents_6);
        cbDrawingEffector->addItem(QString());
        cbDrawingEffector->addItem(QString());
        cbDrawingEffector->setObjectName(QString::fromUtf8("cbDrawingEffector"));
        sizePolicy4.setHeightForWidth(cbDrawingEffector->sizePolicy().hasHeightForWidth());
        cbDrawingEffector->setSizePolicy(sizePolicy4);
        cbDrawingEffector->setMinimumSize(QSize(0, 30));
        cbDrawingEffector->setMaximumSize(QSize(150, 16777215));

        gridLayout_22->addWidget(cbDrawingEffector, 0, 1, 1, 1);

        leSafeZHeight = new QLineEdit(scrollAreaWidgetContents_6);
        leSafeZHeight->setObjectName(QString::fromUtf8("leSafeZHeight"));
        leSafeZHeight->setMinimumSize(QSize(0, 30));
        leSafeZHeight->setMaximumSize(QSize(150, 16777215));

        gridLayout_22->addWidget(leSafeZHeight, 3, 1, 1, 1);

        leDrawingAcceleration = new QLineEdit(scrollAreaWidgetContents_6);
        leDrawingAcceleration->setObjectName(QString::fromUtf8("leDrawingAcceleration"));
        leDrawingAcceleration->setMinimumSize(QSize(0, 30));
        leDrawingAcceleration->setMaximumSize(QSize(150, 16777215));

        gridLayout_22->addWidget(leDrawingAcceleration, 7, 1, 1, 1);

        label_102 = new QLabel(scrollAreaWidgetContents_6);
        label_102->setObjectName(QString::fromUtf8("label_102"));
        sizePolicy.setHeightForWidth(label_102->sizePolicy().hasHeightForWidth());
        label_102->setSizePolicy(sizePolicy);
        label_102->setMinimumSize(QSize(0, 0));
        label_102->setFont(font12);
        label_102->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_102, 7, 2, 1, 1);

        label_93 = new QLabel(scrollAreaWidgetContents_6);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        sizePolicy2.setHeightForWidth(label_93->sizePolicy().hasHeightForWidth());
        label_93->setSizePolicy(sizePolicy2);
        label_93->setMinimumSize(QSize(0, 0));
        label_93->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_93, 0, 0, 1, 1);

        label_95 = new QLabel(scrollAreaWidgetContents_6);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        sizePolicy7.setHeightForWidth(label_95->sizePolicy().hasHeightForWidth());
        label_95->setSizePolicy(sizePolicy7);
        label_95->setMinimumSize(QSize(0, 0));
        label_95->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_95, 3, 0, 1, 1);

        label_100 = new QLabel(scrollAreaWidgetContents_6);
        label_100->setObjectName(QString::fromUtf8("label_100"));
        sizePolicy.setHeightForWidth(label_100->sizePolicy().hasHeightForWidth());
        label_100->setSizePolicy(sizePolicy);
        label_100->setMinimumSize(QSize(0, 0));
        label_100->setFont(font12);
        label_100->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_100, 4, 2, 1, 1);

        label_98 = new QLabel(scrollAreaWidgetContents_6);
        label_98->setObjectName(QString::fromUtf8("label_98"));
        sizePolicy7.setHeightForWidth(label_98->sizePolicy().hasHeightForWidth());
        label_98->setSizePolicy(sizePolicy7);
        label_98->setMinimumSize(QSize(0, 0));
        label_98->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_98, 7, 0, 1, 1);

        leDrawingSpeed = new QLineEdit(scrollAreaWidgetContents_6);
        leDrawingSpeed->setObjectName(QString::fromUtf8("leDrawingSpeed"));
        leDrawingSpeed->setMinimumSize(QSize(0, 30));
        leDrawingSpeed->setMaximumSize(QSize(150, 16777215));

        gridLayout_22->addWidget(leDrawingSpeed, 6, 1, 1, 1);

        label_99 = new QLabel(scrollAreaWidgetContents_6);
        label_99->setObjectName(QString::fromUtf8("label_99"));
        sizePolicy.setHeightForWidth(label_99->sizePolicy().hasHeightForWidth());
        label_99->setSizePolicy(sizePolicy);
        label_99->setMinimumSize(QSize(0, 0));
        label_99->setFont(font12);
        label_99->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_99, 3, 2, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font5);
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_23, 2, 0, 1, 1);

        leSpace = new QLineEdit(scrollAreaWidgetContents_6);
        leSpace->setObjectName(QString::fromUtf8("leSpace"));
        leSpace->setMinimumSize(QSize(0, 30));
        leSpace->setMaximumSize(QSize(150, 16777215));

        gridLayout_22->addWidget(leSpace, 2, 1, 1, 1);

        label_103 = new QLabel(scrollAreaWidgetContents_6);
        label_103->setObjectName(QString::fromUtf8("label_103"));
        sizePolicy.setHeightForWidth(label_103->sizePolicy().hasHeightForWidth());
        label_103->setSizePolicy(sizePolicy);
        label_103->setMinimumSize(QSize(0, 0));
        label_103->setFont(font12);
        label_103->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_22->addWidget(label_103, 2, 2, 1, 1);


        verticalLayout_37->addLayout(gridLayout_22);


        verticalLayout_38->addLayout(verticalLayout_37);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_38->addItem(verticalSpacer_6);

        scrollArea_6->setWidget(scrollAreaWidgetContents_6);

        verticalLayout_26->addWidget(scrollArea_6);

        twModule->addTab(tDrawing, QString());
        TermiteTab = new QWidget();
        TermiteTab->setObjectName(QString::fromUtf8("TermiteTab"));
        verticalLayout_11 = new QVBoxLayout(TermiteTab);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        saTermite = new QScrollArea(TermiteTab);
        saTermite->setObjectName(QString::fromUtf8("saTermite"));
        saTermite->setWidgetResizable(true);
        wgTermite = new QWidget();
        wgTermite->setObjectName(QString::fromUtf8("wgTermite"));
        wgTermite->setGeometry(QRect(0, 0, 657, 684));
        wgTermite->setStyleSheet(QString::fromUtf8("QWidget#wgTermite\n"
"{\n"
"	\n"
"	background-color: rgb(30, 30, 32);\n"
"}"));
        verticalLayout_27 = new QVBoxLayout(wgTermite);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QString::fromUtf8("verticalLayout_27"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(10);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(10, 10, 10, 10);
        teDebug = new QTextEdit(wgTermite);
        teDebug->setObjectName(QString::fromUtf8("teDebug"));
        QFont font13;
        font13.setBold(false);
        font13.setItalic(false);
        font13.setKerning(true);
        teDebug->setFont(font13);
        teDebug->setStyleSheet(QString::fromUtf8("color: rgb(255, 82, 87);"));

        gridLayout_4->addWidget(teDebug, 0, 1, 1, 1);

        label_4 = new QLabel(wgTermite);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(wgTermite);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        leTerminal = new QLineEdit(wgTermite);
        leTerminal->setObjectName(QString::fromUtf8("leTerminal"));
        leTerminal->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(leTerminal, 1, 1, 1, 1);

        cbDeviceSender = new QComboBox(wgTermite);
        cbDeviceSender->addItem(QString());
        cbDeviceSender->addItem(QString());
        cbDeviceSender->addItem(QString());
        cbDeviceSender->addItem(QString());
        cbDeviceSender->addItem(QString());
        cbDeviceSender->addItem(QString());
        cbDeviceSender->setObjectName(QString::fromUtf8("cbDeviceSender"));

        gridLayout_4->addWidget(cbDeviceSender, 1, 2, 1, 1);


        verticalLayout_27->addLayout(gridLayout_4);

        saTermite->setWidget(wgTermite);

        verticalLayout_11->addWidget(saTermite);

        twModule->addTab(TermiteTab, QString());

        ModuleTabManagerLayout->addWidget(twModule);

        splitter_2->addWidget(ModuleTabManagerWidget);
        DeviceTabManagerWidget = new QWidget(splitter_2);
        DeviceTabManagerWidget->setObjectName(QString::fromUtf8("DeviceTabManagerWidget"));
        DeviceTabManagerWidget->setMinimumSize(QSize(0, 0));
        DeviceTabManagerWidget->setMaximumSize(QSize(900, 16777215));
        DeviceTabManagerWidget->setStyleSheet(QString::fromUtf8(""));
        GeometryTabManagerLayout = new QVBoxLayout(DeviceTabManagerWidget);
        GeometryTabManagerLayout->setSpacing(0);
        GeometryTabManagerLayout->setContentsMargins(11, 11, 11, 11);
        GeometryTabManagerLayout->setObjectName(QString::fromUtf8("GeometryTabManagerLayout"));
        GeometryTabManagerLayout->setContentsMargins(0, 0, 0, 0);
        twDevices = new QTabWidget(DeviceTabManagerWidget);
        twDevices->setObjectName(QString::fromUtf8("twDevices"));
        twDevices->setMinimumSize(QSize(0, 28));
        twDevices->setFont(font3);
        twDevices->setStyleSheet(QString::fromUtf8(""));
        twDevices->setTabPosition(QTabWidget::North);
        twDevices->setElideMode(Qt::ElideNone);
        twDevices->setTabsClosable(false);
        tRobot = new QWidget();
        tRobot->setObjectName(QString::fromUtf8("tRobot"));
        tRobot->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(tRobot);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(tRobot);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        wgJoggingScrollWidget = new QWidget();
        wgJoggingScrollWidget->setObjectName(QString::fromUtf8("wgJoggingScrollWidget"));
        wgJoggingScrollWidget->setGeometry(QRect(0, 0, 495, 1500));
        wgJoggingScrollWidget->setMinimumSize(QSize(0, 1500));
        wgJoggingScrollWidget->setMaximumSize(QSize(16777215, 16777215));
        wgJoggingScrollWidget->setStyleSheet(QString::fromUtf8("QWidget#wgJoggingScrollWidget\n"
"{\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
"QLabel, QCheckBox\n"
"{	\n"
"	color: rgb(208, 208, 209);\n"
"}\n"
"\n"
"QFrame\n"
"{	\n"
"	border-radius: 5px;\n"
"	background-color: #333337;\n"
"}\n"
"\n"
"/* \303\201p d\341\273\245ng cho m\341\273\231t ph\341\272\247n t\341\273\255 c\341\273\245 th\341\273\203, v\303\255 d\341\273\245 QPushButton */\n"
"QPushButton {\n"
"    background-color: #4A4A4F;\n"
"    border-radius: 5px;\n"
"    \n"
"	color: rgb(208, 208, 209);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"	border: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"QToolButton {\n"
"    background-color: #4A4A4F;\n"
"    border-radius: 5px;\n"
"    \n"
"	color: rgb(208, 208, 209);\n"
"}\n"
"\n"
"QToolButton:hover\n"
"{\n"
"	border: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"QFrame[Func=Title]\n"
"{\n"
"	padding-top: 6px;\n"
"	padding-bottom:6px;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(wgJoggingScrollWidget);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(10, 10, 10, 10);
        frame_12 = new QFrame(wgJoggingScrollWidget);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setMinimumSize(QSize(0, 100));
        frame_12->setStyleSheet(QString::fromUtf8("#frame_23, #robotTitile\n"
"{\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"#frame_12\n"
"{	\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}\n"
"\n"
""));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_28 = new QVBoxLayout(frame_12);
        verticalLayout_28->setSpacing(0);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName(QString::fromUtf8("verticalLayout_28"));
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        robotTitile = new QFrame(frame_12);
        robotTitile->setObjectName(QString::fromUtf8("robotTitile"));
        robotTitile->setMaximumSize(QSize(16777215, 40));
        robotTitile->setStyleSheet(QString::fromUtf8(""));
        robotTitile->setFrameShape(QFrame::StyledPanel);
        robotTitile->setFrameShadow(QFrame::Raised);
        horizontalLayout_36 = new QHBoxLayout(robotTitile);
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        horizontalLayout_36->setContentsMargins(-1, 0, -1, 0);
        label_158 = new QLabel(robotTitile);
        label_158->setObjectName(QString::fromUtf8("label_158"));
        label_158->setMinimumSize(QSize(100, 0));
        label_158->setMaximumSize(QSize(200, 16777215));
        label_158->setFont(font11);
        label_158->setAlignment(Qt::AlignCenter);

        horizontalLayout_36->addWidget(label_158);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_36->addItem(horizontalSpacer_31);

        tbAutoScanRobot = new QToolButton(robotTitile);
        tbAutoScanRobot->setObjectName(QString::fromUtf8("tbAutoScanRobot"));
        sizePolicy.setHeightForWidth(tbAutoScanRobot->sizePolicy().hasHeightForWidth());
        tbAutoScanRobot->setSizePolicy(sizePolicy);
        tbAutoScanRobot->setMinimumSize(QSize(20, 20));
        tbAutoScanRobot->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background: transparent;\n"
"}"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/icon/icons8_switch_off_52px.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon39.addFile(QString::fromUtf8(":/icon/icons8_switch_on_52px.png"), QSize(), QIcon::Normal, QIcon::On);
        icon39.addFile(QString::fromUtf8(":/icon/icons8_switch_on_52px.png"), QSize(), QIcon::Active, QIcon::On);
        tbAutoScanRobot->setIcon(icon39);
        tbAutoScanRobot->setIconSize(QSize(16, 16));
        tbAutoScanRobot->setCheckable(true);
        tbAutoScanRobot->setChecked(true);
        tbAutoScanRobot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbAutoScanRobot->setAutoRaise(true);

        horizontalLayout_36->addWidget(tbAutoScanRobot);

        pbConnect = new QPushButton(robotTitile);
        pbConnect->setObjectName(QString::fromUtf8("pbConnect"));
        sizePolicy.setHeightForWidth(pbConnect->sizePolicy().hasHeightForWidth());
        pbConnect->setSizePolicy(sizePolicy);
        pbConnect->setMinimumSize(QSize(0, 28));
        pbConnect->setFont(font11);
        pbConnect->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3195EF;\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"}\n"
"QPushButton:hover\n"
"{	\n"
"	background-color: rgb(129, 129, 129);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{	\n"
"	background-color: rgb(81, 176, 255);\n"
"}\n"
""));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8("C:/Users/Admin/.designer/backup/icon/disconnected.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon40.addFile(QString::fromUtf8("C:/Users/Admin/.designer/backup/icon/connected.png"), QSize(), QIcon::Normal, QIcon::On);
        pbConnect->setIcon(icon40);
        pbConnect->setIconSize(QSize(30, 20));
        pbConnect->setCheckable(true);

        horizontalLayout_36->addWidget(pbConnect);


        verticalLayout_28->addWidget(robotTitile);

        frame_23 = new QFrame(frame_12);
        frame_23->setObjectName(QString::fromUtf8("frame_23"));
        frame_23->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background: #262629;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        horizontalLayout_41 = new QHBoxLayout(frame_23);
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        cbSelectedRobot = new QComboBox(frame_23);
        cbSelectedRobot->addItem(QString());
        cbSelectedRobot->addItem(QString());
        cbSelectedRobot->addItem(QString());
        cbSelectedRobot->addItem(QString());
        cbSelectedRobot->setObjectName(QString::fromUtf8("cbSelectedRobot"));
        sizePolicy10.setHeightForWidth(cbSelectedRobot->sizePolicy().hasHeightForWidth());
        cbSelectedRobot->setSizePolicy(sizePolicy10);
        cbSelectedRobot->setMinimumSize(QSize(100, 0));
        cbSelectedRobot->setMaximumSize(QSize(300, 16777215));
        cbSelectedRobot->setFont(font4);

        horizontalLayout_41->addWidget(cbSelectedRobot);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_41->addItem(horizontalSpacer_42);

        groupBox = new QGroupBox(frame_23);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_42 = new QHBoxLayout(groupBox);
        horizontalLayout_42->setSpacing(0);
        horizontalLayout_42->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        horizontalLayout_42->setContentsMargins(-1, 15, -1, 0);
        lbComName = new QLabel(groupBox);
        lbComName->setObjectName(QString::fromUtf8("lbComName"));
        lbComName->setFont(font8);
        lbComName->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_42->addWidget(lbComName);


        horizontalLayout_41->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame_23);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_52 = new QHBoxLayout(groupBox_2);
        horizontalLayout_52->setSpacing(0);
        horizontalLayout_52->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        horizontalLayout_52->setContentsMargins(6, 15, -1, 0);
        lbBaudrate = new QLabel(groupBox_2);
        lbBaudrate->setObjectName(QString::fromUtf8("lbBaudrate"));
        lbBaudrate->setFont(font8);
        lbBaudrate->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_52->addWidget(lbBaudrate);


        horizontalLayout_41->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame_23);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_44 = new QHBoxLayout(groupBox_3);
        horizontalLayout_44->setSpacing(0);
        horizontalLayout_44->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        horizontalLayout_44->setContentsMargins(6, 15, -1, 0);
        cbRobotModel = new QComboBox(groupBox_3);
        cbRobotModel->addItem(QString());
        cbRobotModel->addItem(QString());
        cbRobotModel->addItem(QString());
        cbRobotModel->addItem(QString());
        cbRobotModel->setObjectName(QString::fromUtf8("cbRobotModel"));
        cbRobotModel->setMinimumSize(QSize(80, 0));

        horizontalLayout_44->addWidget(cbRobotModel);


        horizontalLayout_41->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(frame_23);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_53 = new QHBoxLayout(groupBox_4);
        horizontalLayout_53->setSpacing(0);
        horizontalLayout_53->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        horizontalLayout_53->setContentsMargins(-1, 15, -1, 0);
        cbRobotDOF = new QComboBox(groupBox_4);
        cbRobotDOF->addItem(QString());
        cbRobotDOF->addItem(QString());
        cbRobotDOF->addItem(QString());
        cbRobotDOF->addItem(QString());
        cbRobotDOF->setObjectName(QString::fromUtf8("cbRobotDOF"));
        cbRobotDOF->setMinimumSize(QSize(80, 0));

        horizontalLayout_53->addWidget(cbRobotDOF);


        horizontalLayout_41->addWidget(groupBox_4);

        fRobotPosition = new QFrame(frame_23);
        fRobotPosition->setObjectName(QString::fromUtf8("fRobotPosition"));
        fRobotPosition->setMinimumSize(QSize(0, 40));
        fRobotPosition->setMaximumSize(QSize(16777215, 16777215));
        fRobotPosition->setStyleSheet(QString::fromUtf8("QLabel\n"
"{	\n"
"	background-color: rgb(239, 252, 255);\n"
"	color: rgb(33, 125, 206)\n"
"}"));
        gridLayout_19 = new QGridLayout(fRobotPosition);
        gridLayout_19->setSpacing(7);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        gridLayout_19->setContentsMargins(0, 0, -1, 0);

        horizontalLayout_41->addWidget(fRobotPosition);


        verticalLayout_28->addWidget(frame_23);


        verticalLayout_5->addWidget(frame_12);

        frame_28 = new QFrame(wgJoggingScrollWidget);
        frame_28->setObjectName(QString::fromUtf8("frame_28"));
        frame_28->setMinimumSize(QSize(0, 100));
        frame_28->setStyleSheet(QString::fromUtf8("#frame_23, #robotTitile\n"
"{\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"#frame_12\n"
"{	\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}\n"
"\n"
""));
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        verticalLayout_72 = new QVBoxLayout(frame_28);
        verticalLayout_72->setSpacing(0);
        verticalLayout_72->setContentsMargins(11, 11, 11, 11);
        verticalLayout_72->setObjectName(QString::fromUtf8("verticalLayout_72"));
        verticalLayout_72->setContentsMargins(0, 0, 0, 0);
        positionTitile = new QFrame(frame_28);
        positionTitile->setObjectName(QString::fromUtf8("positionTitile"));
        positionTitile->setMaximumSize(QSize(16777215, 40));
        positionTitile->setStyleSheet(QString::fromUtf8(""));
        positionTitile->setFrameShape(QFrame::StyledPanel);
        positionTitile->setFrameShadow(QFrame::Raised);
        horizontalLayout_75 = new QHBoxLayout(positionTitile);
        horizontalLayout_75->setSpacing(6);
        horizontalLayout_75->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_75->setObjectName(QString::fromUtf8("horizontalLayout_75"));
        label_270 = new QLabel(positionTitile);
        label_270->setObjectName(QString::fromUtf8("label_270"));
        label_270->setMaximumSize(QSize(100, 16777215));
        label_270->setFont(font11);
        label_270->setAlignment(Qt::AlignCenter);

        horizontalLayout_75->addWidget(label_270);

        horizontalSpacer_93 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_75->addItem(horizontalSpacer_93);

        tbDisableRobot = new QToolButton(positionTitile);
        tbDisableRobot->setObjectName(QString::fromUtf8("tbDisableRobot"));
        sizePolicy.setHeightForWidth(tbDisableRobot->sizePolicy().hasHeightForWidth());
        tbDisableRobot->setSizePolicy(sizePolicy);
        tbDisableRobot->setMinimumSize(QSize(20, 20));
        tbDisableRobot->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	background: transparent;\n"
"}"));
        tbDisableRobot->setIcon(icon39);
        tbDisableRobot->setIconSize(QSize(16, 16));
        tbDisableRobot->setCheckable(true);
        tbDisableRobot->setChecked(true);
        tbDisableRobot->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbDisableRobot->setAutoRaise(true);

        horizontalLayout_75->addWidget(tbDisableRobot);

        tbRequestPosition = new QToolButton(positionTitile);
        tbRequestPosition->setObjectName(QString::fromUtf8("tbRequestPosition"));
        sizePolicy.setHeightForWidth(tbRequestPosition->sizePolicy().hasHeightForWidth());
        tbRequestPosition->setSizePolicy(sizePolicy);
        tbRequestPosition->setMinimumSize(QSize(20, 20));
        tbRequestPosition->setIconSize(QSize(16, 16));
        tbRequestPosition->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbRequestPosition->setAutoRaise(true);

        horizontalLayout_75->addWidget(tbRequestPosition);


        verticalLayout_72->addWidget(positionTitile);

        frame_29 = new QFrame(frame_28);
        frame_29->setObjectName(QString::fromUtf8("frame_29"));
        frame_29->setMinimumSize(QSize(0, 0));
        frame_29->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background: #262629;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        horizontalLayout_76 = new QHBoxLayout(frame_29);
        horizontalLayout_76->setSpacing(6);
        horizontalLayout_76->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_76->setObjectName(QString::fromUtf8("horizontalLayout_76"));
        pbHome = new QToolButton(frame_29);
        pbHome->setObjectName(QString::fromUtf8("pbHome"));
        pbHome->setMinimumSize(QSize(0, 0));
        pbHome->setFont(font4);
        pbHome->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"	padding: 5px;\n"
"}"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/icon/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbHome->setIcon(icon41);
        pbHome->setIconSize(QSize(20, 20));
        pbHome->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_76->addWidget(pbHome);

        horizontalSpacer_95 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_76->addItem(horizontalSpacer_95);

        frame_9 = new QFrame(frame_29);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setMinimumSize(QSize(0, 0));
        frame_9->setStyleSheet(QString::fromUtf8(""));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        gridLayout_31 = new QGridLayout(frame_9);
        gridLayout_31->setSpacing(6);
        gridLayout_31->setContentsMargins(11, 11, 11, 11);
        gridLayout_31->setObjectName(QString::fromUtf8("gridLayout_31"));
        gridLayout_31->setContentsMargins(-1, 0, -1, 0);
        label_92 = new QLabel(frame_9);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setMinimumSize(QSize(0, 0));
        label_92->setFont(font10);
        label_92->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_92, 0, 7, 1, 1);

        label_90 = new QLabel(frame_9);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setMinimumSize(QSize(0, 0));
        label_90->setFont(font10);
        label_90->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_90, 0, 5, 1, 2);

        label_94 = new QLabel(frame_9);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setMinimumSize(QSize(0, 0));
        label_94->setFont(font10);
        label_94->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_94, 0, 8, 1, 1);

        label_84 = new QLabel(frame_9);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setMinimumSize(QSize(0, 0));
        label_84->setFont(font10);
        label_84->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_84, 0, 1, 1, 1);

        label_88 = new QLabel(frame_9);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setMinimumSize(QSize(0, 0));
        label_88->setFont(font10);
        label_88->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_88, 0, 3, 1, 1);

        label_86 = new QLabel(frame_9);
        label_86->setObjectName(QString::fromUtf8("label_86"));
        label_86->setMinimumSize(QSize(0, 0));
        label_86->setFont(font10);
        label_86->setAlignment(Qt::AlignCenter);

        gridLayout_31->addWidget(label_86, 0, 2, 1, 1);

        leX = new QLineEdit(frame_9);
        leX->setObjectName(QString::fromUtf8("leX"));
        leX->setMinimumSize(QSize(0, 0));
        leX->setMaximumSize(QSize(70, 16777215));

        gridLayout_31->addWidget(leX, 1, 1, 1, 1);

        leY = new QLineEdit(frame_9);
        leY->setObjectName(QString::fromUtf8("leY"));
        leY->setMinimumSize(QSize(0, 0));
        leY->setMaximumSize(QSize(70, 16777215));

        gridLayout_31->addWidget(leY, 1, 2, 1, 1);

        leZ = new QLineEdit(frame_9);
        leZ->setObjectName(QString::fromUtf8("leZ"));
        leZ->setMinimumSize(QSize(0, 0));
        leZ->setMaximumSize(QSize(70, 16777215));

        gridLayout_31->addWidget(leZ, 1, 3, 1, 1);

        leW = new QLineEdit(frame_9);
        leW->setObjectName(QString::fromUtf8("leW"));
        leW->setMinimumSize(QSize(0, 0));
        leW->setMaximumSize(QSize(70, 16777215));

        gridLayout_31->addWidget(leW, 1, 5, 1, 1);

        leU = new QLineEdit(frame_9);
        leU->setObjectName(QString::fromUtf8("leU"));
        leU->setMinimumSize(QSize(0, 0));
        leU->setMaximumSize(QSize(70, 16777215));

        gridLayout_31->addWidget(leU, 1, 7, 1, 1);

        leV = new QLineEdit(frame_9);
        leV->setObjectName(QString::fromUtf8("leV"));
        leV->setMinimumSize(QSize(0, 0));
        leV->setMaximumSize(QSize(70, 16777215));

        gridLayout_31->addWidget(leV, 1, 8, 1, 1);

        label_277 = new QLabel(frame_9);
        label_277->setObjectName(QString::fromUtf8("label_277"));
        label_277->setMaximumSize(QSize(120, 16777215));

        gridLayout_31->addWidget(label_277, 1, 4, 1, 1);

        label_278 = new QLabel(frame_9);
        label_278->setObjectName(QString::fromUtf8("label_278"));
        label_278->setMaximumSize(QSize(120, 16777215));

        gridLayout_31->addWidget(label_278, 1, 9, 1, 1);


        horizontalLayout_76->addWidget(frame_9);


        verticalLayout_72->addWidget(frame_29);


        verticalLayout_5->addWidget(frame_28);

        frame_30 = new QFrame(wgJoggingScrollWidget);
        frame_30->setObjectName(QString::fromUtf8("frame_30"));
        frame_30->setMinimumSize(QSize(0, 0));
        frame_30->setStyleSheet(QString::fromUtf8("#frame_23, #robotTitile\n"
"{\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"#frame_12\n"
"{	\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}\n"
"\n"
""));
        frame_30->setFrameShape(QFrame::StyledPanel);
        frame_30->setFrameShadow(QFrame::Raised);
        verticalLayout_73 = new QVBoxLayout(frame_30);
        verticalLayout_73->setSpacing(0);
        verticalLayout_73->setContentsMargins(11, 11, 11, 11);
        verticalLayout_73->setObjectName(QString::fromUtf8("verticalLayout_73"));
        verticalLayout_73->setContentsMargins(0, 0, 0, 0);
        robotTitile_4 = new QFrame(frame_30);
        robotTitile_4->setObjectName(QString::fromUtf8("robotTitile_4"));
        robotTitile_4->setMaximumSize(QSize(16777215, 40));
        robotTitile_4->setStyleSheet(QString::fromUtf8(""));
        robotTitile_4->setFrameShape(QFrame::StyledPanel);
        robotTitile_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_77 = new QHBoxLayout(robotTitile_4);
        horizontalLayout_77->setSpacing(6);
        horizontalLayout_77->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_77->setObjectName(QString::fromUtf8("horizontalLayout_77"));
        horizontalLayout_77->setContentsMargins(-1, 0, -1, 0);
        label_271 = new QLabel(robotTitile_4);
        label_271->setObjectName(QString::fromUtf8("label_271"));
        label_271->setMaximumSize(QSize(100, 16777215));
        label_271->setFont(font11);
        label_271->setAlignment(Qt::AlignCenter);

        horizontalLayout_77->addWidget(label_271);

        horizontalSpacer_94 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_77->addItem(horizontalSpacer_94);


        verticalLayout_73->addWidget(robotTitile_4);

        frame_31 = new QFrame(frame_30);
        frame_31->setObjectName(QString::fromUtf8("frame_31"));
        QSizePolicy sizePolicy21(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy21.setHorizontalStretch(0);
        sizePolicy21.setVerticalStretch(0);
        sizePolicy21.setHeightForWidth(frame_31->sizePolicy().hasHeightForWidth());
        frame_31->setSizePolicy(sizePolicy21);
        frame_31->setMinimumSize(QSize(0, 0));
        frame_31->setMaximumSize(QSize(16777215, 16777215));
        frame_31->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border-radius:0px;\n"
"	background: #262629;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}\n"
"\n"
"QToolButton\n"
"{\n"
"	background-color: #3195EF;\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	width: 30px;\n"
"	height: 30px;\n"
"}\n"
"QToolButton:hover\n"
"{	\n"
"	background-color: rgb(129, 129, 129);\n"
"}\n"
"\n"
"QToolButton:pressed\n"
"{	\n"
"	background-color: rgb(81, 176, 255);\n"
"}\n"
"\n"
"QToolButton[Func='Jogging'] \n"
"{\n"
"	padding: 10px;\n"
"}\n"
""));
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);
        gridLayout_56 = new QGridLayout(frame_31);
        gridLayout_56->setSpacing(6);
        gridLayout_56->setContentsMargins(11, 11, 11, 11);
        gridLayout_56->setObjectName(QString::fromUtf8("gridLayout_56"));
        pbLeft = new QToolButton(frame_31);
        pbLeft->setObjectName(QString::fromUtf8("pbLeft"));
        pbLeft->setIconSize(QSize(40, 40));
        pbLeft->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbLeft, 2, 0, 1, 1);

        pbBackward = new QToolButton(frame_31);
        pbBackward->setObjectName(QString::fromUtf8("pbBackward"));
        pbBackward->setIconSize(QSize(40, 40));
        pbBackward->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbBackward, 3, 1, 1, 1);

        label_275 = new QLabel(frame_31);
        label_275->setObjectName(QString::fromUtf8("label_275"));
        label_275->setMinimumSize(QSize(0, 20));
        label_275->setFont(font7);
        label_275->setAlignment(Qt::AlignCenter);

        gridLayout_56->addWidget(label_275, 2, 7, 1, 1);

        pbPlusRoll = new QToolButton(frame_31);
        pbPlusRoll->setObjectName(QString::fromUtf8("pbPlusRoll"));
        pbPlusRoll->setIconSize(QSize(40, 40));
        pbPlusRoll->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbPlusRoll, 3, 6, 1, 1);

        label_274 = new QLabel(frame_31);
        label_274->setObjectName(QString::fromUtf8("label_274"));
        label_274->setMinimumSize(QSize(0, 20));
        label_274->setFont(font7);
        label_274->setAlignment(Qt::AlignCenter);

        gridLayout_56->addWidget(label_274, 2, 8, 1, 1);

        pbSubPitch = new QToolButton(frame_31);
        pbSubPitch->setObjectName(QString::fromUtf8("pbSubPitch"));
        pbSubPitch->setIconSize(QSize(40, 40));
        pbSubPitch->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbSubPitch, 1, 8, 1, 1);

        pbSubRoll = new QToolButton(frame_31);
        pbSubRoll->setObjectName(QString::fromUtf8("pbSubRoll"));
        pbSubRoll->setIconSize(QSize(40, 40));
        pbSubRoll->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbSubRoll, 1, 6, 1, 1);

        pbUp = new QToolButton(frame_31);
        pbUp->setObjectName(QString::fromUtf8("pbUp"));
        pbUp->setIconSize(QSize(20, 20));
        pbUp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pbUp->setAutoRaise(false);

        gridLayout_56->addWidget(pbUp, 1, 5, 1, 1);

        pbDown = new QToolButton(frame_31);
        pbDown->setObjectName(QString::fromUtf8("pbDown"));
        pbDown->setIconSize(QSize(40, 40));
        pbDown->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbDown, 3, 5, 1, 1);

        pbForward = new QToolButton(frame_31);
        pbForward->setObjectName(QString::fromUtf8("pbForward"));
        sizePolicy19.setHeightForWidth(pbForward->sizePolicy().hasHeightForWidth());
        pbForward->setSizePolicy(sizePolicy19);
        pbForward->setStyleSheet(QString::fromUtf8(""));
        pbForward->setIconSize(QSize(20, 20));
        pbForward->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbForward, 1, 1, 1, 1);

        pbRight = new QToolButton(frame_31);
        pbRight->setObjectName(QString::fromUtf8("pbRight"));
        pbRight->setIconSize(QSize(40, 40));
        pbRight->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbRight, 2, 3, 1, 1);

        pbPlusPitch = new QToolButton(frame_31);
        pbPlusPitch->setObjectName(QString::fromUtf8("pbPlusPitch"));
        pbPlusPitch->setIconSize(QSize(40, 40));
        pbPlusPitch->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbPlusPitch, 3, 8, 1, 1);

        pbSubYaw = new QToolButton(frame_31);
        pbSubYaw->setObjectName(QString::fromUtf8("pbSubYaw"));
        pbSubYaw->setIconSize(QSize(40, 40));
        pbSubYaw->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbSubYaw, 1, 7, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_56->addItem(horizontalSpacer_4, 2, 9, 1, 1);

        label_276 = new QLabel(frame_31);
        label_276->setObjectName(QString::fromUtf8("label_276"));
        label_276->setMinimumSize(QSize(0, 20));
        label_276->setFont(font7);
        label_276->setAlignment(Qt::AlignCenter);

        gridLayout_56->addWidget(label_276, 2, 6, 1, 1);

        pbPlusYaw = new QToolButton(frame_31);
        pbPlusYaw->setObjectName(QString::fromUtf8("pbPlusYaw"));
        pbPlusYaw->setIconSize(QSize(40, 40));
        pbPlusYaw->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_56->addWidget(pbPlusYaw, 3, 7, 1, 1);


        verticalLayout_73->addWidget(frame_31);

        frame_32 = new QFrame(frame_30);
        frame_32->setObjectName(QString::fromUtf8("frame_32"));
        frame_32->setMinimumSize(QSize(0, 0));
        frame_32->setMaximumSize(QSize(16777215, 30));
        frame_32->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	background: #262629;\n"
"	border-radius:0px;\n"
"}\n"
"\n"
"QRadioButton {\n"
"    background-color: #434347;\n"
"    padding: 5px;\n"
"	 width:30px;\n"
"    border: 1px solid #646469;\n"
"	color: #D0D0D1;\n"
"}\n"
"\n"
"QRadioButton::indicator {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}\n"
"\n"
"QRadioButton:checked {\n"
"    background-color: #646469;\n"
"    border-color: #646469;\n"
"    color: white;\n"
"}\n"
"\n"
"QRadioButton:hover {\n"
"    border-color: #2196F3;\n"
"}\n"
"\n"
"QRadioButton:disabled {\n"
"    background-color: #D0D0D0;\n"
"    color: #B0B0B0;\n"
"}"));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        horizontalLayout_81 = new QHBoxLayout(frame_32);
        horizontalLayout_81->setSpacing(0);
        horizontalLayout_81->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_81->setObjectName(QString::fromUtf8("horizontalLayout_81"));
        horizontalLayout_81->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(frame_32);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_81->addWidget(label_33);

        rb01 = new QRadioButton(frame_32);
        rb01->setObjectName(QString::fromUtf8("rb01"));

        horizontalLayout_81->addWidget(rb01);

        rb05 = new QRadioButton(frame_32);
        rb05->setObjectName(QString::fromUtf8("rb05"));

        horizontalLayout_81->addWidget(rb05);

        rb10 = new QRadioButton(frame_32);
        rb10->setObjectName(QString::fromUtf8("rb10"));

        horizontalLayout_81->addWidget(rb10);

        rb50 = new QRadioButton(frame_32);
        rb50->setObjectName(QString::fromUtf8("rb50"));

        horizontalLayout_81->addWidget(rb50);

        rb100 = new QRadioButton(frame_32);
        rb100->setObjectName(QString::fromUtf8("rb100"));
        rb100->setChecked(true);

        horizontalLayout_81->addWidget(rb100);

        rb500 = new QRadioButton(frame_32);
        rb500->setObjectName(QString::fromUtf8("rb500"));

        horizontalLayout_81->addWidget(rb500);

        rb1000 = new QRadioButton(frame_32);
        rb1000->setObjectName(QString::fromUtf8("rb1000"));

        horizontalLayout_81->addWidget(rb1000);

        label_273 = new QLabel(frame_32);
        label_273->setObjectName(QString::fromUtf8("label_273"));
        label_273->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_81->addWidget(label_273);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_81->addItem(horizontalSpacer_27);


        verticalLayout_73->addWidget(frame_32);


        verticalLayout_5->addWidget(frame_30);

        frame_22 = new QFrame(wgJoggingScrollWidget);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setMinimumSize(QSize(0, 0));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_22);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame1 = new QFrame(frame_22);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	padding-left: 6px;\n"
"}"));
        horizontalLayout_12 = new QHBoxLayout(frame1);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(1, -1, -1, -1);
        label_272 = new QLabel(frame1);
        label_272->setObjectName(QString::fromUtf8("label_272"));
        label_272->setMaximumSize(QSize(16777215, 16777215));
        label_272->setFont(font11);
        label_272->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_272);

        horizontalSpacer_96 = new QSpacerItem(466, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_96);


        verticalLayout_12->addWidget(frame1);

        frame_24 = new QFrame(frame_22);
        frame_24->setObjectName(QString::fromUtf8("frame_24"));
        frame_24->setMinimumSize(QSize(0, 50));
        frame_24->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border-radius:0px;\n"
"	background: #262629;\n"
"}"));
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_24);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(10);
        leEndSpeed = new QLineEdit(frame_24);
        leEndSpeed->setObjectName(QString::fromUtf8("leEndSpeed"));
        QSizePolicy sizePolicy22(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy22.setHorizontalStretch(0);
        sizePolicy22.setVerticalStretch(0);
        sizePolicy22.setHeightForWidth(leEndSpeed->sizePolicy().hasHeightForWidth());
        leEndSpeed->setSizePolicy(sizePolicy22);
        leEndSpeed->setMinimumSize(QSize(0, 0));
        leEndSpeed->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(leEndSpeed, 2, 4, 1, 1);

        label_62 = new QLabel(frame_24);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setMaximumSize(QSize(60, 16777215));
        label_62->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_62, 1, 3, 1, 1);

        leAccel = new QLineEdit(frame_24);
        leAccel->setObjectName(QString::fromUtf8("leAccel"));
        sizePolicy22.setHeightForWidth(leAccel->sizePolicy().hasHeightForWidth());
        leAccel->setSizePolicy(sizePolicy22);
        leAccel->setMinimumSize(QSize(0, 0));
        leAccel->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(leAccel, 2, 1, 1, 1);

        leVelocity = new QLineEdit(frame_24);
        leVelocity->setObjectName(QString::fromUtf8("leVelocity"));
        QSizePolicy sizePolicy23(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy23.setHorizontalStretch(0);
        sizePolicy23.setVerticalStretch(0);
        sizePolicy23.setHeightForWidth(leVelocity->sizePolicy().hasHeightForWidth());
        leVelocity->setSizePolicy(sizePolicy23);
        leVelocity->setMinimumSize(QSize(0, 0));
        leVelocity->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(leVelocity, 1, 1, 1, 1);

        label_29 = new QLabel(frame_24);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_29, 1, 0, 1, 1);

        horizontalSpacer_61 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_61, 1, 7, 1, 1);

        leStartSpeed = new QLineEdit(frame_24);
        leStartSpeed->setObjectName(QString::fromUtf8("leStartSpeed"));
        sizePolicy22.setHeightForWidth(leStartSpeed->sizePolicy().hasHeightForWidth());
        leStartSpeed->setSizePolicy(sizePolicy22);
        leStartSpeed->setMinimumSize(QSize(0, 0));
        leStartSpeed->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(leStartSpeed, 1, 4, 1, 1);

        label_32 = new QLabel(frame_24);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setStyleSheet(QString::fromUtf8("color: rgb(95, 95, 95);"));

        gridLayout_3->addWidget(label_32, 2, 2, 1, 1);

        label_30 = new QLabel(frame_24);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("color: rgb(95, 95, 95);"));

        gridLayout_3->addWidget(label_30, 1, 2, 1, 1);

        label_31 = new QLabel(frame_24);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_31, 2, 0, 1, 1);

        label_63 = new QLabel(frame_24);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setStyleSheet(QString::fromUtf8("color: rgb(95, 95, 95);"));

        gridLayout_3->addWidget(label_63, 1, 5, 1, 1);

        label_116 = new QLabel(frame_24);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setMaximumSize(QSize(60, 16777215));
        label_116->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_116, 2, 3, 1, 1);

        label_117 = new QLabel(frame_24);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setStyleSheet(QString::fromUtf8("color: rgb(95, 95, 95);"));

        gridLayout_3->addWidget(label_117, 2, 5, 1, 1);

        leJerk = new QLineEdit(frame_24);
        leJerk->setObjectName(QString::fromUtf8("leJerk"));
        sizePolicy22.setHeightForWidth(leJerk->sizePolicy().hasHeightForWidth());
        leJerk->setSizePolicy(sizePolicy22);
        leJerk->setMinimumSize(QSize(0, 0));
        leJerk->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(leJerk, 3, 1, 1, 1);

        label_64 = new QLabel(frame_24);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setStyleSheet(QString::fromUtf8("color: rgb(95, 95, 95);"));

        gridLayout_3->addWidget(label_64, 3, 2, 1, 1);

        label_47 = new QLabel(frame_24);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(label_47, 3, 0, 1, 1);


        verticalLayout_12->addWidget(frame_24);


        verticalLayout_5->addWidget(frame_22);

        frame_34 = new QFrame(wgJoggingScrollWidget);
        frame_34->setObjectName(QString::fromUtf8("frame_34"));
        frame_34->setMinimumSize(QSize(0, 100));
        frame_34->setStyleSheet(QString::fromUtf8("#frame_23, #robotTitile\n"
"{\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"#frame_12\n"
"{	\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}\n"
"\n"
""));
        frame_34->setFrameShape(QFrame::StyledPanel);
        frame_34->setFrameShadow(QFrame::Raised);
        verticalLayout_44 = new QVBoxLayout(frame_34);
        verticalLayout_44->setSpacing(0);
        verticalLayout_44->setContentsMargins(11, 11, 11, 11);
        verticalLayout_44->setObjectName(QString::fromUtf8("verticalLayout_44"));
        verticalLayout_44->setContentsMargins(0, 0, 0, 0);
        robotTitile_3 = new QFrame(frame_34);
        robotTitile_3->setObjectName(QString::fromUtf8("robotTitile_3"));
        robotTitile_3->setMaximumSize(QSize(16777215, 40));
        robotTitile_3->setStyleSheet(QString::fromUtf8(""));
        robotTitile_3->setFrameShape(QFrame::StyledPanel);
        robotTitile_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_78 = new QHBoxLayout(robotTitile_3);
        horizontalLayout_78->setSpacing(6);
        horizontalLayout_78->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_78->setObjectName(QString::fromUtf8("horizontalLayout_78"));
        horizontalLayout_78->setContentsMargins(-1, 0, -1, 0);
        label_279 = new QLabel(robotTitile_3);
        label_279->setObjectName(QString::fromUtf8("label_279"));
        label_279->setMaximumSize(QSize(100, 16777215));
        label_279->setFont(font11);
        label_279->setAlignment(Qt::AlignCenter);

        horizontalLayout_78->addWidget(label_279);

        horizontalSpacer_32 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_78->addItem(horizontalSpacer_32);


        verticalLayout_44->addWidget(robotTitile_3);

        frame_35 = new QFrame(frame_34);
        frame_35->setObjectName(QString::fromUtf8("frame_35"));
        frame_35->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background: #262629;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_35->setFrameShape(QFrame::StyledPanel);
        frame_35->setFrameShadow(QFrame::Raised);
        verticalLayout_53 = new QVBoxLayout(frame_35);
        verticalLayout_53->setSpacing(6);
        verticalLayout_53->setContentsMargins(11, 11, 11, 11);
        verticalLayout_53->setObjectName(QString::fromUtf8("verticalLayout_53"));
        groupBox_9 = new QGroupBox(frame_35);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        horizontalLayout = new QHBoxLayout(groupBox_9);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 20, -1, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        pbPump = new QPushButton(groupBox_9);
        pbPump->setObjectName(QString::fromUtf8("pbPump"));
        pbPump->setMinimumSize(QSize(100, 30));
        pbPump->setAutoFillBackground(false);
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/icon/Toggle Off_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon42.addFile(QString::fromUtf8(":/icon/Toggle On_16px.png"), QSize(), QIcon::Normal, QIcon::On);
        pbPump->setIcon(icon42);
        pbPump->setIconSize(QSize(16, 16));
        pbPump->setCheckable(true);
        pbPump->setChecked(false);
        pbPump->setAutoDefault(false);
        pbPump->setFlat(false);

        verticalLayout_6->addWidget(pbPump);

        pbLaser = new QPushButton(groupBox_9);
        pbLaser->setObjectName(QString::fromUtf8("pbLaser"));
        pbLaser->setMinimumSize(QSize(100, 30));
        pbLaser->setAutoFillBackground(false);
        pbLaser->setIcon(icon42);
        pbLaser->setIconSize(QSize(16, 16));
        pbLaser->setCheckable(true);
        pbLaser->setChecked(false);
        pbLaser->setAutoDefault(false);
        pbLaser->setFlat(false);

        verticalLayout_6->addWidget(pbLaser);


        horizontalLayout->addLayout(verticalLayout_6);

        horizontalSpacer_97 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_97);

        gbGripper = new QWidget(groupBox_9);
        gbGripper->setObjectName(QString::fromUtf8("gbGripper"));
        gbGripper->setMaximumSize(QSize(250, 16777215));
        gbGripper->setFont(font2);
        gbGripper->setStyleSheet(QString::fromUtf8("#gbGripper\n"
"{	\n"
"	background-color: #4A4A4F;\n"
"	border-radius:5px;\n"
"}\n"
""));
        gridLayout_13 = new QGridLayout(gbGripper);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        gridLayout_13->setContentsMargins(6, 5, 6, 5);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_17 = new QLabel(gbGripper);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font5);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_17, 0, 1, 1, 1);

        label_27 = new QLabel(gbGripper);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font5);
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_27, 0, 2, 1, 1);

        pbGrip = new QPushButton(gbGripper);
        pbGrip->setObjectName(QString::fromUtf8("pbGrip"));
        pbGrip->setMinimumSize(QSize(60, 30));
        pbGrip->setMaximumSize(QSize(30, 16777215));
        pbGrip->setAutoFillBackground(false);
        pbGrip->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	\n"
"	background-color: rgb(49, 149, 239);\n"
"}"));
        pbGrip->setAutoDefault(false);
        pbGrip->setFlat(false);

        gridLayout_6->addWidget(pbGrip, 1, 0, 1, 1);

        leGripperMin = new QLineEdit(gbGripper);
        leGripperMin->setObjectName(QString::fromUtf8("leGripperMin"));
        leGripperMin->setMinimumSize(QSize(30, 30));
        leGripperMin->setMaximumSize(QSize(40, 16777215));

        gridLayout_6->addWidget(leGripperMin, 1, 1, 1, 1);

        leGripperMax = new QLineEdit(gbGripper);
        leGripperMax->setObjectName(QString::fromUtf8("leGripperMax"));
        leGripperMax->setMinimumSize(QSize(30, 30));
        leGripperMax->setMaximumSize(QSize(40, 16777215));

        gridLayout_6->addWidget(leGripperMax, 1, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        hsGripperAngle = new QSlider(gbGripper);
        hsGripperAngle->setObjectName(QString::fromUtf8("hsGripperAngle"));
        sizePolicy20.setHeightForWidth(hsGripperAngle->sizePolicy().hasHeightForWidth());
        hsGripperAngle->setSizePolicy(sizePolicy20);
        hsGripperAngle->setMinimumSize(QSize(0, 30));
        hsGripperAngle->setMaximum(20);
        hsGripperAngle->setSingleStep(5);
        hsGripperAngle->setOrientation(Qt::Horizontal);

        horizontalLayout_15->addWidget(hsGripperAngle);

        lbGripperValue = new QLabel(gbGripper);
        lbGripperValue->setObjectName(QString::fromUtf8("lbGripperValue"));
        lbGripperValue->setMinimumSize(QSize(40, 0));
        lbGripperValue->setFont(font5);

        horizontalLayout_15->addWidget(lbGripperValue);


        gridLayout_13->addLayout(horizontalLayout_15, 1, 0, 1, 1);


        horizontalLayout->addWidget(gbGripper);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_46);


        verticalLayout_53->addWidget(groupBox_9);

        gbOutput = new QGroupBox(frame_35);
        gbOutput->setObjectName(QString::fromUtf8("gbOutput"));
        gbOutput->setMinimumSize(QSize(0, 0));
        QFont font14;
        font14.setPointSize(9);
        font14.setBold(false);
        gbOutput->setFont(font14);
        verticalLayout_42 = new QVBoxLayout(gbOutput);
        verticalLayout_42->setSpacing(6);
        verticalLayout_42->setContentsMargins(11, 11, 11, 11);
        verticalLayout_42->setObjectName(QString::fromUtf8("verticalLayout_42"));
        verticalLayout_42->setContentsMargins(-1, 20, -1, -1);
        wgDigitalOutput = new QWidget(gbOutput);
        wgDigitalOutput->setObjectName(QString::fromUtf8("wgDigitalOutput"));
        wgDigitalOutput->setMinimumSize(QSize(0, 0));
        gridLayout_34 = new QGridLayout(wgDigitalOutput);
        gridLayout_34->setSpacing(6);
        gridLayout_34->setContentsMargins(11, 11, 11, 11);
        gridLayout_34->setObjectName(QString::fromUtf8("gridLayout_34"));
        cbD3 = new QCheckBox(wgDigitalOutput);
        cbD3->setObjectName(QString::fromUtf8("cbD3"));
        cbD3->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD3, 1, 9, 1, 1);

        cbD0 = new QCheckBox(wgDigitalOutput);
        cbD0->setObjectName(QString::fromUtf8("cbD0"));
        cbD0->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD0, 1, 2, 1, 1);

        label_71 = new QLabel(wgDigitalOutput);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setMinimumSize(QSize(30, 0));
        label_71->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_71, 2, 6, 1, 1);

        label_66 = new QLabel(wgDigitalOutput);
        label_66->setObjectName(QString::fromUtf8("label_66"));
        label_66->setMinimumSize(QSize(30, 0));
        label_66->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_66, 2, 1, 1, 1);

        cbD6 = new QCheckBox(wgDigitalOutput);
        cbD6->setObjectName(QString::fromUtf8("cbD6"));
        cbD6->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD6, 2, 7, 1, 1);

        label_53 = new QLabel(wgDigitalOutput);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setMinimumSize(QSize(30, 0));
        label_53->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_53, 1, 3, 1, 1);

        cbD2 = new QCheckBox(wgDigitalOutput);
        cbD2->setObjectName(QString::fromUtf8("cbD2"));
        cbD2->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD2, 1, 7, 1, 1);

        cbD7 = new QCheckBox(wgDigitalOutput);
        cbD7->setObjectName(QString::fromUtf8("cbD7"));
        cbD7->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD7, 2, 9, 1, 1);

        label_72 = new QLabel(wgDigitalOutput);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setMinimumSize(QSize(30, 0));
        label_72->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_72, 2, 8, 1, 1);

        cbD1 = new QCheckBox(wgDigitalOutput);
        cbD1->setObjectName(QString::fromUtf8("cbD1"));
        cbD1->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD1, 1, 5, 1, 1);

        cbD4 = new QCheckBox(wgDigitalOutput);
        cbD4->setObjectName(QString::fromUtf8("cbD4"));
        cbD4->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD4, 2, 2, 1, 1);

        label_51 = new QLabel(wgDigitalOutput);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setMinimumSize(QSize(30, 0));
        label_51->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_51, 1, 1, 1, 1);

        horizontalSpacer_69 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_69, 2, 14, 1, 1);

        label_69 = new QLabel(wgDigitalOutput);
        label_69->setObjectName(QString::fromUtf8("label_69"));
        label_69->setMinimumSize(QSize(30, 0));
        label_69->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_69, 2, 3, 1, 1);

        label_61 = new QLabel(wgDigitalOutput);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setMinimumSize(QSize(30, 0));
        label_61->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_61, 1, 8, 1, 1);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_34->addItem(horizontalSpacer_48, 1, 14, 1, 1);

        cbD5 = new QCheckBox(wgDigitalOutput);
        cbD5->setObjectName(QString::fromUtf8("cbD5"));
        cbD5->setMinimumSize(QSize(0, 0));

        gridLayout_34->addWidget(cbD5, 2, 5, 1, 1);

        label_60 = new QLabel(wgDigitalOutput);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setMinimumSize(QSize(30, 0));
        label_60->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(label_60, 1, 6, 1, 1);

        label_68 = new QLabel(wgDigitalOutput);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setMinimumSize(QSize(70, 0));
        label_68->setFont(font2);

        gridLayout_34->addWidget(label_68, 1, 0, 1, 1);

        label_67 = new QLabel(wgDigitalOutput);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setMinimumSize(QSize(70, 0));
        label_67->setFont(font2);

        gridLayout_34->addWidget(label_67, 0, 0, 1, 1);

        leDx = new QLineEdit(wgDigitalOutput);
        leDx->setObjectName(QString::fromUtf8("leDx"));
        leDx->setMaximumSize(QSize(30, 16777215));

        gridLayout_34->addWidget(leDx, 0, 1, 1, 1);

        cbDx = new QCheckBox(wgDigitalOutput);
        cbDx->setObjectName(QString::fromUtf8("cbDx"));
        cbDx->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(cbDx, 0, 2, 1, 1);

        leRx = new QLineEdit(wgDigitalOutput);
        leRx->setObjectName(QString::fromUtf8("leRx"));
        leRx->setMaximumSize(QSize(30, 16777215));

        gridLayout_34->addWidget(leRx, 0, 3, 1, 1);

        cbRx = new QCheckBox(wgDigitalOutput);
        cbRx->setObjectName(QString::fromUtf8("cbRx"));
        cbRx->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_34->addWidget(cbRx, 0, 5, 1, 1);


        verticalLayout_42->addWidget(wgDigitalOutput);


        verticalLayout_53->addWidget(gbOutput);


        verticalLayout_44->addWidget(frame_35);


        verticalLayout_5->addWidget(frame_34);

        frame_36 = new QFrame(wgJoggingScrollWidget);
        frame_36->setObjectName(QString::fromUtf8("frame_36"));
        frame_36->setMinimumSize(QSize(0, 100));
        frame_36->setStyleSheet(QString::fromUtf8("#frame_23, #robotTitile\n"
"{\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"#frame_12\n"
"{	\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}\n"
"\n"
""));
        frame_36->setFrameShape(QFrame::StyledPanel);
        frame_36->setFrameShadow(QFrame::Raised);
        verticalLayout_54 = new QVBoxLayout(frame_36);
        verticalLayout_54->setSpacing(0);
        verticalLayout_54->setContentsMargins(11, 11, 11, 11);
        verticalLayout_54->setObjectName(QString::fromUtf8("verticalLayout_54"));
        verticalLayout_54->setContentsMargins(0, 0, 0, 0);
        robotTitile_6 = new QFrame(frame_36);
        robotTitile_6->setObjectName(QString::fromUtf8("robotTitile_6"));
        robotTitile_6->setMaximumSize(QSize(16777215, 40));
        robotTitile_6->setStyleSheet(QString::fromUtf8(""));
        robotTitile_6->setFrameShape(QFrame::StyledPanel);
        robotTitile_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_82 = new QHBoxLayout(robotTitile_6);
        horizontalLayout_82->setSpacing(6);
        horizontalLayout_82->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_82->setObjectName(QString::fromUtf8("horizontalLayout_82"));
        label_280 = new QLabel(robotTitile_6);
        label_280->setObjectName(QString::fromUtf8("label_280"));
        label_280->setMaximumSize(QSize(100, 16777215));
        label_280->setFont(font11);
        label_280->setAlignment(Qt::AlignCenter);

        horizontalLayout_82->addWidget(label_280);

        horizontalSpacer_102 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_82->addItem(horizontalSpacer_102);


        verticalLayout_54->addWidget(robotTitile_6);

        frame_37 = new QFrame(frame_36);
        frame_37->setObjectName(QString::fromUtf8("frame_37"));
        frame_37->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background: #262629;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_37->setFrameShape(QFrame::StyledPanel);
        frame_37->setFrameShadow(QFrame::Raised);
        horizontalLayout_83 = new QHBoxLayout(frame_37);
        horizontalLayout_83->setSpacing(6);
        horizontalLayout_83->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_83->setObjectName(QString::fromUtf8("horizontalLayout_83"));
        fRobotPosition_4 = new QFrame(frame_37);
        fRobotPosition_4->setObjectName(QString::fromUtf8("fRobotPosition_4"));
        fRobotPosition_4->setMinimumSize(QSize(0, 40));
        fRobotPosition_4->setMaximumSize(QSize(16777215, 16777215));
        fRobotPosition_4->setStyleSheet(QString::fromUtf8(""));
        gridLayout_20 = new QGridLayout(fRobotPosition_4);
        gridLayout_20->setSpacing(7);
        gridLayout_20->setContentsMargins(11, 11, 11, 11);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        gridLayout_20->setContentsMargins(0, 0, -1, 0);
        gbInput = new QGroupBox(fRobotPosition_4);
        gbInput->setObjectName(QString::fromUtf8("gbInput"));
        gbInput->setMinimumSize(QSize(0, 380));
        gbInput->setFont(font14);
        verticalLayout_43 = new QVBoxLayout(gbInput);
        verticalLayout_43->setSpacing(6);
        verticalLayout_43->setContentsMargins(11, 11, 11, 11);
        verticalLayout_43->setObjectName(QString::fromUtf8("verticalLayout_43"));
        verticalLayout_43->setContentsMargins(-1, 20, -1, -1);
        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        pbReadI0 = new QPushButton(gbInput);
        pbReadI0->setObjectName(QString::fromUtf8("pbReadI0"));
        pbReadI0->setMinimumSize(QSize(50, 0));

        horizontalLayout_37->addWidget(pbReadI0);

        label_70 = new QLabel(gbInput);
        label_70->setObjectName(QString::fromUtf8("label_70"));
        label_70->setMinimumSize(QSize(30, 0));
        label_70->setMaximumSize(QSize(25, 16777215));
        label_70->setFont(font2);

        horizontalLayout_37->addWidget(label_70);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_16);

        lbI0Value = new QLabel(gbInput);
        lbI0Value->setObjectName(QString::fromUtf8("lbI0Value"));

        horizontalLayout_37->addWidget(lbI0Value);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_15);

        cbToggle0 = new QCheckBox(gbInput);
        cbToggle0->setObjectName(QString::fromUtf8("cbToggle0"));
        cbToggle0->setMinimumSize(QSize(110, 0));
        cbToggle0->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_37->addWidget(cbToggle0);

        horizontalSpacer_51 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_37->addItem(horizontalSpacer_51);


        verticalLayout_43->addLayout(horizontalLayout_37);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        pbReadI1 = new QPushButton(gbInput);
        pbReadI1->setObjectName(QString::fromUtf8("pbReadI1"));
        pbReadI1->setMinimumSize(QSize(50, 0));

        horizontalLayout_38->addWidget(pbReadI1);

        label_74 = new QLabel(gbInput);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setMinimumSize(QSize(30, 0));
        label_74->setMaximumSize(QSize(25, 16777215));
        label_74->setFont(font2);

        horizontalLayout_38->addWidget(label_74);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_17);

        lbI1Value = new QLabel(gbInput);
        lbI1Value->setObjectName(QString::fromUtf8("lbI1Value"));

        horizontalLayout_38->addWidget(lbI1Value);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_18);

        cbToggle1 = new QCheckBox(gbInput);
        cbToggle1->setObjectName(QString::fromUtf8("cbToggle1"));
        cbToggle1->setMinimumSize(QSize(110, 0));
        cbToggle1->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_38->addWidget(cbToggle1);

        horizontalSpacer_52 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_38->addItem(horizontalSpacer_52);


        verticalLayout_43->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        pbReadI2 = new QPushButton(gbInput);
        pbReadI2->setObjectName(QString::fromUtf8("pbReadI2"));
        pbReadI2->setMinimumSize(QSize(50, 0));

        horizontalLayout_39->addWidget(pbReadI2);

        label_76 = new QLabel(gbInput);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setMinimumSize(QSize(30, 0));
        label_76->setMaximumSize(QSize(25, 16777215));
        label_76->setFont(font2);

        horizontalLayout_39->addWidget(label_76);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_19);

        lbI2Value = new QLabel(gbInput);
        lbI2Value->setObjectName(QString::fromUtf8("lbI2Value"));

        horizontalLayout_39->addWidget(lbI2Value);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_20);

        cbToggle2 = new QCheckBox(gbInput);
        cbToggle2->setObjectName(QString::fromUtf8("cbToggle2"));
        cbToggle2->setMinimumSize(QSize(110, 0));
        cbToggle2->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_39->addWidget(cbToggle2);

        horizontalSpacer_53 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_39->addItem(horizontalSpacer_53);


        verticalLayout_43->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        pbReadI3 = new QPushButton(gbInput);
        pbReadI3->setObjectName(QString::fromUtf8("pbReadI3"));
        pbReadI3->setMinimumSize(QSize(50, 0));

        horizontalLayout_40->addWidget(pbReadI3);

        label_78 = new QLabel(gbInput);
        label_78->setObjectName(QString::fromUtf8("label_78"));
        label_78->setMinimumSize(QSize(30, 0));
        label_78->setMaximumSize(QSize(25, 16777215));
        label_78->setFont(font2);

        horizontalLayout_40->addWidget(label_78);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_21);

        lbI3Value = new QLabel(gbInput);
        lbI3Value->setObjectName(QString::fromUtf8("lbI3Value"));

        horizontalLayout_40->addWidget(lbI3Value);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_22);

        cbToggle3 = new QCheckBox(gbInput);
        cbToggle3->setObjectName(QString::fromUtf8("cbToggle3"));
        cbToggle3->setMinimumSize(QSize(110, 0));
        cbToggle3->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_40->addWidget(cbToggle3);

        horizontalSpacer_54 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_40->addItem(horizontalSpacer_54);


        verticalLayout_43->addLayout(horizontalLayout_40);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        pbReadIx = new QPushButton(gbInput);
        pbReadIx->setObjectName(QString::fromUtf8("pbReadIx"));
        pbReadIx->setMinimumSize(QSize(50, 0));

        horizontalLayout_43->addWidget(pbReadIx);

        leIx = new QLineEdit(gbInput);
        leIx->setObjectName(QString::fromUtf8("leIx"));
        leIx->setMinimumSize(QSize(30, 0));
        leIx->setMaximumSize(QSize(25, 16777215));
        leIx->setFont(font2);

        horizontalLayout_43->addWidget(leIx);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_29);

        lbIxValue = new QLabel(gbInput);
        lbIxValue->setObjectName(QString::fromUtf8("lbIxValue"));

        horizontalLayout_43->addWidget(lbIxValue);

        horizontalSpacer_30 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_30);

        cbTogglex = new QCheckBox(gbInput);
        cbTogglex->setObjectName(QString::fromUtf8("cbTogglex"));
        cbTogglex->setMinimumSize(QSize(110, 0));
        cbTogglex->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_43->addWidget(cbTogglex);

        horizontalSpacer_57 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_43->addItem(horizontalSpacer_57);


        verticalLayout_43->addLayout(horizontalLayout_43);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName(QString::fromUtf8("horizontalLayout_45"));
        pbReadA0 = new QPushButton(gbInput);
        pbReadA0->setObjectName(QString::fromUtf8("pbReadA0"));
        pbReadA0->setMinimumSize(QSize(50, 0));

        horizontalLayout_45->addWidget(pbReadA0);

        label_83 = new QLabel(gbInput);
        label_83->setObjectName(QString::fromUtf8("label_83"));
        label_83->setMinimumSize(QSize(30, 0));
        label_83->setMaximumSize(QSize(25, 16777215));
        label_83->setFont(font2);

        horizontalLayout_45->addWidget(label_83);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_45->addItem(horizontalSpacer_34);

        lbA0Value = new QLabel(gbInput);
        lbA0Value->setObjectName(QString::fromUtf8("lbA0Value"));

        horizontalLayout_45->addWidget(lbA0Value);

        horizontalSpacer_35 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_45->addItem(horizontalSpacer_35);

        leA0Delay = new QLineEdit(gbInput);
        leA0Delay->setObjectName(QString::fromUtf8("leA0Delay"));
        leA0Delay->setMinimumSize(QSize(110, 0));
        leA0Delay->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_45->addWidget(leA0Delay);

        horizontalSpacer_58 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_45->addItem(horizontalSpacer_58);


        verticalLayout_43->addLayout(horizontalLayout_45);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        pbReadA1 = new QPushButton(gbInput);
        pbReadA1->setObjectName(QString::fromUtf8("pbReadA1"));
        pbReadA1->setMinimumSize(QSize(50, 0));

        horizontalLayout_46->addWidget(pbReadA1);

        label_85 = new QLabel(gbInput);
        label_85->setObjectName(QString::fromUtf8("label_85"));
        label_85->setMinimumSize(QSize(30, 0));
        label_85->setMaximumSize(QSize(25, 16777215));
        label_85->setFont(font2);

        horizontalLayout_46->addWidget(label_85);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_46->addItem(horizontalSpacer_36);

        lbA1Value = new QLabel(gbInput);
        lbA1Value->setObjectName(QString::fromUtf8("lbA1Value"));

        horizontalLayout_46->addWidget(lbA1Value);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_46->addItem(horizontalSpacer_37);

        leA1Delay = new QLineEdit(gbInput);
        leA1Delay->setObjectName(QString::fromUtf8("leA1Delay"));
        leA1Delay->setMinimumSize(QSize(110, 0));
        leA1Delay->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_46->addWidget(leA1Delay);

        horizontalSpacer_59 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_46->addItem(horizontalSpacer_59);


        verticalLayout_43->addLayout(horizontalLayout_46);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setSpacing(6);
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        pbReadAx = new QPushButton(gbInput);
        pbReadAx->setObjectName(QString::fromUtf8("pbReadAx"));
        pbReadAx->setMinimumSize(QSize(50, 0));

        horizontalLayout_47->addWidget(pbReadAx);

        leAx = new QLineEdit(gbInput);
        leAx->setObjectName(QString::fromUtf8("leAx"));
        leAx->setMinimumSize(QSize(30, 0));
        leAx->setMaximumSize(QSize(25, 16777215));
        leAx->setFont(font2);

        horizontalLayout_47->addWidget(leAx);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_38);

        lbAxValue = new QLabel(gbInput);
        lbAxValue->setObjectName(QString::fromUtf8("lbAxValue"));

        horizontalLayout_47->addWidget(lbAxValue);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_39);

        leAxDelay = new QLineEdit(gbInput);
        leAxDelay->setObjectName(QString::fromUtf8("leAxDelay"));
        leAxDelay->setMinimumSize(QSize(110, 0));
        leAxDelay->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_47->addWidget(leAxDelay);

        horizontalSpacer_60 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_47->addItem(horizontalSpacer_60);


        verticalLayout_43->addLayout(horizontalLayout_47);


        gridLayout_20->addWidget(gbInput, 0, 0, 1, 1);


        horizontalLayout_83->addWidget(fRobotPosition_4);


        verticalLayout_54->addWidget(frame_37);


        verticalLayout_5->addWidget(frame_36);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        scrollArea_2->setWidget(wgJoggingScrollWidget);

        verticalLayout_4->addWidget(scrollArea_2);

        twDevices->addTab(tRobot, QString());
        ConveyorTab = new QWidget();
        ConveyorTab->setObjectName(QString::fromUtf8("ConveyorTab"));
        ConveyorTab->setStyleSheet(QString::fromUtf8("QWidget#ConveyorTab\n"
"{\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
"QLabel\n"
"{	\n"
"	color: #D0D0D1;\n"
"}"));
        verticalLayout_22 = new QVBoxLayout(ConveyorTab);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        frame_38 = new QFrame(ConveyorTab);
        frame_38->setObjectName(QString::fromUtf8("frame_38"));
        frame_38->setMinimumSize(QSize(0, 100));
        frame_38->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}"));
        frame_38->setFrameShape(QFrame::StyledPanel);
        frame_38->setFrameShadow(QFrame::Raised);
        verticalLayout_55 = new QVBoxLayout(frame_38);
        verticalLayout_55->setSpacing(0);
        verticalLayout_55->setContentsMargins(11, 11, 11, 11);
        verticalLayout_55->setObjectName(QString::fromUtf8("verticalLayout_55"));
        verticalLayout_55->setContentsMargins(0, 0, 0, 0);
        robotTitile_7 = new QFrame(frame_38);
        robotTitile_7->setObjectName(QString::fromUtf8("robotTitile_7"));
        robotTitile_7->setMaximumSize(QSize(16777215, 40));
        robotTitile_7->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_7->setFrameShape(QFrame::StyledPanel);
        robotTitile_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_84 = new QHBoxLayout(robotTitile_7);
        horizontalLayout_84->setSpacing(6);
        horizontalLayout_84->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_84->setObjectName(QString::fromUtf8("horizontalLayout_84"));
        horizontalLayout_84->setContentsMargins(-1, 0, -1, 0);
        label = new QLabel(robotTitile_7);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_84->addWidget(label);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_84->addItem(horizontalSpacer_47);

        checkBox = new QCheckBox(robotTitile_7);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_84->addWidget(checkBox);

        pbConveyorConnect = new QPushButton(robotTitile_7);
        pbConveyorConnect->setObjectName(QString::fromUtf8("pbConveyorConnect"));
        sizePolicy.setHeightForWidth(pbConveyorConnect->sizePolicy().hasHeightForWidth());
        pbConveyorConnect->setSizePolicy(sizePolicy);
        pbConveyorConnect->setMinimumSize(QSize(0, 28));
        pbConveyorConnect->setMaximumSize(QSize(16777215, 16777215));
        pbConveyorConnect->setFont(font4);
        pbConveyorConnect->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3195EF;\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px;\n"
"}\n"
"QPushButton:hover\n"
"{	\n"
"	background-color: rgb(129, 129, 129);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{	\n"
"	background-color: rgb(81, 176, 255);\n"
"}\n"
""));
        pbConveyorConnect->setCheckable(true);

        horizontalLayout_84->addWidget(pbConveyorConnect);


        verticalLayout_55->addWidget(robotTitile_7);

        frame_39 = new QFrame(frame_38);
        frame_39->setObjectName(QString::fromUtf8("frame_39"));
        frame_39->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_39->setFrameShape(QFrame::StyledPanel);
        frame_39->setFrameShadow(QFrame::Raised);
        horizontalLayout_85 = new QHBoxLayout(frame_39);
        horizontalLayout_85->setSpacing(6);
        horizontalLayout_85->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_85->setObjectName(QString::fromUtf8("horizontalLayout_85"));
        cbSelectedConveyor = new QComboBox(frame_39);
        cbSelectedConveyor->addItem(QString());
        cbSelectedConveyor->addItem(QString());
        cbSelectedConveyor->addItem(QString());
        cbSelectedConveyor->addItem(QString());
        cbSelectedConveyor->setObjectName(QString::fromUtf8("cbSelectedConveyor"));
        sizePolicy5.setHeightForWidth(cbSelectedConveyor->sizePolicy().hasHeightForWidth());
        cbSelectedConveyor->setSizePolicy(sizePolicy5);
        cbSelectedConveyor->setMinimumSize(QSize(100, 0));

        horizontalLayout_85->addWidget(cbSelectedConveyor);

        horizontalSpacer_103 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_85->addItem(horizontalSpacer_103);

        groupBox_10 = new QGroupBox(frame_39);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_86 = new QHBoxLayout(groupBox_10);
        horizontalLayout_86->setSpacing(0);
        horizontalLayout_86->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_86->setObjectName(QString::fromUtf8("horizontalLayout_86"));
        horizontalLayout_86->setContentsMargins(-1, 15, -1, 0);
        lbConveyorCOMName = new QLabel(groupBox_10);
        lbConveyorCOMName->setObjectName(QString::fromUtf8("lbConveyorCOMName"));
        lbConveyorCOMName->setFont(font8);
        lbConveyorCOMName->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_86->addWidget(lbConveyorCOMName);


        horizontalLayout_85->addWidget(groupBox_10);

        groupBox_11 = new QGroupBox(frame_39);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        horizontalLayout_87 = new QHBoxLayout(groupBox_11);
        horizontalLayout_87->setSpacing(0);
        horizontalLayout_87->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_87->setObjectName(QString::fromUtf8("horizontalLayout_87"));
        horizontalLayout_87->setContentsMargins(6, 15, -1, 0);
        lbBaudrate_3 = new QLabel(groupBox_11);
        lbBaudrate_3->setObjectName(QString::fromUtf8("lbBaudrate_3"));
        lbBaudrate_3->setFont(font8);
        lbBaudrate_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_87->addWidget(lbBaudrate_3);


        horizontalLayout_85->addWidget(groupBox_11);


        verticalLayout_55->addWidget(frame_39);


        verticalLayout_22->addWidget(frame_38);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(6);
        horizontalLayout_48->setObjectName(QString::fromUtf8("horizontalLayout_48"));
        horizontalLayout_48->setContentsMargins(10, -1, -1, -1);

        verticalLayout_22->addLayout(horizontalLayout_48);

        robotTitile_9 = new QFrame(ConveyorTab);
        robotTitile_9->setObjectName(QString::fromUtf8("robotTitile_9"));
        robotTitile_9->setMaximumSize(QSize(16777215, 40));
        robotTitile_9->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_9->setFrameShape(QFrame::StyledPanel);
        robotTitile_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_94 = new QHBoxLayout(robotTitile_9);
        horizontalLayout_94->setSpacing(6);
        horizontalLayout_94->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_94->setObjectName(QString::fromUtf8("horizontalLayout_94"));
        label_8 = new QLabel(robotTitile_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_94->addWidget(label_8);

        cbConveyorType = new QComboBox(robotTitile_9);
        cbConveyorType->addItem(QString());
        cbConveyorType->addItem(QString());
        cbConveyorType->addItem(QString());
        cbConveyorType->setObjectName(QString::fromUtf8("cbConveyorType"));
        cbConveyorType->setMinimumSize(QSize(100, 0));

        horizontalLayout_94->addWidget(cbConveyorType);

        horizontalSpacer_106 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_94->addItem(horizontalSpacer_106);


        verticalLayout_22->addWidget(robotTitile_9);

        fConveyorX = new QFrame(ConveyorTab);
        fConveyorX->setObjectName(QString::fromUtf8("fConveyorX"));
        fConveyorX->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}"));
        gridLayout_7 = new QGridLayout(fConveyorX);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setHorizontalSpacing(20);
        gridLayout_7->setVerticalSpacing(10);
        gridLayout_7->setContentsMargins(10, 10, 10, 10);
        leConveyorXPosition = new QLineEdit(fConveyorX);
        leConveyorXPosition->setObjectName(QString::fromUtf8("leConveyorXPosition"));
        leConveyorXPosition->setMinimumSize(QSize(0, 30));
        leConveyorXPosition->setMaximumSize(QSize(200, 16777215));
        QFont font15;
        font15.setPointSize(11);
        font15.setBold(false);
        font15.setKerning(true);
        leConveyorXPosition->setFont(font15);

        gridLayout_7->addWidget(leConveyorXPosition, 4, 1, 1, 1);

        label_12 = new QLabel(fConveyorX);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_12, 4, 0, 1, 1);

        label_52 = new QLabel(fConveyorX);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_52, 1, 0, 1, 1);

        label_57 = new QLabel(fConveyorX);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_57, 3, 0, 1, 1);

        cbConveyorMode = new QComboBox(fConveyorX);
        cbConveyorMode->addItem(QString());
        cbConveyorMode->addItem(QString());
        cbConveyorMode->setObjectName(QString::fromUtf8("cbConveyorMode"));
        cbConveyorMode->setMinimumSize(QSize(0, 30));
        cbConveyorMode->setMaximumSize(QSize(200, 16777215));
        cbConveyorMode->setFont(font15);

        gridLayout_7->addWidget(cbConveyorMode, 1, 1, 1, 1);

        cbConveyorValueType = new QComboBox(fConveyorX);
        cbConveyorValueType->addItem(QString());
        cbConveyorValueType->addItem(QString());
        cbConveyorValueType->setObjectName(QString::fromUtf8("cbConveyorValueType"));
        cbConveyorValueType->setMinimumSize(QSize(0, 30));
        cbConveyorValueType->setMaximumSize(QSize(200, 16777215));
        cbConveyorValueType->setFont(font15);
        cbConveyorValueType->setStyleSheet(QString::fromUtf8(""));

        gridLayout_7->addWidget(cbConveyorValueType, 2, 1, 1, 1);

        lbUnitOfConveyorMoving = new QLabel(fConveyorX);
        lbUnitOfConveyorMoving->setObjectName(QString::fromUtf8("lbUnitOfConveyorMoving"));
        lbUnitOfConveyorMoving->setEnabled(false);
        lbUnitOfConveyorMoving->setFont(font5);

        gridLayout_7->addWidget(lbUnitOfConveyorMoving, 4, 2, 1, 1);

        lbSpeedOfPositionMode = new QLabel(fConveyorX);
        lbSpeedOfPositionMode->setObjectName(QString::fromUtf8("lbSpeedOfPositionMode"));
        lbSpeedOfPositionMode->setEnabled(false);
        lbSpeedOfPositionMode->setFont(font5);

        gridLayout_7->addWidget(lbSpeedOfPositionMode, 3, 2, 1, 1);

        leConveyorXSpeed = new QLineEdit(fConveyorX);
        leConveyorXSpeed->setObjectName(QString::fromUtf8("leConveyorXSpeed"));
        leConveyorXSpeed->setEnabled(true);
        leConveyorXSpeed->setMinimumSize(QSize(0, 30));
        leConveyorXSpeed->setMaximumSize(QSize(200, 16777215));
        leConveyorXSpeed->setFont(font15);
        leConveyorXSpeed->setClearButtonEnabled(false);

        gridLayout_7->addWidget(leConveyorXSpeed, 3, 1, 1, 1);

        label_46 = new QLabel(fConveyorX);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_46, 2, 0, 1, 1);


        verticalLayout_22->addWidget(fConveyorX);

        fConveyorXHub = new QFrame(ConveyorTab);
        fConveyorXHub->setObjectName(QString::fromUtf8("fConveyorXHub"));
        fConveyorXHub->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}"));
        gridLayout_18 = new QGridLayout(fConveyorXHub);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        gridLayout_18->setHorizontalSpacing(20);
        gridLayout_18->setVerticalSpacing(10);
        gridLayout_18->setContentsMargins(10, 10, 10, 10);
        label_77 = new QLabel(fConveyorXHub);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_18->addWidget(label_77, 4, 0, 1, 1);

        leSubConveyor1Position = new QLineEdit(fConveyorXHub);
        leSubConveyor1Position->setObjectName(QString::fromUtf8("leSubConveyor1Position"));
        leSubConveyor1Position->setEnabled(true);
        leSubConveyor1Position->setMinimumSize(QSize(0, 30));
        leSubConveyor1Position->setMaximumSize(QSize(200, 16777215));
        leSubConveyor1Position->setFont(font15);
        leSubConveyor1Position->setClearButtonEnabled(false);

        gridLayout_18->addWidget(leSubConveyor1Position, 4, 1, 1, 1);

        label_115 = new QLabel(fConveyorXHub);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_18->addWidget(label_115, 1, 0, 1, 1);

        label_114 = new QLabel(fConveyorXHub);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_114, 0, 3, 1, 1);

        cbSubConveyor2Mode = new QComboBox(fConveyorXHub);
        cbSubConveyor2Mode->addItem(QString());
        cbSubConveyor2Mode->addItem(QString());
        cbSubConveyor2Mode->setObjectName(QString::fromUtf8("cbSubConveyor2Mode"));
        cbSubConveyor2Mode->setMinimumSize(QSize(0, 30));
        cbSubConveyor2Mode->setMaximumSize(QSize(200, 16777215));
        cbSubConveyor2Mode->setFont(font15);
        cbSubConveyor2Mode->setStyleSheet(QString::fromUtf8(""));

        gridLayout_18->addWidget(cbSubConveyor2Mode, 1, 2, 1, 1);

        leSubConveyor1Speed = new QLineEdit(fConveyorXHub);
        leSubConveyor1Speed->setObjectName(QString::fromUtf8("leSubConveyor1Speed"));
        leSubConveyor1Speed->setMinimumSize(QSize(0, 30));
        leSubConveyor1Speed->setMaximumSize(QSize(200, 16777215));
        leSubConveyor1Speed->setFont(font15);

        gridLayout_18->addWidget(leSubConveyor1Speed, 3, 1, 1, 1);

        label_75 = new QLabel(fConveyorXHub);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_75, 0, 1, 1, 1);

        label_82 = new QLabel(fConveyorXHub);
        label_82->setObjectName(QString::fromUtf8("label_82"));
        label_82->setAlignment(Qt::AlignCenter);

        gridLayout_18->addWidget(label_82, 0, 2, 1, 1);

        leSubConveyor2Position = new QLineEdit(fConveyorXHub);
        leSubConveyor2Position->setObjectName(QString::fromUtf8("leSubConveyor2Position"));
        leSubConveyor2Position->setEnabled(true);
        leSubConveyor2Position->setMinimumSize(QSize(0, 30));
        leSubConveyor2Position->setMaximumSize(QSize(200, 16777215));
        leSubConveyor2Position->setFont(font15);
        leSubConveyor2Position->setClearButtonEnabled(false);

        gridLayout_18->addWidget(leSubConveyor2Position, 4, 2, 1, 1);

        leSubConveyor2Speed = new QLineEdit(fConveyorXHub);
        leSubConveyor2Speed->setObjectName(QString::fromUtf8("leSubConveyor2Speed"));
        leSubConveyor2Speed->setEnabled(true);
        leSubConveyor2Speed->setMinimumSize(QSize(0, 30));
        leSubConveyor2Speed->setMaximumSize(QSize(200, 16777215));
        leSubConveyor2Speed->setFont(font15);
        leSubConveyor2Speed->setClearButtonEnabled(false);

        gridLayout_18->addWidget(leSubConveyor2Speed, 3, 2, 1, 1);

        cbSubConveyor3Mode = new QComboBox(fConveyorXHub);
        cbSubConveyor3Mode->addItem(QString());
        cbSubConveyor3Mode->addItem(QString());
        cbSubConveyor3Mode->setObjectName(QString::fromUtf8("cbSubConveyor3Mode"));
        cbSubConveyor3Mode->setMinimumSize(QSize(0, 30));
        cbSubConveyor3Mode->setMaximumSize(QSize(200, 16777215));
        cbSubConveyor3Mode->setFont(font15);
        cbSubConveyor3Mode->setStyleSheet(QString::fromUtf8(""));

        gridLayout_18->addWidget(cbSubConveyor3Mode, 1, 3, 1, 1);

        leSubConveyor3Speed = new QLineEdit(fConveyorXHub);
        leSubConveyor3Speed->setObjectName(QString::fromUtf8("leSubConveyor3Speed"));
        leSubConveyor3Speed->setEnabled(true);
        leSubConveyor3Speed->setMinimumSize(QSize(0, 30));
        leSubConveyor3Speed->setMaximumSize(QSize(200, 16777215));
        leSubConveyor3Speed->setFont(font15);
        leSubConveyor3Speed->setClearButtonEnabled(false);

        gridLayout_18->addWidget(leSubConveyor3Speed, 3, 3, 1, 1);

        cbSubConveyor1Mode = new QComboBox(fConveyorXHub);
        cbSubConveyor1Mode->addItem(QString());
        cbSubConveyor1Mode->addItem(QString());
        cbSubConveyor1Mode->setObjectName(QString::fromUtf8("cbSubConveyor1Mode"));
        cbSubConveyor1Mode->setMinimumSize(QSize(0, 30));
        cbSubConveyor1Mode->setMaximumSize(QSize(200, 16777215));
        cbSubConveyor1Mode->setFont(font15);
        cbSubConveyor1Mode->setStyleSheet(QString::fromUtf8(""));

        gridLayout_18->addWidget(cbSubConveyor1Mode, 1, 1, 1, 1);

        label_80 = new QLabel(fConveyorXHub);
        label_80->setObjectName(QString::fromUtf8("label_80"));
        label_80->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_18->addWidget(label_80, 3, 0, 1, 1);

        leSubConveyor3Position = new QLineEdit(fConveyorXHub);
        leSubConveyor3Position->setObjectName(QString::fromUtf8("leSubConveyor3Position"));
        leSubConveyor3Position->setEnabled(true);
        leSubConveyor3Position->setMinimumSize(QSize(0, 30));
        leSubConveyor3Position->setMaximumSize(QSize(200, 16777215));
        leSubConveyor3Position->setFont(font15);
        leSubConveyor3Position->setClearButtonEnabled(false);

        gridLayout_18->addWidget(leSubConveyor3Position, 4, 3, 1, 1);


        verticalLayout_22->addWidget(fConveyorXHub);

        fConveyorCustom = new QFrame(ConveyorTab);
        fConveyorCustom->setObjectName(QString::fromUtf8("fConveyorCustom"));
        fConveyorCustom->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}"));
        gridLayout_39 = new QGridLayout(fConveyorCustom);
        gridLayout_39->setSpacing(6);
        gridLayout_39->setContentsMargins(11, 11, 11, 11);
        gridLayout_39->setObjectName(QString::fromUtf8("gridLayout_39"));
        gridLayout_39->setHorizontalSpacing(20);
        gridLayout_39->setVerticalSpacing(10);
        gridLayout_39->setContentsMargins(10, 10, 10, 10);
        pbStopCustomConveyor2Command = new QLineEdit(fConveyorCustom);
        pbStopCustomConveyor2Command->setObjectName(QString::fromUtf8("pbStopCustomConveyor2Command"));
        pbStopCustomConveyor2Command->setEnabled(true);
        pbStopCustomConveyor2Command->setMinimumSize(QSize(0, 30));
        pbStopCustomConveyor2Command->setMaximumSize(QSize(200, 16777215));
        pbStopCustomConveyor2Command->setFont(font15);
        pbStopCustomConveyor2Command->setClearButtonEnabled(false);

        gridLayout_39->addWidget(pbStopCustomConveyor2Command, 4, 1, 1, 1);

        pbStartCustomConveyor3 = new QPushButton(fConveyorCustom);
        pbStartCustomConveyor3->setObjectName(QString::fromUtf8("pbStartCustomConveyor3"));
        pbStartCustomConveyor3->setMinimumSize(QSize(0, 30));

        gridLayout_39->addWidget(pbStartCustomConveyor3, 1, 2, 1, 1);

        pbStopCustomConveyor3 = new QPushButton(fConveyorCustom);
        pbStopCustomConveyor3->setObjectName(QString::fromUtf8("pbStopCustomConveyor3"));
        pbStopCustomConveyor3->setMinimumSize(QSize(0, 30));

        gridLayout_39->addWidget(pbStopCustomConveyor3, 3, 2, 1, 1);

        label_147 = new QLabel(fConveyorCustom);
        label_147->setObjectName(QString::fromUtf8("label_147"));
        label_147->setAlignment(Qt::AlignCenter);

        gridLayout_39->addWidget(label_147, 0, 2, 1, 1);

        pbStartCustomConveyor2Command = new QLineEdit(fConveyorCustom);
        pbStartCustomConveyor2Command->setObjectName(QString::fromUtf8("pbStartCustomConveyor2Command"));
        pbStartCustomConveyor2Command->setEnabled(true);
        pbStartCustomConveyor2Command->setMinimumSize(QSize(0, 30));
        pbStartCustomConveyor2Command->setMaximumSize(QSize(200, 16777215));
        pbStartCustomConveyor2Command->setFont(font15);
        pbStartCustomConveyor2Command->setClearButtonEnabled(false);

        gridLayout_39->addWidget(pbStartCustomConveyor2Command, 2, 1, 1, 1);

        pbStopCustomConveyor2 = new QPushButton(fConveyorCustom);
        pbStopCustomConveyor2->setObjectName(QString::fromUtf8("pbStopCustomConveyor2"));
        pbStopCustomConveyor2->setMinimumSize(QSize(0, 30));

        gridLayout_39->addWidget(pbStopCustomConveyor2, 3, 1, 1, 1);

        pbStopCustomConveyor3Command = new QLineEdit(fConveyorCustom);
        pbStopCustomConveyor3Command->setObjectName(QString::fromUtf8("pbStopCustomConveyor3Command"));
        pbStopCustomConveyor3Command->setEnabled(true);
        pbStopCustomConveyor3Command->setMinimumSize(QSize(0, 30));
        pbStopCustomConveyor3Command->setMaximumSize(QSize(200, 16777215));
        pbStopCustomConveyor3Command->setFont(font15);
        pbStopCustomConveyor3Command->setClearButtonEnabled(false);

        gridLayout_39->addWidget(pbStopCustomConveyor3Command, 4, 2, 1, 1);

        label_153 = new QLabel(fConveyorCustom);
        label_153->setObjectName(QString::fromUtf8("label_153"));
        label_153->setAlignment(Qt::AlignCenter);

        gridLayout_39->addWidget(label_153, 0, 0, 1, 1);

        pbStartCustomConveyor1 = new QPushButton(fConveyorCustom);
        pbStartCustomConveyor1->setObjectName(QString::fromUtf8("pbStartCustomConveyor1"));
        pbStartCustomConveyor1->setMinimumSize(QSize(0, 30));

        gridLayout_39->addWidget(pbStartCustomConveyor1, 1, 0, 1, 1);

        pbStopCustomConveyor1 = new QPushButton(fConveyorCustom);
        pbStopCustomConveyor1->setObjectName(QString::fromUtf8("pbStopCustomConveyor1"));
        pbStopCustomConveyor1->setMinimumSize(QSize(0, 30));

        gridLayout_39->addWidget(pbStopCustomConveyor1, 3, 0, 1, 1);

        pbStopCustomConveyor1Command = new QLineEdit(fConveyorCustom);
        pbStopCustomConveyor1Command->setObjectName(QString::fromUtf8("pbStopCustomConveyor1Command"));
        pbStopCustomConveyor1Command->setEnabled(true);
        pbStopCustomConveyor1Command->setMinimumSize(QSize(0, 30));
        pbStopCustomConveyor1Command->setMaximumSize(QSize(200, 16777215));
        pbStopCustomConveyor1Command->setFont(font15);
        pbStopCustomConveyor1Command->setClearButtonEnabled(false);

        gridLayout_39->addWidget(pbStopCustomConveyor1Command, 4, 0, 1, 1);

        pbStartCustomConveyor1Command = new QLineEdit(fConveyorCustom);
        pbStartCustomConveyor1Command->setObjectName(QString::fromUtf8("pbStartCustomConveyor1Command"));
        pbStartCustomConveyor1Command->setMinimumSize(QSize(0, 30));
        pbStartCustomConveyor1Command->setMaximumSize(QSize(200, 16777215));
        pbStartCustomConveyor1Command->setFont(font15);

        gridLayout_39->addWidget(pbStartCustomConveyor1Command, 2, 0, 1, 1);

        pbStartCustomConveyor2 = new QPushButton(fConveyorCustom);
        pbStartCustomConveyor2->setObjectName(QString::fromUtf8("pbStartCustomConveyor2"));
        pbStartCustomConveyor2->setMinimumSize(QSize(0, 30));

        gridLayout_39->addWidget(pbStartCustomConveyor2, 1, 1, 1, 1);

        pbStartCustomConveyor3Command = new QLineEdit(fConveyorCustom);
        pbStartCustomConveyor3Command->setObjectName(QString::fromUtf8("pbStartCustomConveyor3Command"));
        pbStartCustomConveyor3Command->setEnabled(true);
        pbStartCustomConveyor3Command->setMinimumSize(QSize(0, 30));
        pbStartCustomConveyor3Command->setMaximumSize(QSize(200, 16777215));
        pbStartCustomConveyor3Command->setFont(font15);
        pbStartCustomConveyor3Command->setClearButtonEnabled(false);

        gridLayout_39->addWidget(pbStartCustomConveyor3Command, 2, 2, 1, 1);

        label_154 = new QLabel(fConveyorCustom);
        label_154->setObjectName(QString::fromUtf8("label_154"));
        label_154->setAlignment(Qt::AlignCenter);

        gridLayout_39->addWidget(label_154, 0, 1, 1, 1);


        verticalLayout_22->addWidget(fConveyorCustom);

        verticalSpacer_2 = new QSpacerItem(20, 304, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_2);

        twDevices->addTab(ConveyorTab, QString());
        EncoderTab = new QWidget();
        EncoderTab->setObjectName(QString::fromUtf8("EncoderTab"));
        EncoderTab->setStyleSheet(QString::fromUtf8("QWidget#EncoderTab\n"
"{\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
"QLabel\n"
"{	\n"
"	color: #D0D0D1;\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(EncoderTab);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        frame_40 = new QFrame(EncoderTab);
        frame_40->setObjectName(QString::fromUtf8("frame_40"));
        frame_40->setMinimumSize(QSize(0, 100));
        frame_40->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}"));
        frame_40->setFrameShape(QFrame::StyledPanel);
        frame_40->setFrameShadow(QFrame::Raised);
        verticalLayout_76 = new QVBoxLayout(frame_40);
        verticalLayout_76->setSpacing(0);
        verticalLayout_76->setContentsMargins(11, 11, 11, 11);
        verticalLayout_76->setObjectName(QString::fromUtf8("verticalLayout_76"));
        verticalLayout_76->setContentsMargins(0, 0, 0, 0);
        robotTitile_10 = new QFrame(frame_40);
        robotTitile_10->setObjectName(QString::fromUtf8("robotTitile_10"));
        robotTitile_10->setMaximumSize(QSize(16777215, 40));
        robotTitile_10->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_10->setFrameShape(QFrame::StyledPanel);
        robotTitile_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_88 = new QHBoxLayout(robotTitile_10);
        horizontalLayout_88->setSpacing(6);
        horizontalLayout_88->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_88->setObjectName(QString::fromUtf8("horizontalLayout_88"));
        horizontalLayout_88->setContentsMargins(-1, 0, -1, 0);
        label_9 = new QLabel(robotTitile_10);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_88->addWidget(label_9);

        horizontalSpacer_107 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_88->addItem(horizontalSpacer_107);

        checkBox_3 = new QCheckBox(robotTitile_10);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_88->addWidget(checkBox_3);

        pbConnectEncoder = new QPushButton(robotTitile_10);
        pbConnectEncoder->setObjectName(QString::fromUtf8("pbConnectEncoder"));
        sizePolicy.setHeightForWidth(pbConnectEncoder->sizePolicy().hasHeightForWidth());
        pbConnectEncoder->setSizePolicy(sizePolicy);
        pbConnectEncoder->setMinimumSize(QSize(0, 28));
        pbConnectEncoder->setMaximumSize(QSize(16777215, 16777215));
        pbConnectEncoder->setFont(font4);
        pbConnectEncoder->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3195EF;\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px;\n"
"}\n"
"QPushButton:hover\n"
"{	\n"
"	background-color: rgb(129, 129, 129);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{	\n"
"	background-color: rgb(81, 176, 255);\n"
"}\n"
""));
        pbConnectEncoder->setCheckable(true);

        horizontalLayout_88->addWidget(pbConnectEncoder);


        verticalLayout_76->addWidget(robotTitile_10);

        frame_42 = new QFrame(frame_40);
        frame_42->setObjectName(QString::fromUtf8("frame_42"));
        frame_42->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_42->setFrameShape(QFrame::StyledPanel);
        frame_42->setFrameShadow(QFrame::Raised);
        horizontalLayout_95 = new QHBoxLayout(frame_42);
        horizontalLayout_95->setSpacing(6);
        horizontalLayout_95->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_95->setObjectName(QString::fromUtf8("horizontalLayout_95"));
        cbSelectedEncoder = new QComboBox(frame_42);
        cbSelectedEncoder->addItem(QString());
        cbSelectedEncoder->addItem(QString());
        cbSelectedEncoder->addItem(QString());
        cbSelectedEncoder->addItem(QString());
        cbSelectedEncoder->setObjectName(QString::fromUtf8("cbSelectedEncoder"));
        sizePolicy5.setHeightForWidth(cbSelectedEncoder->sizePolicy().hasHeightForWidth());
        cbSelectedEncoder->setSizePolicy(sizePolicy5);
        cbSelectedEncoder->setMinimumSize(QSize(100, 0));

        horizontalLayout_95->addWidget(cbSelectedEncoder);

        horizontalSpacer_108 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_95->addItem(horizontalSpacer_108);

        groupBox_12 = new QGroupBox(frame_42);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        horizontalLayout_96 = new QHBoxLayout(groupBox_12);
        horizontalLayout_96->setSpacing(0);
        horizontalLayout_96->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_96->setObjectName(QString::fromUtf8("horizontalLayout_96"));
        horizontalLayout_96->setContentsMargins(-1, 15, -1, 0);
        lbEncoderCOMname = new QLabel(groupBox_12);
        lbEncoderCOMname->setObjectName(QString::fromUtf8("lbEncoderCOMname"));
        lbEncoderCOMname->setFont(font8);
        lbEncoderCOMname->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_96->addWidget(lbEncoderCOMname);


        horizontalLayout_95->addWidget(groupBox_12);

        groupBox_16 = new QGroupBox(frame_42);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        horizontalLayout_97 = new QHBoxLayout(groupBox_16);
        horizontalLayout_97->setSpacing(0);
        horizontalLayout_97->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_97->setObjectName(QString::fromUtf8("horizontalLayout_97"));
        horizontalLayout_97->setContentsMargins(6, 15, -1, 0);
        lbBaudrate_5 = new QLabel(groupBox_16);
        lbBaudrate_5->setObjectName(QString::fromUtf8("lbBaudrate_5"));
        lbBaudrate_5->setFont(font8);
        lbBaudrate_5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_97->addWidget(lbBaudrate_5);


        horizontalLayout_95->addWidget(groupBox_16);


        verticalLayout_76->addWidget(frame_42);


        verticalLayout_8->addWidget(frame_40);

        frame_43 = new QFrame(EncoderTab);
        frame_43->setObjectName(QString::fromUtf8("frame_43"));
        frame_43->setMinimumSize(QSize(0, 100));
        frame_43->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}"));
        frame_43->setFrameShape(QFrame::StyledPanel);
        frame_43->setFrameShadow(QFrame::Raised);
        verticalLayout_77 = new QVBoxLayout(frame_43);
        verticalLayout_77->setSpacing(0);
        verticalLayout_77->setContentsMargins(11, 11, 11, 11);
        verticalLayout_77->setObjectName(QString::fromUtf8("verticalLayout_77"));
        verticalLayout_77->setContentsMargins(0, 0, 0, 0);
        robotTitile_11 = new QFrame(frame_43);
        robotTitile_11->setObjectName(QString::fromUtf8("robotTitile_11"));
        robotTitile_11->setMaximumSize(QSize(16777215, 40));
        robotTitile_11->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_11->setFrameShape(QFrame::StyledPanel);
        robotTitile_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_98 = new QHBoxLayout(robotTitile_11);
        horizontalLayout_98->setSpacing(6);
        horizontalLayout_98->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_98->setObjectName(QString::fromUtf8("horizontalLayout_98"));
        label_124 = new QLabel(robotTitile_11);
        label_124->setObjectName(QString::fromUtf8("label_124"));

        horizontalLayout_98->addWidget(label_124);

        cbEncoderType = new QComboBox(robotTitile_11);
        cbEncoderType->addItem(QString());
        cbEncoderType->addItem(QString());
        cbEncoderType->addItem(QString());
        cbEncoderType->setObjectName(QString::fromUtf8("cbEncoderType"));
        sizePolicy.setHeightForWidth(cbEncoderType->sizePolicy().hasHeightForWidth());
        cbEncoderType->setSizePolicy(sizePolicy);
        cbEncoderType->setMinimumSize(QSize(100, 0));

        horizontalLayout_98->addWidget(cbEncoderType);

        horizontalSpacer_109 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_98->addItem(horizontalSpacer_109);

        cbEncoderActive = new QCheckBox(robotTitile_11);
        cbEncoderActive->setObjectName(QString::fromUtf8("cbEncoderActive"));
        cbEncoderActive->setChecked(true);

        horizontalLayout_98->addWidget(cbEncoderActive);


        verticalLayout_77->addWidget(robotTitile_11);

        frame_44 = new QFrame(frame_43);
        frame_44->setObjectName(QString::fromUtf8("frame_44"));
        frame_44->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_44->setFrameShape(QFrame::StyledPanel);
        frame_44->setFrameShadow(QFrame::Raised);
        horizontalLayout_99 = new QHBoxLayout(frame_44);
        horizontalLayout_99->setSpacing(6);
        horizontalLayout_99->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_99->setObjectName(QString::fromUtf8("horizontalLayout_99"));
        gridLayout_21 = new QGridLayout();
        gridLayout_21->setSpacing(10);
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        gridLayout_21->setContentsMargins(10, -1, -1, -1);
        leEncoderCurrentPosition = new QLineEdit(frame_44);
        leEncoderCurrentPosition->setObjectName(QString::fromUtf8("leEncoderCurrentPosition"));
        sizePolicy.setHeightForWidth(leEncoderCurrentPosition->sizePolicy().hasHeightForWidth());
        leEncoderCurrentPosition->setSizePolicy(sizePolicy);

        gridLayout_21->addWidget(leEncoderCurrentPosition, 4, 1, 1, 1);

        pbSetEncoderInterval = new QPushButton(frame_44);
        pbSetEncoderInterval->setObjectName(QString::fromUtf8("pbSetEncoderInterval"));
        QSizePolicy sizePolicy24(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy24.setHorizontalStretch(0);
        sizePolicy24.setVerticalStretch(0);
        sizePolicy24.setHeightForWidth(pbSetEncoderInterval->sizePolicy().hasHeightForWidth());
        pbSetEncoderInterval->setSizePolicy(sizePolicy24);

        gridLayout_21->addWidget(pbSetEncoderInterval, 2, 2, 1, 1);

        label_129 = new QLabel(frame_44);
        label_129->setObjectName(QString::fromUtf8("label_129"));

        gridLayout_21->addWidget(label_129, 3, 0, 1, 1);

        leEncoderInterval = new QLineEdit(frame_44);
        leEncoderInterval->setObjectName(QString::fromUtf8("leEncoderInterval"));
        sizePolicy.setHeightForWidth(leEncoderInterval->sizePolicy().hasHeightForWidth());
        leEncoderInterval->setSizePolicy(sizePolicy);

        gridLayout_21->addWidget(leEncoderInterval, 2, 1, 1, 1);

        label_125 = new QLabel(frame_44);
        label_125->setObjectName(QString::fromUtf8("label_125"));

        gridLayout_21->addWidget(label_125, 2, 0, 1, 1);

        pbResetEncoder = new QPushButton(frame_44);
        pbResetEncoder->setObjectName(QString::fromUtf8("pbResetEncoder"));
        sizePolicy8.setHeightForWidth(pbResetEncoder->sizePolicy().hasHeightForWidth());
        pbResetEncoder->setSizePolicy(sizePolicy8);

        gridLayout_21->addWidget(pbResetEncoder, 4, 3, 1, 1);

        pbSetEncoderVelocity = new QPushButton(frame_44);
        pbSetEncoderVelocity->setObjectName(QString::fromUtf8("pbSetEncoderVelocity"));
        sizePolicy6.setHeightForWidth(pbSetEncoderVelocity->sizePolicy().hasHeightForWidth());
        pbSetEncoderVelocity->setSizePolicy(sizePolicy6);

        gridLayout_21->addWidget(pbSetEncoderVelocity, 3, 2, 1, 1);

        label_130 = new QLabel(frame_44);
        label_130->setObjectName(QString::fromUtf8("label_130"));

        gridLayout_21->addWidget(label_130, 4, 0, 1, 1);

        leEncoderVelocity = new QLineEdit(frame_44);
        leEncoderVelocity->setObjectName(QString::fromUtf8("leEncoderVelocity"));
        sizePolicy.setHeightForWidth(leEncoderVelocity->sizePolicy().hasHeightForWidth());
        leEncoderVelocity->setSizePolicy(sizePolicy);

        gridLayout_21->addWidget(leEncoderVelocity, 3, 1, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer_23, 2, 4, 1, 1);

        pbReadEncoder = new QPushButton(frame_44);
        pbReadEncoder->setObjectName(QString::fromUtf8("pbReadEncoder"));
        sizePolicy6.setHeightForWidth(pbReadEncoder->sizePolicy().hasHeightForWidth());
        pbReadEncoder->setSizePolicy(sizePolicy6);

        gridLayout_21->addWidget(pbReadEncoder, 4, 2, 1, 1);

        cbConveyorForVirtualEncoder = new QComboBox(frame_44);
        cbConveyorForVirtualEncoder->addItem(QString());
        cbConveyorForVirtualEncoder->addItem(QString());
        cbConveyorForVirtualEncoder->addItem(QString());
        cbConveyorForVirtualEncoder->setObjectName(QString::fromUtf8("cbConveyorForVirtualEncoder"));
        sizePolicy.setHeightForWidth(cbConveyorForVirtualEncoder->sizePolicy().hasHeightForWidth());
        cbConveyorForVirtualEncoder->setSizePolicy(sizePolicy);
        cbConveyorForVirtualEncoder->setMinimumSize(QSize(100, 0));

        gridLayout_21->addWidget(cbConveyorForVirtualEncoder, 0, 1, 1, 1);

        cbLinkToConveyorX = new QCheckBox(frame_44);
        cbLinkToConveyorX->setObjectName(QString::fromUtf8("cbLinkToConveyorX"));
        cbLinkToConveyorX->setChecked(true);

        gridLayout_21->addWidget(cbLinkToConveyorX, 0, 0, 1, 1);


        horizontalLayout_99->addLayout(gridLayout_21);


        verticalLayout_77->addWidget(frame_44);


        verticalLayout_8->addWidget(frame_43);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_8->addItem(horizontalSpacer);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_14);

        twDevices->addTab(EncoderTab, QString());
        SliderTab = new QWidget();
        SliderTab->setObjectName(QString::fromUtf8("SliderTab"));
        SliderTab->setStyleSheet(QString::fromUtf8("QWidget#SliderTab\n"
"{\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
"QLabel\n"
"{	\n"
"	border: none;\n"
"	color: #D0D0D1;\n"
"}"));
        verticalLayout_23 = new QVBoxLayout(SliderTab);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        frame_45 = new QFrame(SliderTab);
        frame_45->setObjectName(QString::fromUtf8("frame_45"));
        frame_45->setMinimumSize(QSize(0, 100));
        frame_45->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}"));
        frame_45->setFrameShape(QFrame::StyledPanel);
        frame_45->setFrameShadow(QFrame::Raised);
        verticalLayout_79 = new QVBoxLayout(frame_45);
        verticalLayout_79->setSpacing(0);
        verticalLayout_79->setContentsMargins(11, 11, 11, 11);
        verticalLayout_79->setObjectName(QString::fromUtf8("verticalLayout_79"));
        verticalLayout_79->setContentsMargins(0, 0, 0, 0);
        robotTitile_13 = new QFrame(frame_45);
        robotTitile_13->setObjectName(QString::fromUtf8("robotTitile_13"));
        robotTitile_13->setMaximumSize(QSize(16777215, 40));
        robotTitile_13->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_13->setFrameShape(QFrame::StyledPanel);
        robotTitile_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_105 = new QHBoxLayout(robotTitile_13);
        horizontalLayout_105->setSpacing(6);
        horizontalLayout_105->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_105->setObjectName(QString::fromUtf8("horizontalLayout_105"));
        horizontalLayout_105->setContentsMargins(-1, 0, -1, 0);
        label_15 = new QLabel(robotTitile_13);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_105->addWidget(label_15);

        horizontalSpacer_113 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_105->addItem(horizontalSpacer_113);

        checkBox_5 = new QCheckBox(robotTitile_13);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        horizontalLayout_105->addWidget(checkBox_5);

        pbSlidingConnect = new QPushButton(robotTitile_13);
        pbSlidingConnect->setObjectName(QString::fromUtf8("pbSlidingConnect"));
        sizePolicy.setHeightForWidth(pbSlidingConnect->sizePolicy().hasHeightForWidth());
        pbSlidingConnect->setSizePolicy(sizePolicy);
        pbSlidingConnect->setMinimumSize(QSize(0, 0));
        pbSlidingConnect->setMaximumSize(QSize(16777215, 16777215));
        pbSlidingConnect->setFont(font4);
        pbSlidingConnect->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3195EF;\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px;\n"
"}\n"
"QPushButton:hover\n"
"{	\n"
"	background-color: rgb(129, 129, 129);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{	\n"
"	background-color: rgb(81, 176, 255);\n"
"}\n"
""));
        pbSlidingConnect->setCheckable(true);

        horizontalLayout_105->addWidget(pbSlidingConnect);


        verticalLayout_79->addWidget(robotTitile_13);

        frame_46 = new QFrame(frame_45);
        frame_46->setObjectName(QString::fromUtf8("frame_46"));
        frame_46->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_46->setFrameShape(QFrame::StyledPanel);
        frame_46->setFrameShadow(QFrame::Raised);
        horizontalLayout_106 = new QHBoxLayout(frame_46);
        horizontalLayout_106->setSpacing(6);
        horizontalLayout_106->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_106->setObjectName(QString::fromUtf8("horizontalLayout_106"));
        cbSelectedSlider = new QComboBox(frame_46);
        cbSelectedSlider->addItem(QString());
        cbSelectedSlider->addItem(QString());
        cbSelectedSlider->addItem(QString());
        cbSelectedSlider->addItem(QString());
        cbSelectedSlider->setObjectName(QString::fromUtf8("cbSelectedSlider"));
        sizePolicy5.setHeightForWidth(cbSelectedSlider->sizePolicy().hasHeightForWidth());
        cbSelectedSlider->setSizePolicy(sizePolicy5);
        cbSelectedSlider->setMinimumSize(QSize(100, 0));

        horizontalLayout_106->addWidget(cbSelectedSlider);

        horizontalSpacer_114 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_106->addItem(horizontalSpacer_114);

        groupBox_19 = new QGroupBox(frame_46);
        groupBox_19->setObjectName(QString::fromUtf8("groupBox_19"));
        horizontalLayout_107 = new QHBoxLayout(groupBox_19);
        horizontalLayout_107->setSpacing(0);
        horizontalLayout_107->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_107->setObjectName(QString::fromUtf8("horizontalLayout_107"));
        horizontalLayout_107->setContentsMargins(-1, 15, -1, 0);
        lbSliderCOMName = new QLabel(groupBox_19);
        lbSliderCOMName->setObjectName(QString::fromUtf8("lbSliderCOMName"));
        lbSliderCOMName->setFont(font8);
        lbSliderCOMName->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_107->addWidget(lbSliderCOMName);


        horizontalLayout_106->addWidget(groupBox_19);

        groupBox_20 = new QGroupBox(frame_46);
        groupBox_20->setObjectName(QString::fromUtf8("groupBox_20"));
        horizontalLayout_108 = new QHBoxLayout(groupBox_20);
        horizontalLayout_108->setSpacing(0);
        horizontalLayout_108->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_108->setObjectName(QString::fromUtf8("horizontalLayout_108"));
        horizontalLayout_108->setContentsMargins(6, 15, -1, 0);
        lbBaudrate_7 = new QLabel(groupBox_20);
        lbBaudrate_7->setObjectName(QString::fromUtf8("lbBaudrate_7"));
        lbBaudrate_7->setFont(font8);
        lbBaudrate_7->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_108->addWidget(lbBaudrate_7);


        horizontalLayout_106->addWidget(groupBox_20);


        verticalLayout_79->addWidget(frame_46);


        verticalLayout_23->addWidget(frame_45);

        frame_48 = new QFrame(SliderTab);
        frame_48->setObjectName(QString::fromUtf8("frame_48"));
        sizePolicy.setHeightForWidth(frame_48->sizePolicy().hasHeightForWidth());
        frame_48->setSizePolicy(sizePolicy);
        frame_48->setMinimumSize(QSize(0, 0));
        frame_48->setStyleSheet(QString::fromUtf8("QFrame#frame_48\n"
"{\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"	padding: 5px;\n"
"}"));
        frame_48->setFrameShape(QFrame::StyledPanel);
        frame_48->setFrameShadow(QFrame::Raised);
        verticalLayout_80 = new QVBoxLayout(frame_48);
        verticalLayout_80->setSpacing(0);
        verticalLayout_80->setContentsMargins(11, 11, 11, 11);
        verticalLayout_80->setObjectName(QString::fromUtf8("verticalLayout_80"));
        verticalLayout_80->setContentsMargins(0, 0, 0, 0);
        robotTitile_14 = new QFrame(frame_48);
        robotTitile_14->setObjectName(QString::fromUtf8("robotTitile_14"));
        robotTitile_14->setMaximumSize(QSize(16777215, 40));
        robotTitile_14->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_14->setFrameShape(QFrame::StyledPanel);
        robotTitile_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_109 = new QHBoxLayout(robotTitile_14);
        horizontalLayout_109->setSpacing(6);
        horizontalLayout_109->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_109->setObjectName(QString::fromUtf8("horizontalLayout_109"));
        label_284 = new QLabel(robotTitile_14);
        label_284->setObjectName(QString::fromUtf8("label_284"));

        horizontalLayout_109->addWidget(label_284);

        cbEncoderType_2 = new QComboBox(robotTitile_14);
        cbEncoderType_2->addItem(QString());
        cbEncoderType_2->addItem(QString());
        cbEncoderType_2->addItem(QString());
        cbEncoderType_2->setObjectName(QString::fromUtf8("cbEncoderType_2"));
        cbEncoderType_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_109->addWidget(cbEncoderType_2);

        horizontalSpacer_115 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_109->addItem(horizontalSpacer_115);

        cbEncoderActive_2 = new QCheckBox(robotTitile_14);
        cbEncoderActive_2->setObjectName(QString::fromUtf8("cbEncoderActive_2"));
        cbEncoderActive_2->setChecked(true);

        horizontalLayout_109->addWidget(cbEncoderActive_2);


        verticalLayout_80->addWidget(robotTitile_14);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(10);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(10, 10, 10, 10);
        label_36 = new QLabel(frame_48);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setFont(font5);
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_36, 2, 0, 1, 1);

        pbSlidingHome = new QPushButton(frame_48);
        pbSlidingHome->setObjectName(QString::fromUtf8("pbSlidingHome"));
        sizePolicy16.setHeightForWidth(pbSlidingHome->sizePolicy().hasHeightForWidth());
        pbSlidingHome->setSizePolicy(sizePolicy16);
        pbSlidingHome->setMinimumSize(QSize(0, 0));
        pbSlidingHome->setMaximumSize(QSize(200, 40));
        QFont font16;
        font16.setPointSize(11);
        pbSlidingHome->setFont(font16);
        QIcon icon43;
        icon43.addFile(QString::fromUtf8("icon/icons8-home-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSlidingHome->setIcon(icon43);

        gridLayout_8->addWidget(pbSlidingHome, 1, 1, 1, 1);

        leSlidingSpeed = new QLineEdit(frame_48);
        leSlidingSpeed->setObjectName(QString::fromUtf8("leSlidingSpeed"));
        leSlidingSpeed->setMinimumSize(QSize(0, 0));
        leSlidingSpeed->setMaximumSize(QSize(200, 40));

        gridLayout_8->addWidget(leSlidingSpeed, 2, 1, 1, 1);

        label_59 = new QLabel(frame_48);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setFont(font5);

        gridLayout_8->addWidget(label_59, 3, 2, 1, 1);

        leSlidingPosition = new QLineEdit(frame_48);
        leSlidingPosition->setObjectName(QString::fromUtf8("leSlidingPosition"));
        leSlidingPosition->setMinimumSize(QSize(0, 0));
        leSlidingPosition->setMaximumSize(QSize(200, 40));

        gridLayout_8->addWidget(leSlidingPosition, 3, 1, 1, 1);

        pbSlidingDisable = new QPushButton(frame_48);
        pbSlidingDisable->setObjectName(QString::fromUtf8("pbSlidingDisable"));
        sizePolicy24.setHeightForWidth(pbSlidingDisable->sizePolicy().hasHeightForWidth());
        pbSlidingDisable->setSizePolicy(sizePolicy24);
        pbSlidingDisable->setMinimumSize(QSize(0, 0));
        pbSlidingDisable->setMaximumSize(QSize(200, 40));
        pbSlidingDisable->setFont(font16);
        QIcon icon44;
        icon44.addFile(QString::fromUtf8("icon/icons8-sleeping-in-bed-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSlidingDisable->setIcon(icon44);

        gridLayout_8->addWidget(pbSlidingDisable, 0, 1, 1, 1);

        label_37 = new QLabel(frame_48);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setFont(font5);
        label_37->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_8->addWidget(label_37, 3, 0, 1, 1);

        label_58 = new QLabel(frame_48);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setFont(font5);

        gridLayout_8->addWidget(label_58, 2, 2, 1, 1);


        verticalLayout_80->addLayout(gridLayout_8);


        verticalLayout_23->addWidget(frame_48);

        verticalSpacer_3 = new QSpacerItem(20, 296, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_23->addItem(verticalSpacer_3);

        twDevices->addTab(SliderTab, QString());
        MCUTab = new QWidget();
        MCUTab->setObjectName(QString::fromUtf8("MCUTab"));
        MCUTab->setStyleSheet(QString::fromUtf8("QWidget#MCUTab\n"
"{\n"
"	background-color: #1E1E20;\n"
"}\n"
"\n"
"QLabel\n"
"{	\n"
"	color: #D0D0D1;\n"
"}"));
        verticalLayout_24 = new QVBoxLayout(MCUTab);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        frame_49 = new QFrame(MCUTab);
        frame_49->setObjectName(QString::fromUtf8("frame_49"));
        frame_49->setMinimumSize(QSize(0, 100));
        frame_49->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	border: 1px solid rgb(20, 20, 20);\n"
"}"));
        frame_49->setFrameShape(QFrame::StyledPanel);
        frame_49->setFrameShadow(QFrame::Raised);
        verticalLayout_81 = new QVBoxLayout(frame_49);
        verticalLayout_81->setSpacing(0);
        verticalLayout_81->setContentsMargins(11, 11, 11, 11);
        verticalLayout_81->setObjectName(QString::fromUtf8("verticalLayout_81"));
        verticalLayout_81->setContentsMargins(0, 0, 0, 0);
        robotTitile_15 = new QFrame(frame_49);
        robotTitile_15->setObjectName(QString::fromUtf8("robotTitile_15"));
        robotTitile_15->setMaximumSize(QSize(16777215, 40));
        robotTitile_15->setStyleSheet(QString::fromUtf8("QFrame\n"
"{\n"
"	\n"
"	background-color: rgb(51, 51, 55);\n"
"	border: none;\n"
"}"));
        robotTitile_15->setFrameShape(QFrame::StyledPanel);
        robotTitile_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_110 = new QHBoxLayout(robotTitile_15);
        horizontalLayout_110->setSpacing(6);
        horizontalLayout_110->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_110->setObjectName(QString::fromUtf8("horizontalLayout_110"));
        horizontalLayout_110->setContentsMargins(-1, 0, -1, 0);
        label_16 = new QLabel(robotTitile_15);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_110->addWidget(label_16);

        horizontalSpacer_116 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_110->addItem(horizontalSpacer_116);

        checkBox_6 = new QCheckBox(robotTitile_15);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        horizontalLayout_110->addWidget(checkBox_6);

        pbExternalControllerConnect = new QPushButton(robotTitile_15);
        pbExternalControllerConnect->setObjectName(QString::fromUtf8("pbExternalControllerConnect"));
        sizePolicy.setHeightForWidth(pbExternalControllerConnect->sizePolicy().hasHeightForWidth());
        pbExternalControllerConnect->setSizePolicy(sizePolicy);
        pbExternalControllerConnect->setMinimumSize(QSize(0, 0));
        pbExternalControllerConnect->setMaximumSize(QSize(16777215, 16777215));
        pbExternalControllerConnect->setFont(font4);
        pbExternalControllerConnect->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: #3195EF;\n"
"	color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px;\n"
"}\n"
"QPushButton:hover\n"
"{	\n"
"	background-color: rgb(129, 129, 129);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{	\n"
"	background-color: rgb(81, 176, 255);\n"
"}\n"
""));
        pbExternalControllerConnect->setCheckable(true);

        horizontalLayout_110->addWidget(pbExternalControllerConnect);


        verticalLayout_81->addWidget(robotTitile_15);

        frame_50 = new QFrame(frame_49);
        frame_50->setObjectName(QString::fromUtf8("frame_50"));
        frame_50->setStyleSheet(QString::fromUtf8("QFrame\n"
"{	\n"
"	background: #262629;\n"
"	border: none;\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"	background-color: transparent;\n"
"	border-radius: 5px;\n"
"	border: 1px solid #4A4A4F;\n"
"	\n"
"	color: rgb(219, 219, 220);\n"
"}"));
        frame_50->setFrameShape(QFrame::StyledPanel);
        frame_50->setFrameShadow(QFrame::Raised);
        horizontalLayout_111 = new QHBoxLayout(frame_50);
        horizontalLayout_111->setSpacing(6);
        horizontalLayout_111->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_111->setObjectName(QString::fromUtf8("horizontalLayout_111"));
        cbSelectedDevice = new QComboBox(frame_50);
        cbSelectedDevice->addItem(QString());
        cbSelectedDevice->addItem(QString());
        cbSelectedDevice->addItem(QString());
        cbSelectedDevice->addItem(QString());
        cbSelectedDevice->setObjectName(QString::fromUtf8("cbSelectedDevice"));
        sizePolicy5.setHeightForWidth(cbSelectedDevice->sizePolicy().hasHeightForWidth());
        cbSelectedDevice->setSizePolicy(sizePolicy5);
        cbSelectedDevice->setMinimumSize(QSize(100, 0));

        horizontalLayout_111->addWidget(cbSelectedDevice);

        horizontalSpacer_117 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_111->addItem(horizontalSpacer_117);

        groupBox_21 = new QGroupBox(frame_50);
        groupBox_21->setObjectName(QString::fromUtf8("groupBox_21"));
        horizontalLayout_112 = new QHBoxLayout(groupBox_21);
        horizontalLayout_112->setSpacing(0);
        horizontalLayout_112->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_112->setObjectName(QString::fromUtf8("horizontalLayout_112"));
        horizontalLayout_112->setContentsMargins(-1, 15, -1, 0);
        lbExternalCOMName = new QLabel(groupBox_21);
        lbExternalCOMName->setObjectName(QString::fromUtf8("lbExternalCOMName"));
        lbExternalCOMName->setFont(font8);
        lbExternalCOMName->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_112->addWidget(lbExternalCOMName);


        horizontalLayout_111->addWidget(groupBox_21);

        groupBox_22 = new QGroupBox(frame_50);
        groupBox_22->setObjectName(QString::fromUtf8("groupBox_22"));
        horizontalLayout_113 = new QHBoxLayout(groupBox_22);
        horizontalLayout_113->setSpacing(0);
        horizontalLayout_113->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_113->setObjectName(QString::fromUtf8("horizontalLayout_113"));
        horizontalLayout_113->setContentsMargins(6, 15, -1, 0);
        lbBaudrate_8 = new QLabel(groupBox_22);
        lbBaudrate_8->setObjectName(QString::fromUtf8("lbBaudrate_8"));
        lbBaudrate_8->setFont(font8);
        lbBaudrate_8->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_113->addWidget(lbBaudrate_8);


        horizontalLayout_111->addWidget(groupBox_22);


        verticalLayout_81->addWidget(frame_50);


        verticalLayout_24->addWidget(frame_49);

        widget1 = new QWidget(MCUTab);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_50 = new QHBoxLayout(widget1);
        horizontalLayout_50->setSpacing(10);
        horizontalLayout_50->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_50->setObjectName(QString::fromUtf8("horizontalLayout_50"));
        horizontalLayout_50->setContentsMargins(0, 0, 10, 10);

        verticalLayout_24->addWidget(widget1);

        teReceiveFromMCU = new QTextEdit(MCUTab);
        teReceiveFromMCU->setObjectName(QString::fromUtf8("teReceiveFromMCU"));
        teReceiveFromMCU->setStyleSheet(QString::fromUtf8("background-color: rgb(230, 230, 230);"));

        verticalLayout_24->addWidget(teReceiveFromMCU);

        leTransmitToMCU = new QLineEdit(MCUTab);
        leTransmitToMCU->setObjectName(QString::fromUtf8("leTransmitToMCU"));
        leTransmitToMCU->setMinimumSize(QSize(0, 30));

        verticalLayout_24->addWidget(leTransmitToMCU);

        twDevices->addTab(MCUTab, QString());
        PlusDeviceTab = new QWidget();
        PlusDeviceTab->setObjectName(QString::fromUtf8("PlusDeviceTab"));
        twDevices->addTab(PlusDeviceTab, QString());

        GeometryTabManagerLayout->addWidget(twDevices);

        splitter_2->addWidget(DeviceTabManagerWidget);

        verticalLayout_46->addWidget(splitter_2);


        verticalLayout_15->addWidget(tabManagerLayout);

        RobotWindow->setCentralWidget(centralWidget);

        retranslateUi(RobotWindow);
        QObject::connect(pbCalibStep1, SIGNAL(toggled(bool)), fCalibStep1, SLOT(setVisible(bool)));
        QObject::connect(gbImageProvider, SIGNAL(toggled(bool)), fImageProvider, SLOT(setVisible(bool)));
        QObject::connect(gbCameraCalibration, SIGNAL(toggled(bool)), fCameraCalibrationFrame, SLOT(setVisible(bool)));
        QObject::connect(gbCameraObject, SIGNAL(toggled(bool)), fVisionObjectFrame, SLOT(setVisible(bool)));
        QObject::connect(gbCameraVariable, SIGNAL(toggled(bool)), fVisionVariableFrame, SLOT(setVisible(bool)));
        QObject::connect(pbCalibStep2, SIGNAL(toggled(bool)), fCalibStep2, SLOT(setVisible(bool)));
        QObject::connect(gbTrackingManager, SIGNAL(toggled(bool)), fTrackingManager, SLOT(setVisible(bool)));

        twDeltaManager->setCurrentIndex(0);
        pbReadI0_3->setDefault(false);
        twModule->setCurrentIndex(1);
        pbImageMapping->setDefault(false);
        cbImageSource->setCurrentIndex(0);
        twDevices->setCurrentIndex(0);
        pbPump->setDefault(false);
        pbLaser->setDefault(false);
        pbGrip->setDefault(false);


        QMetaObject::connectSlotsByName(RobotWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RobotWindow)
    {
        RobotWindow->setWindowTitle(QCoreApplication::translate("RobotWindow", "Delta X Software - Version 1.2", nullptr));
        actionAdd->setText(QCoreApplication::translate("RobotWindow", "Add New", nullptr));
        actionRemove->setText(QCoreApplication::translate("RobotWindow", "Remove", nullptr));
        actionAbout->setText(QCoreApplication::translate("RobotWindow", "About", nullptr));
        actionGcode->setText(QCoreApplication::translate("RobotWindow", "Gcode", nullptr));
        actionSoftware->setText(QCoreApplication::translate("RobotWindow", "Software", nullptr));
        actionExecute_All->setText(QCoreApplication::translate("RobotWindow", "Execute All", nullptr));
        actionDelta_X_1->setText(QCoreApplication::translate("RobotWindow", "robot 1", nullptr));
        actionExecute->setText(QCoreApplication::translate("RobotWindow", "Execute", nullptr));
        actionBaudrate->setText(QCoreApplication::translate("RobotWindow", "Baudrate", nullptr));
        actionScale->setText(QCoreApplication::translate("RobotWindow", "Scale", nullptr));
        twDeltaManager->setTabText(twDeltaManager->indexOf(tabDefaultDelta), QCoreApplication::translate("RobotWindow", "robot 1", nullptr));
        twDeltaManager->setTabText(twDeltaManager->indexOf(tabAddNewDelta), QCoreApplication::translate("RobotWindow", "+", nullptr));
        pbReadI0_3->setText(QCoreApplication::translate("RobotWindow", "Server", nullptr));
        label_161->setText(QCoreApplication::translate("RobotWindow", "IP", nullptr));
        leIP->setText(QCoreApplication::translate("RobotWindow", "127.0.0.1", nullptr));
        label_123->setText(QCoreApplication::translate("RobotWindow", "Port", nullptr));
        lePort->setText(QCoreApplication::translate("RobotWindow", "8844", nullptr));
#if QT_CONFIG(tooltip)
        tbServerConfig->setToolTip(QCoreApplication::translate("RobotWindow", "Config", nullptr));
#endif // QT_CONFIG(tooltip)
        tbServerConfig->setText(QString());
#if QT_CONFIG(tooltip)
        twModule->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_28->setText(QCoreApplication::translate("RobotWindow", "Program Thread", nullptr));
        cbProgramThreadID->setItemText(0, QCoreApplication::translate("RobotWindow", "0", nullptr));
        cbProgramThreadID->setItemText(1, QCoreApplication::translate("RobotWindow", "1", nullptr));
        cbProgramThreadID->setItemText(2, QCoreApplication::translate("RobotWindow", "2", nullptr));
        cbProgramThreadID->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        rbEditorStart->setText(QCoreApplication::translate("RobotWindow", "Start", nullptr));
        rbEditorCurrent->setText(QCoreApplication::translate("RobotWindow", "Current", nullptr));
#if QT_CONFIG(tooltip)
        pbExecuteGcodes->setToolTip(QCoreApplication::translate("RobotWindow", "Execute Gcode", nullptr));
#endif // QT_CONFIG(tooltip)
        pbExecuteGcodes->setText(QCoreApplication::translate("RobotWindow", "Run", nullptr));
        label_81->setText(QCoreApplication::translate("RobotWindow", "Gcode File", nullptr));
        cbProgramSource->setItemText(0, QCoreApplication::translate("RobotWindow", "Local", nullptr));
        cbProgramSource->setItemText(1, QCoreApplication::translate("RobotWindow", "Online", nullptr));

        label_3->setText(QCoreApplication::translate("RobotWindow", "Path", nullptr));
#if QT_CONFIG(tooltip)
        tbOpenGcodePath->setToolTip(QCoreApplication::translate("RobotWindow", "Open gcode folder", nullptr));
#endif // QT_CONFIG(tooltip)
        tbOpenGcodePath->setText(QString());
#if QT_CONFIG(tooltip)
        tbBackGcodeFolder->setToolTip(QCoreApplication::translate("RobotWindow", "Back", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbBackGcodeFolder->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        tbBackGcodeFolder->setText(QString());
#if QT_CONFIG(tooltip)
        tbNewGcodeFile->setToolTip(QCoreApplication::translate("RobotWindow", "New", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbNewGcodeFile->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        tbNewGcodeFile->setText(QString());
#if QT_CONFIG(tooltip)
        tbRefreshExplorer->setToolTip(QCoreApplication::translate("RobotWindow", "New", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbRefreshExplorer->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        tbRefreshExplorer->setText(QString());
#if QT_CONFIG(tooltip)
        tbDeleteGcodeFile->setToolTip(QCoreApplication::translate("RobotWindow", "New", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        tbDeleteGcodeFile->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        tbDeleteGcodeFile->setText(QString());
        cbVariableDisplayOption->setItemText(0, QCoreApplication::translate("RobotWindow", "Visible Variables", nullptr));
        cbVariableDisplayOption->setItemText(1, QCoreApplication::translate("RobotWindow", "All Variables", nullptr));

        lbSelectedProgram->setText(QCoreApplication::translate("RobotWindow", "No Name", nullptr));
#if QT_CONFIG(tooltip)
        pbSaveGcode->setToolTip(QCoreApplication::translate("RobotWindow", "Save Gcode Into File", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSaveGcode->setText(QString());
#if QT_CONFIG(tooltip)
        pbFormat->setToolTip(QCoreApplication::translate("RobotWindow", "Format Gcode Lines", nullptr));
#endif // QT_CONFIG(tooltip)
        pbFormat->setText(QCoreApplication::translate("RobotWindow", "Format", nullptr));
        cbEditGcodeLock->setText(QCoreApplication::translate("RobotWindow", "Lock", nullptr));
#if QT_CONFIG(tooltip)
        pbOpenGcodeDocs->setToolTip(QCoreApplication::translate("RobotWindow", "Gcode Docs", nullptr));
#endif // QT_CONFIG(tooltip)
        pbOpenGcodeDocs->setText(QCoreApplication::translate("RobotWindow", "Format", nullptr));
        pteGcodeArea->setHtml(QCoreApplication::translate("RobotWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#00aa00;\">;Delta X 2 Example</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N05 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G28</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#00aa00;\">;Acceleration</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N10 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">M204</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> A1200</span></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#00aa00;\">;Speed</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N15 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> F200</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#00aa00;\">;Declare variables</span></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N20 </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#dbdbdc;\">#Counter</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> = 0</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N30 </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#dbdbdc;\">#Counter</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> = </span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#dbdbdc;\">#Counter</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> + 1</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; f"
                        "ont-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#55aa00;\">;Call subprogram</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N35 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">M98</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> P2000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; co"
                        "lor:#00aa00;\">; Begin subprogram</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N40 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">O2000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N45 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 80]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-"
                        "indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N50 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> X-100</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N55 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 100]</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell D"
                        "lg 2'; color:#dbdbdc;\">N60 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 80]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N65 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> X100</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N70 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 100]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N75 M99</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#00aa00;\">;End subprogram</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#00aa00;\">;Loop 5 times</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">N80 </span><span style=\" font"
                        "-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">IF</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> [</span><span style=\" font-family:'MS Shell Dlg 2'; font-style:italic; color:#dbdbdc;\">#Counter</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> &lt; 5] </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">THEN</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">GOTO</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> 30</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#d"
                        "bdbdc;\">N85 </span><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G28</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\"> </span></p></body></html>", nullptr));
        lbSelectedProgram_3->setText(QCoreApplication::translate("RobotWindow", "Function", nullptr));
#if QT_CONFIG(tooltip)
        pbSaveFunctionScripts->setToolTip(QCoreApplication::translate("RobotWindow", "Save Gcode Into File", nullptr));
#endif // QT_CONFIG(tooltip)
        pbSaveFunctionScripts->setText(QString());
        pteScriptFunction->setHtml(QCoreApplication::translate("RobotWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">O2001</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 50]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 30]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 50]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-weight:600; color:#"
                        "dbdbdc;\">G01</span><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\"> Z[#robot0.HOME_Z - 30]</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#dbdbdc;\">M99</span></p></body></html>", nullptr));
        twModule->setTabText(twModule->indexOf(tGcodeEditor), QCoreApplication::translate("RobotWindow", "G-Script", nullptr));
        label_191->setText(QCoreApplication::translate("RobotWindow", "Detecting Thread", nullptr));
        cbSelectedDetecting->setItemText(0, QCoreApplication::translate("RobotWindow", "detect0", nullptr));
        cbSelectedDetecting->setItemText(1, QCoreApplication::translate("RobotWindow", "detect1", nullptr));
        cbSelectedDetecting->setItemText(2, QCoreApplication::translate("RobotWindow", "detect2", nullptr));
        cbSelectedDetecting->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        gbImageViewer->setTitle(QCoreApplication::translate("RobotWindow", "Image Viewer", nullptr));
#if QT_CONFIG(tooltip)
        pbFindChessboardTool->setToolTip(QCoreApplication::translate("RobotWindow", "Warp Perspective", nullptr));
#endif // QT_CONFIG(tooltip)
        pbFindChessboardTool->setText(QCoreApplication::translate("RobotWindow", "Find Chessboard", nullptr));
#if QT_CONFIG(tooltip)
        pbAreaTool->setToolTip(QCoreApplication::translate("RobotWindow", "Warp Perspective", nullptr));
#endif // QT_CONFIG(tooltip)
        pbAreaTool->setText(QCoreApplication::translate("RobotWindow", "Crop Area", nullptr));
#if QT_CONFIG(tooltip)
        pbCalibPointTool->setToolTip(QCoreApplication::translate("RobotWindow", "Set Calib Point", nullptr));
#endif // QT_CONFIG(tooltip)
        pbCalibPointTool->setText(QCoreApplication::translate("RobotWindow", "Select Calibration Points", nullptr));
#if QT_CONFIG(tooltip)
        pbMappingPointTool->setToolTip(QCoreApplication::translate("RobotWindow", "Check Point Position On Camera", nullptr));
#endif // QT_CONFIG(tooltip)
        pbMappingPointTool->setText(QCoreApplication::translate("RobotWindow", "Test Calibration Point", nullptr));
#if QT_CONFIG(tooltip)
        pbWarpTool->setToolTip(QCoreApplication::translate("RobotWindow", "Warp Perspective", nullptr));
#endif // QT_CONFIG(tooltip)
        pbWarpTool->setText(QCoreApplication::translate("RobotWindow", "Transform Image", nullptr));
#if QT_CONFIG(tooltip)
        pbFilterTool->setToolTip(QCoreApplication::translate("RobotWindow", "Blob Filter", nullptr));
#endif // QT_CONFIG(tooltip)
        pbFilterTool->setText(QCoreApplication::translate("RobotWindow", "Color Filter Tool", nullptr));
#if QT_CONFIG(tooltip)
        pbGetSizeTool->setToolTip(QCoreApplication::translate("RobotWindow", "Blob Filter", nullptr));
#endif // QT_CONFIG(tooltip)
        pbGetSizeTool->setText(QCoreApplication::translate("RobotWindow", "Object Size Tool", nullptr));
        label_213->setText(QCoreApplication::translate("RobotWindow", "Output", nullptr));
        cbImageOutput->setItemText(0, QCoreApplication::translate("RobotWindow", "Calibrating", nullptr));
        cbImageOutput->setItemText(1, QCoreApplication::translate("RobotWindow", "Detecting", nullptr));
        cbImageOutput->setItemText(2, QCoreApplication::translate("RobotWindow", "Original", nullptr));

        lbDisplayRatio_2->setText(QCoreApplication::translate("RobotWindow", "Zoom:", nullptr));
        lbDisplayRatio_3->setText(QCoreApplication::translate("RobotWindow", "Ctrl + Scroll", nullptr));
        pbZoomInCameraView->setText(QCoreApplication::translate("RobotWindow", "Zoom In", nullptr));
        pbZoomOutCameraView->setText(QCoreApplication::translate("RobotWindow", "Zoom Out", nullptr));
        lbDisplayRatio->setText(QCoreApplication::translate("RobotWindow", "Ratio: 100%", nullptr));
        lbMatSize->setText(QCoreApplication::translate("RobotWindow", "Re: 800x500", nullptr));
        gbImageProvider->setTitle(QCoreApplication::translate("RobotWindow", "Image Provider", nullptr));
        label_176->setText(QCoreApplication::translate("RobotWindow", "Source", nullptr));
        cbSourceForImageProvider->setItemText(0, QCoreApplication::translate("RobotWindow", "Webcam", nullptr));
        cbSourceForImageProvider->setItemText(1, QCoreApplication::translate("RobotWindow", "Industrial Camera", nullptr));
        cbSourceForImageProvider->setItemText(2, QCoreApplication::translate("RobotWindow", "Images", nullptr));
        cbSourceForImageProvider->setItemText(3, QCoreApplication::translate("RobotWindow", "Socket", nullptr));

        label_6->setText(QCoreApplication::translate("RobotWindow", "Tracking Thread", nullptr));
        cbTrackingThreadForCamera->setItemText(0, QCoreApplication::translate("RobotWindow", "thread0", nullptr));
        cbTrackingThreadForCamera->setItemText(1, QCoreApplication::translate("RobotWindow", "thread1", nullptr));
        cbTrackingThreadForCamera->setItemText(2, QCoreApplication::translate("RobotWindow", "thread2", nullptr));
        cbTrackingThreadForCamera->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

#if QT_CONFIG(tooltip)
        pbLoadCamera->setToolTip(QCoreApplication::translate("RobotWindow", "Load Camera", nullptr));
#endif // QT_CONFIG(tooltip)
        pbLoadCamera->setText(QCoreApplication::translate("RobotWindow", "Load Camera", nullptr));
#if QT_CONFIG(tooltip)
        pbLoadTestImage->setToolTip(QCoreApplication::translate("RobotWindow", "Load Image", nullptr));
#endif // QT_CONFIG(tooltip)
        pbLoadTestImage->setText(QCoreApplication::translate("RobotWindow", "Load Image", nullptr));
        label_178->setText(QCoreApplication::translate("RobotWindow", "W", nullptr));
        leImageWidth->setText(QCoreApplication::translate("RobotWindow", "800", nullptr));
        label_179->setText(QCoreApplication::translate("RobotWindow", "H", nullptr));
        leImageHeight->setText(QCoreApplication::translate("RobotWindow", "500", nullptr));
        label_73->setText(QCoreApplication::translate("RobotWindow", "Interval", nullptr));
        leCaptureInterval->setText(QCoreApplication::translate("RobotWindow", "500", nullptr));
        label_128->setText(QCoreApplication::translate("RobotWindow", "ms", nullptr));
#if QT_CONFIG(tooltip)
        pbStartAcquisition->setToolTip(QCoreApplication::translate("RobotWindow", "<html><head/><body><p>Play and Pause</p><p>M98 PpauseCamera</p><p>M98 PresumeCamera</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbStartAcquisition->setText(QString());
#if QT_CONFIG(tooltip)
        pbCapture->setToolTip(QCoreApplication::translate("RobotWindow", "<html><head/><body><p>Capture</p><p>M98 PcaptureCamera</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbCapture->setText(QString());
        lbCameraState->setText(QString());
        gbCameraCalibration->setTitle(QCoreApplication::translate("RobotWindow", "Calibration", nullptr));
        pbCalibStep1->setText(QCoreApplication::translate("RobotWindow", "Step 1: Identify the 4 corners of the square for perspective correction", nullptr));
        lbWarpGuide->setText(QString());
        pbCalibStep2->setText(QCoreApplication::translate("RobotWindow", "Step 2: Coordinate correction", nullptr));
        label_2->setText(QCoreApplication::translate("RobotWindow", "2.1 Select two points on the camera", nullptr));
        lbCalibGuide->setText(QString());
        label_7->setText(QCoreApplication::translate("RobotWindow", "2.2 Enter the actual coordinates of points P1 and P2", nullptr));
        leRealityP1P2Distance->setText(QCoreApplication::translate("RobotWindow", "80", nullptr));
        leCalibOffset_X->setText(QCoreApplication::translate("RobotWindow", "0", nullptr));
        label_148->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
#if QT_CONFIG(tooltip)
        tbPastePoint1->setToolTip(QCoreApplication::translate("RobotWindow", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
        tbPastePoint1->setText(QString());
#if QT_CONFIG(tooltip)
        pbImageMapping->setToolTip(QCoreApplication::translate("RobotWindow", "Perspective Transformation", nullptr));
#endif // QT_CONFIG(tooltip)
        pbImageMapping->setText(QCoreApplication::translate("RobotWindow", "Calculate Mapping Matrix", nullptr));
        label_39->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
#if QT_CONFIG(tooltip)
        leRealityPoint2Y->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        leRealityPoint2Y->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
#if QT_CONFIG(tooltip)
        tbPastePoint2->setToolTip(QCoreApplication::translate("RobotWindow", "Paste", nullptr));
#endif // QT_CONFIG(tooltip)
        tbPastePoint2->setText(QString());
        pbCalibPoint1->setText(QCoreApplication::translate("RobotWindow", "Save Robot Position To P1'", nullptr));
#if QT_CONFIG(shortcut)
        pbCalibPoint1->setShortcut(QCoreApplication::translate("RobotWindow", "!", nullptr));
#endif // QT_CONFIG(shortcut)
        leRealityPoint1X->setText(QCoreApplication::translate("RobotWindow", "0", nullptr));
        label_133->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        label_38->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        label_10->setText(QCoreApplication::translate("RobotWindow", "2.3 Press the button to calculate the transformation matrix", nullptr));
        pbCalibPoint2->setText(QCoreApplication::translate("RobotWindow", "Save Robot Position To P2'", nullptr));
#if QT_CONFIG(shortcut)
        pbCalibPoint2->setShortcut(QCoreApplication::translate("RobotWindow", "@", nullptr));
#endif // QT_CONFIG(shortcut)
        label_40->setText(QCoreApplication::translate("RobotWindow", "P1'", nullptr));
        label_139->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        label_142->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        lbCalibType->setText(QCoreApplication::translate("RobotWindow", "Offset", nullptr));
        lbCalibType_2->setText(QCoreApplication::translate("RobotWindow", "Calib Tool", nullptr));
        leRealityPoint1Y->setText(QCoreApplication::translate("RobotWindow", "0", nullptr));
        lbCalibType_3->setText(QCoreApplication::translate("RobotWindow", "P1' & P2' Distance", nullptr));
        leRealityPoint2X->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        label_141->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        label_132->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        label_140->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        label_41->setText(QCoreApplication::translate("RobotWindow", "P2'", nullptr));
        leCalibOffset_Y->setText(QCoreApplication::translate("RobotWindow", "0", nullptr));
        cbCalibType->setItemText(0, QCoreApplication::translate("RobotWindow", "None", nullptr));
        cbCalibType->setItemText(1, QCoreApplication::translate("RobotWindow", "Calib Paper 0.1", nullptr));

        gbCameraObject->setTitle(QCoreApplication::translate("RobotWindow", "Object", nullptr));
        label_126->setText(QCoreApplication::translate("RobotWindow", "Detecting algorithm", nullptr));
        cbDetectingAlgorithm->setItemText(0, QCoreApplication::translate("RobotWindow", "Find Blobs", nullptr));
        cbDetectingAlgorithm->setItemText(1, QCoreApplication::translate("RobotWindow", "Find Circles", nullptr));
        cbDetectingAlgorithm->setItemText(2, QCoreApplication::translate("RobotWindow", "External Script", nullptr));

        label_45->setText(QCoreApplication::translate("RobotWindow", "Similarity Threshold", nullptr));
        leSimilarityThreshold->setText(QCoreApplication::translate("RobotWindow", "20", nullptr));
        leLRec->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
        leMaxLRec->setText(QCoreApplication::translate("RobotWindow", "1.5", nullptr));
        leWRec->setText(QCoreApplication::translate("RobotWindow", "30", nullptr));
        leMinLRec->setText(QCoreApplication::translate("RobotWindow", "0.5", nullptr));
        label_42->setText(QCoreApplication::translate("RobotWindow", "Width", nullptr));
        label_175->setText(QCoreApplication::translate("RobotWindow", "Max", nullptr));
        cbObjectType->setItemText(0, QCoreApplication::translate("RobotWindow", "1", nullptr));
        cbObjectType->setItemText(1, QCoreApplication::translate("RobotWindow", "2", nullptr));
        cbObjectType->setItemText(2, QCoreApplication::translate("RobotWindow", "3", nullptr));
        cbObjectType->setItemText(3, QCoreApplication::translate("RobotWindow", "4", nullptr));
        cbObjectType->setItemText(4, QCoreApplication::translate("RobotWindow", "5", nullptr));
        cbObjectType->setItemText(5, QCoreApplication::translate("RobotWindow", "+", nullptr));

        label_43->setText(QCoreApplication::translate("RobotWindow", "Length", nullptr));
        label_163->setText(QCoreApplication::translate("RobotWindow", "Type", nullptr));
        label_173->setText(QCoreApplication::translate("RobotWindow", "Max", nullptr));
        label_174->setText(QCoreApplication::translate("RobotWindow", "Min", nullptr));
        label_55->setText(QCoreApplication::translate("RobotWindow", "pixel", nullptr));
        label_54->setText(QCoreApplication::translate("RobotWindow", "pixel", nullptr));
        label_172->setText(QCoreApplication::translate("RobotWindow", "Min", nullptr));
        leMaxWRec->setText(QCoreApplication::translate("RobotWindow", "1.5", nullptr));
        leMinWRec->setText(QCoreApplication::translate("RobotWindow", "0.5", nullptr));
        pbRunExternalScript->setText(QString());
        label_145->setText(QCoreApplication::translate("RobotWindow", "Python Url", nullptr));
        pbExternalScriptOpen->setText(QString());
        lePythonUrl->setText(QCoreApplication::translate("RobotWindow", "script-example/mushroom-2.0.py", nullptr));
        cbImageSource->setItemText(0, QCoreApplication::translate("RobotWindow", "Origin Image", nullptr));
        cbImageSource->setItemText(1, QCoreApplication::translate("RobotWindow", "Calibrated Image", nullptr));
        cbImageSource->setItemText(2, QCoreApplication::translate("RobotWindow", "Color Filtered Image", nullptr));

        label_180->setText(QCoreApplication::translate("RobotWindow", "Host IP", nullptr));
        label_146->setText(QCoreApplication::translate("RobotWindow", "Transmission Image", nullptr));
        label_186->setText(QCoreApplication::translate("RobotWindow", "byte: \"[width][height][channel][data]\"", nullptr));
        label_183->setText(QCoreApplication::translate("RobotWindow", "8844", nullptr));
        label_184->setText(QCoreApplication::translate("RobotWindow", "Sending format", nullptr));
        label_185->setText(QCoreApplication::translate("RobotWindow", "Receive format", nullptr));
        label_187->setText(QCoreApplication::translate("RobotWindow", "string: \"#Object = [x],[y],[width],[height],[angle];\"", nullptr));
        pbExternalScriptHelp->setText(QCoreApplication::translate("RobotWindow", "?", nullptr));
        label_182->setText(QCoreApplication::translate("RobotWindow", "Port", nullptr));
        label_181->setText(QCoreApplication::translate("RobotWindow", "127.0.0.1", nullptr));
        pbOpenScriptExample->setText(QCoreApplication::translate("RobotWindow", "Open script example", nullptr));
        leCenterThreshold->setText(QCoreApplication::translate("RobotWindow", "30", nullptr));
        leEdgeThreshold->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        label_193->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        label_190->setText(QCoreApplication::translate("RobotWindow", "Center Threshold", nullptr));
        label_192->setText(QCoreApplication::translate("RobotWindow", "Min Radius", nullptr));
        leMaxRadius->setText(QCoreApplication::translate("RobotWindow", "30", nullptr));
        label_194->setText(QCoreApplication::translate("RobotWindow", "Max Radius", nullptr));
        label_195->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        leMinRadius->setText(QCoreApplication::translate("RobotWindow", "5", nullptr));
        label_188->setText(QCoreApplication::translate("RobotWindow", "Edge Threshold", nullptr));
        label_198->setText(QCoreApplication::translate("RobotWindow", "max 250", nullptr));
        label_199->setText(QCoreApplication::translate("RobotWindow", "max 250", nullptr));
        gbCameraVariable->setTitle(QCoreApplication::translate("RobotWindow", "Variable", nullptr));
        label_34->setText(QCoreApplication::translate("RobotWindow", "Auto Update", nullptr));
        cbAutoUpdateObjectsDisplay->setItemText(0, QCoreApplication::translate("RobotWindow", "No", nullptr));
        cbAutoUpdateObjectsDisplay->setItemText(1, QCoreApplication::translate("RobotWindow", "500 ms", nullptr));

        pbUpdateObjectToView->setText(QCoreApplication::translate("RobotWindow", "Update", nullptr));
#if QT_CONFIG(tooltip)
        pbClearDetectObjects->setToolTip(QCoreApplication::translate("RobotWindow", "<html><head/><body><p>Clear All Objects in Memory</p><p>M98 PclearObjects --&gt; Clear All</p><p>M98 PdeleteFirstObject --&gt; Delete First</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbClearDetectObjects->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbClearDetectObjects->setText(QCoreApplication::translate("RobotWindow", "Clear Objects", nullptr));
        leLimitMinX->setText(QCoreApplication::translate("RobotWindow", "-300", nullptr));
        label_162->setText(QCoreApplication::translate("RobotWindow", "(mm)", nullptr));
        label_155->setText(QCoreApplication::translate("RobotWindow", "Max X", nullptr));
        leLimitMaxX->setText(QCoreApplication::translate("RobotWindow", "1200", nullptr));
        label_170->setText(QCoreApplication::translate("RobotWindow", "(mm)", nullptr));
        leLimitMaxY->setText(QCoreApplication::translate("RobotWindow", "400", nullptr));
        label_171->setText(QCoreApplication::translate("RobotWindow", "(mm)", nullptr));
        label_56->setText(QCoreApplication::translate("RobotWindow", "Min X", nullptr));
        label_156->setText(QCoreApplication::translate("RobotWindow", "Min Y", nullptr));
        leLimitMinY->setText(QCoreApplication::translate("RobotWindow", "-400", nullptr));
        label_159->setText(QCoreApplication::translate("RobotWindow", "(mm)", nullptr));
        label_157->setText(QCoreApplication::translate("RobotWindow", "Max Y", nullptr));
        label_196->setText(QCoreApplication::translate("RobotWindow", "Object List", nullptr));
        label_44->setText(QCoreApplication::translate("RobotWindow", "Limit Area", nullptr));
        leDetectingObjectListName->setText(QCoreApplication::translate("RobotWindow", "#Objects", nullptr));
        twModule->setTabText(twModule->indexOf(tObjectDetecting), QCoreApplication::translate("RobotWindow", "Object Detector", nullptr));
        gbTrackingManager->setTitle(QCoreApplication::translate("RobotWindow", "Tracking Manager", nullptr));
        cbSelectedTracking->setItemText(0, QCoreApplication::translate("RobotWindow", "tracking0", nullptr));
        cbSelectedTracking->setItemText(1, QCoreApplication::translate("RobotWindow", "tracking1", nullptr));
        cbSelectedTracking->setItemText(2, QCoreApplication::translate("RobotWindow", "tracking2", nullptr));
        cbSelectedTracking->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        label_144->setText(QCoreApplication::translate("RobotWindow", "Object List", nullptr));
        cbReverseEncoderValue->setText(QCoreApplication::translate("RobotWindow", "Reverse Value", nullptr));
        pbSaveTrackingManager->setText(QCoreApplication::translate("RobotWindow", "Save", nullptr));
        label_164->setText(QCoreApplication::translate("RobotWindow", "Encoder", nullptr));
        leSelectedTrackingObjectList->setText(QCoreApplication::translate("RobotWindow", "#Objects", nullptr));
        leVelocityVector->setText(QCoreApplication::translate("RobotWindow", "#Vector1", nullptr));
        cbTrackingEncoderSource->setItemText(0, QCoreApplication::translate("RobotWindow", "encoder0", nullptr));
        cbTrackingEncoderSource->setItemText(1, QCoreApplication::translate("RobotWindow", "encoder1", nullptr));
        cbTrackingEncoderSource->setItemText(2, QCoreApplication::translate("RobotWindow", "encoder2", nullptr));

        label_160->setText(QCoreApplication::translate("RobotWindow", "Tracking Thread", nullptr));
        label_168->setText(QCoreApplication::translate("RobotWindow", "Velocity Vector", nullptr));
        pbMoveTestTrackingPoint->setText(QCoreApplication::translate("RobotWindow", "Move", nullptr));
        label_231->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        label_11->setText(QCoreApplication::translate("RobotWindow", "Test Tracking Point", nullptr));
        label_232->setText(QCoreApplication::translate("RobotWindow", "(mm)", nullptr));
        label_230->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        leMovingValue->setText(QCoreApplication::translate("RobotWindow", "200", nullptr));
        tbCopyTestTrackingPoint->setText(QString());
        label_236->setText(QCoreApplication::translate("RobotWindow", "Z", nullptr));
        gbCameraCalibration_3->setTitle(QCoreApplication::translate("RobotWindow", "Vector", nullptr));
        pbAddVector->setText(QCoreApplication::translate("RobotWindow", "Save", nullptr));
        label_197->setText(QCoreApplication::translate("RobotWindow", "Value", nullptr));
        label_206->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        label_229->setText(QCoreApplication::translate("RobotWindow", "Name", nullptr));
        pbAnglePoint1->setText(QCoreApplication::translate("RobotWindow", "Point 1", nullptr));
        pbCalVector->setText(QCoreApplication::translate("RobotWindow", "Calculate", nullptr));
        label_226->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        label_228->setText(QCoreApplication::translate("RobotWindow", "Z", nullptr));
        label_208->setText(QCoreApplication::translate("RobotWindow", "Z", nullptr));
        leVectorName->setText(QCoreApplication::translate("RobotWindow", "#Vector1", nullptr));
        label_227->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        pbAnglePoint2->setText(QCoreApplication::translate("RobotWindow", "Point 2", nullptr));
        label_189->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        gbCameraCalibration_2->setTitle(QCoreApplication::translate("RobotWindow", "Matrix", nullptr));
        label_205->setText(QCoreApplication::translate("RobotWindow", "Point 2", nullptr));
        label_201->setText(QCoreApplication::translate("RobotWindow", "Point 2", nullptr));
        leMatrixName->setText(QCoreApplication::translate("RobotWindow", "#MappingMatrix1", nullptr));
        label_203->setText(QCoreApplication::translate("RobotWindow", "Point 1", nullptr));
        label_165->setText(QCoreApplication::translate("RobotWindow", "Name", nullptr));
        label_166->setText(QCoreApplication::translate("RobotWindow", "Source", nullptr));
        pbCalculateMappingMatrixTool->setText(QCoreApplication::translate("RobotWindow", "Calculate", nullptr));
        label_202->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        label_204->setText(QCoreApplication::translate("RobotWindow", "Point 1", nullptr));
        label_177->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        pbAddMappingMatrix->setText(QCoreApplication::translate("RobotWindow", "Add Matrix", nullptr));
        label_200->setText(QCoreApplication::translate("RobotWindow", "Destination", nullptr));
        lbMatrixDisplay->setText(QCoreApplication::translate("RobotWindow", "<html><head/><body><p>|m11 , m12, m13 |</p><p>|m21, m22, m23 |</p><p>|m31, m32, m33 |</p></body></html>", nullptr));
        gbCameraObject_2->setTitle(QCoreApplication::translate("RobotWindow", "Object", nullptr));
        label_136->setText(QCoreApplication::translate("RobotWindow", "Object List", nullptr));
        leObjectListName->setText(QCoreApplication::translate("RobotWindow", "#Objects", nullptr));
        label_137->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        label_138->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        label_143->setText(QCoreApplication::translate("RobotWindow", "Z", nullptr));
        pbAddVariablePoint->setText(QCoreApplication::translate("RobotWindow", "Add Point", nullptr));
        gbCameraObject_3->setTitle(QCoreApplication::translate("RobotWindow", "Point Matrix", nullptr));
        label_212->setText(QCoreApplication::translate("RobotWindow", "Point 3", nullptr));
        pbAddPointMatrix->setText(QCoreApplication::translate("RobotWindow", "Add Matrix", nullptr));
        label_217->setText(QCoreApplication::translate("RobotWindow", "Point 2", nullptr));
        label_207->setText(QCoreApplication::translate("RobotWindow", "Destination", nullptr));
        label_211->setText(QCoreApplication::translate("RobotWindow", "Point 1", nullptr));
        label_218->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        label_210->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        lePointMatrixName->setText(QCoreApplication::translate("RobotWindow", "#PointMatrix1", nullptr));
        lbPointMatrixDisplay->setText(QCoreApplication::translate("RobotWindow", "<html><head/><body><p>|m11 , m12, m13 |</p><p>|m21, m22, m23 |</p><p>|m31, m32, m33 |</p></body></html>", nullptr));
        label_219->setText(QCoreApplication::translate("RobotWindow", "Point 4", nullptr));
        label_234->setText(QCoreApplication::translate("RobotWindow", "Point 3", nullptr));
        label_216->setText(QCoreApplication::translate("RobotWindow", "Name", nullptr));
        label_220->setText(QCoreApplication::translate("RobotWindow", "Point 1", nullptr));
        label_235->setText(QCoreApplication::translate("RobotWindow", "Point 4", nullptr));
        label_167->setText(QCoreApplication::translate("RobotWindow", "Source", nullptr));
        pbCalculatePointMatrixTool->setText(QCoreApplication::translate("RobotWindow", "Calculate", nullptr));
        label_233->setText(QCoreApplication::translate("RobotWindow", "Point 2", nullptr));
        gbCameraObject_4->setTitle(QCoreApplication::translate("RobotWindow", "Test", nullptr));
        label_223->setText(QCoreApplication::translate("RobotWindow", "multiply", nullptr));
        leTestMatrixName->setText(QCoreApplication::translate("RobotWindow", "#MappingMatrix1", nullptr));
        label_214->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        label_215->setText(QCoreApplication::translate("RobotWindow", "Point", nullptr));
        pbCalculateTestPoint->setText(QCoreApplication::translate("RobotWindow", "Calculate", nullptr));
        label_222->setText(QCoreApplication::translate("RobotWindow", "Matrix", nullptr));
        label_221->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        twModule->setTabText(twModule->indexOf(tPointTool), QCoreApplication::translate("RobotWindow", "Point Tool", nullptr));
        pbOpenPicture->setText(QCoreApplication::translate("RobotWindow", "Load Image", nullptr));
        lbImageForDrawing->setText(QString());
        lbImageWidth->setText(QCoreApplication::translate("RobotWindow", "W: 300", nullptr));
        lbImageHeight->setText(QCoreApplication::translate("RobotWindow", "H: 100", nullptr));
        cbConversionTool->setItemText(0, QCoreApplication::translate("RobotWindow", "Threshold", nullptr));
        cbConversionTool->setItemText(1, QCoreApplication::translate("RobotWindow", "Vectorize", nullptr));
        cbConversionTool->setItemText(2, QCoreApplication::translate("RobotWindow", "Gray", nullptr));

        leDrawingThreshold->setText(QCoreApplication::translate("RobotWindow", "150", nullptr));
        label_14->setText(QCoreApplication::translate("RobotWindow", "Conversion Tool", nullptr));
        label_105->setText(QCoreApplication::translate("RobotWindow", "Reverse", nullptr));
        cbReverseDrawing->setText(QString());
        pbPainting->setText(QCoreApplication::translate("RobotWindow", "Draw", nullptr));
        label_20->setText(QCoreApplication::translate("RobotWindow", "Height", nullptr));
        label_18->setText(QCoreApplication::translate("RobotWindow", "Width", nullptr));
        cbLockDrawingArea->setItemText(0, QCoreApplication::translate("RobotWindow", "Height", nullptr));
        cbLockDrawingArea->setItemText(1, QCoreApplication::translate("RobotWindow", "Width", nullptr));

        label_104->setText(QCoreApplication::translate("RobotWindow", "Lock", nullptr));
        leWidthScale->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        leHeightScale->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        label_21->setText(QCoreApplication::translate("RobotWindow", "100%", nullptr));
        lbDrawingArea->setText(QString());
        label_26->setText(QCoreApplication::translate("RobotWindow", "O", nullptr));
        label_25->setText(QCoreApplication::translate("RobotWindow", "W", nullptr));
        label_24->setText(QCoreApplication::translate("RobotWindow", "H", nullptr));
        label_22->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        label_19->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        leDrawAg1->setText(QString());
        pbDrawLine->setText(QCoreApplication::translate("RobotWindow", "Line", nullptr));
        pbDrawRectangle->setText(QCoreApplication::translate("RobotWindow", "Rectangle", nullptr));
        pbZoomIn->setText(QCoreApplication::translate("RobotWindow", "Zoom In", nullptr));
        pbCursor->setText(QCoreApplication::translate("RobotWindow", "Cursor", nullptr));
        pbDrawArc->setText(QCoreApplication::translate("RobotWindow", "Arc", nullptr));
        pbDrawCircle->setText(QCoreApplication::translate("RobotWindow", "Circle", nullptr));
        pbZoomOut->setText(QCoreApplication::translate("RobotWindow", "Zoom Out", nullptr));
        pbExportDrawingGcodes->setText(QCoreApplication::translate("RobotWindow", "Export G-code", nullptr));
        label_96->setText(QCoreApplication::translate("RobotWindow", "Travel Speed", nullptr));
        label_101->setText(QCoreApplication::translate("RobotWindow", "mm/s", nullptr));
        label_13->setText(QCoreApplication::translate("RobotWindow", "Move Type", nullptr));
        label_97->setText(QCoreApplication::translate("RobotWindow", "Drawing Speed", nullptr));
        cbDrawMethod->setItemText(0, QCoreApplication::translate("RobotWindow", "Line", nullptr));
        cbDrawMethod->setItemText(1, QCoreApplication::translate("RobotWindow", "Dot", nullptr));

        cbDrawingEffector->setItemText(0, QCoreApplication::translate("RobotWindow", "Laser", nullptr));
        cbDrawingEffector->setItemText(1, QCoreApplication::translate("RobotWindow", "Pen", nullptr));

        label_102->setText(QCoreApplication::translate("RobotWindow", "mm/s2", nullptr));
        label_93->setText(QCoreApplication::translate("RobotWindow", "Drawing Tool", nullptr));
        label_95->setText(QCoreApplication::translate("RobotWindow", "Drawing Z Height", nullptr));
        label_100->setText(QCoreApplication::translate("RobotWindow", "mm/s", nullptr));
        label_98->setText(QCoreApplication::translate("RobotWindow", "Acceleration", nullptr));
        label_99->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        label_23->setText(QCoreApplication::translate("RobotWindow", "Density", nullptr));
        leSpace->setText(QCoreApplication::translate("RobotWindow", "1", nullptr));
        label_103->setText(QCoreApplication::translate("RobotWindow", "mm/dot(line)", nullptr));
        twModule->setTabText(twModule->indexOf(tDrawing), QCoreApplication::translate("RobotWindow", "Drawing", nullptr));
        teDebug->setHtml(QCoreApplication::translate("RobotWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RobotWindow", "Sender", nullptr));
        label_5->setText(QCoreApplication::translate("RobotWindow", "Receiver", nullptr));
        cbDeviceSender->setItemText(0, QCoreApplication::translate("RobotWindow", "Software", nullptr));
        cbDeviceSender->setItemText(1, QCoreApplication::translate("RobotWindow", "Robot", nullptr));
        cbDeviceSender->setItemText(2, QCoreApplication::translate("RobotWindow", "Conveyor", nullptr));
        cbDeviceSender->setItemText(3, QCoreApplication::translate("RobotWindow", "Slider", nullptr));
        cbDeviceSender->setItemText(4, QCoreApplication::translate("RobotWindow", "External MCU", nullptr));
        cbDeviceSender->setItemText(5, QCoreApplication::translate("RobotWindow", "Encoder", nullptr));

        twModule->setTabText(twModule->indexOf(TermiteTab), QCoreApplication::translate("RobotWindow", "Termite", nullptr));
        label_158->setText(QCoreApplication::translate("RobotWindow", "Selected Robot", nullptr));
#if QT_CONFIG(tooltip)
        tbAutoScanRobot->setToolTip(QCoreApplication::translate("RobotWindow", "Creat New Editor", nullptr));
#endif // QT_CONFIG(tooltip)
        tbAutoScanRobot->setText(QCoreApplication::translate("RobotWindow", "  Auto Scan", nullptr));
        pbConnect->setText(QCoreApplication::translate("RobotWindow", "Connect", nullptr));
        cbSelectedRobot->setItemText(0, QCoreApplication::translate("RobotWindow", "robot0", nullptr));
        cbSelectedRobot->setItemText(1, QCoreApplication::translate("RobotWindow", "robot1", nullptr));
        cbSelectedRobot->setItemText(2, QCoreApplication::translate("RobotWindow", "robot2", nullptr));
        cbSelectedRobot->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        groupBox->setTitle(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        lbComName->setText(QCoreApplication::translate("RobotWindow", "NONE", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RobotWindow", "Baudrate", nullptr));
        lbBaudrate->setText(QCoreApplication::translate("RobotWindow", "115200", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("RobotWindow", "Model", nullptr));
        cbRobotModel->setItemText(0, QCoreApplication::translate("RobotWindow", "Delta X 1", nullptr));
        cbRobotModel->setItemText(1, QCoreApplication::translate("RobotWindow", "Delta X 2", nullptr));
        cbRobotModel->setItemText(2, QCoreApplication::translate("RobotWindow", "Delta X S", nullptr));
        cbRobotModel->setItemText(3, QCoreApplication::translate("RobotWindow", "Custom", nullptr));

        groupBox_4->setTitle(QCoreApplication::translate("RobotWindow", "DOF", nullptr));
        cbRobotDOF->setItemText(0, QCoreApplication::translate("RobotWindow", "3 DOF", nullptr));
        cbRobotDOF->setItemText(1, QCoreApplication::translate("RobotWindow", "4 DOF", nullptr));
        cbRobotDOF->setItemText(2, QCoreApplication::translate("RobotWindow", "5 DOF", nullptr));
        cbRobotDOF->setItemText(3, QCoreApplication::translate("RobotWindow", "6 DOF", nullptr));

        label_270->setText(QCoreApplication::translate("RobotWindow", "Position", nullptr));
#if QT_CONFIG(tooltip)
        tbDisableRobot->setToolTip(QCoreApplication::translate("RobotWindow", "Creat New Editor", nullptr));
#endif // QT_CONFIG(tooltip)
        tbDisableRobot->setText(QCoreApplication::translate("RobotWindow", "  Hold", nullptr));
#if QT_CONFIG(tooltip)
        tbRequestPosition->setToolTip(QCoreApplication::translate("RobotWindow", "Creat New Editor", nullptr));
#endif // QT_CONFIG(tooltip)
        tbRequestPosition->setText(QCoreApplication::translate("RobotWindow", "Refresh", nullptr));
        pbHome->setText(QCoreApplication::translate("RobotWindow", "Homing", nullptr));
        label_92->setText(QCoreApplication::translate("RobotWindow", "U", nullptr));
        label_90->setText(QCoreApplication::translate("RobotWindow", "W", nullptr));
        label_94->setText(QCoreApplication::translate("RobotWindow", "V", nullptr));
        label_84->setText(QCoreApplication::translate("RobotWindow", "X", nullptr));
        label_88->setText(QCoreApplication::translate("RobotWindow", "Z", nullptr));
        label_86->setText(QCoreApplication::translate("RobotWindow", "Y", nullptr));
        leX->setText(QString());
        label_277->setText(QCoreApplication::translate("RobotWindow", " (mm) ", nullptr));
        label_278->setText(QCoreApplication::translate("RobotWindow", " (degree) ", nullptr));
        robotTitile_4->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Title", nullptr)));
        label_271->setText(QCoreApplication::translate("RobotWindow", "Jogging", nullptr));
#if QT_CONFIG(tooltip)
        pbLeft->setToolTip(QCoreApplication::translate("RobotWindow", "Left (shift + w)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbLeft->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbLeft->setText(QCoreApplication::translate("RobotWindow", "X-", nullptr));
#if QT_CONFIG(shortcut)
        pbLeft->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        pbLeft->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbBackward->setToolTip(QCoreApplication::translate("RobotWindow", "Backward (shift + s)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbBackward->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbBackward->setText(QCoreApplication::translate("RobotWindow", "Y-", nullptr));
#if QT_CONFIG(shortcut)
        pbBackward->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        pbBackward->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
        label_275->setText(QCoreApplication::translate("RobotWindow", "5-axis", nullptr));
#if QT_CONFIG(tooltip)
        pbPlusRoll->setToolTip(QCoreApplication::translate("RobotWindow", "Right (Shift +d)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbPlusRoll->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbPlusRoll->setText(QCoreApplication::translate("RobotWindow", "W+", nullptr));
#if QT_CONFIG(shortcut)
        pbPlusRoll->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+G", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPlusRoll->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
        label_274->setText(QCoreApplication::translate("RobotWindow", "6-axis", nullptr));
#if QT_CONFIG(tooltip)
        pbSubPitch->setToolTip(QCoreApplication::translate("RobotWindow", "Left (shift + w)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbSubPitch->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbSubPitch->setText(QCoreApplication::translate("RobotWindow", "V-", nullptr));
#if QT_CONFIG(shortcut)
        pbSubPitch->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+U", nullptr));
#endif // QT_CONFIG(shortcut)
        pbSubPitch->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbSubRoll->setToolTip(QCoreApplication::translate("RobotWindow", "Left (shift + w)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbSubRoll->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbSubRoll->setText(QCoreApplication::translate("RobotWindow", "W-", nullptr));
#if QT_CONFIG(shortcut)
        pbSubRoll->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        pbSubRoll->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbUp->setToolTip(QCoreApplication::translate("RobotWindow", "Up (shift + r)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbUp->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbUp->setText(QCoreApplication::translate("RobotWindow", "Z+", nullptr));
#if QT_CONFIG(shortcut)
        pbUp->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        pbUp->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbDown->setToolTip(QCoreApplication::translate("RobotWindow", "Down (shift + f)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbDown->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbDown->setText(QCoreApplication::translate("RobotWindow", "Z-", nullptr));
#if QT_CONFIG(shortcut)
        pbDown->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        pbDown->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbForward->setToolTip(QCoreApplication::translate("RobotWindow", "Forward (Shift + w)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbForward->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbForward->setText(QCoreApplication::translate("RobotWindow", "Y+", nullptr));
#if QT_CONFIG(shortcut)
        pbForward->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        pbForward->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbRight->setToolTip(QCoreApplication::translate("RobotWindow", "Right (Shift +d)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbRight->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbRight->setText(QCoreApplication::translate("RobotWindow", "X+", nullptr));
#if QT_CONFIG(shortcut)
        pbRight->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+D", nullptr));
#endif // QT_CONFIG(shortcut)
        pbRight->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbPlusPitch->setToolTip(QCoreApplication::translate("RobotWindow", "Right (Shift +d)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbPlusPitch->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbPlusPitch->setText(QCoreApplication::translate("RobotWindow", "V+", nullptr));
#if QT_CONFIG(shortcut)
        pbPlusPitch->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+J", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPlusPitch->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
#if QT_CONFIG(tooltip)
        pbSubYaw->setToolTip(QCoreApplication::translate("RobotWindow", "Left (shift + w)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbSubYaw->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbSubYaw->setText(QCoreApplication::translate("RobotWindow", "U-", nullptr));
#if QT_CONFIG(shortcut)
        pbSubYaw->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        pbSubYaw->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
        label_276->setText(QCoreApplication::translate("RobotWindow", "4-axis", nullptr));
#if QT_CONFIG(tooltip)
        pbPlusYaw->setToolTip(QCoreApplication::translate("RobotWindow", "Right (Shift +d)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        pbPlusYaw->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        pbPlusYaw->setText(QCoreApplication::translate("RobotWindow", "U+", nullptr));
#if QT_CONFIG(shortcut)
        pbPlusYaw->setShortcut(QCoreApplication::translate("RobotWindow", "Shift+H", nullptr));
#endif // QT_CONFIG(shortcut)
        pbPlusYaw->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Jogging", nullptr)));
        label_33->setText(QCoreApplication::translate("RobotWindow", "  Step  ", nullptr));
        rb01->setText(QCoreApplication::translate("RobotWindow", "0.1", nullptr));
        rb05->setText(QCoreApplication::translate("RobotWindow", "0.5", nullptr));
        rb10->setText(QCoreApplication::translate("RobotWindow", "1", nullptr));
        rb50->setText(QCoreApplication::translate("RobotWindow", "5", nullptr));
        rb100->setText(QCoreApplication::translate("RobotWindow", "10", nullptr));
        rb500->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
        rb1000->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        label_273->setText(QCoreApplication::translate("RobotWindow", " (mm) ", nullptr));
        label_272->setText(QCoreApplication::translate("RobotWindow", "Motion Parameters", nullptr));
        leEndSpeed->setText(QString());
        leEndSpeed->setPlaceholderText(QCoreApplication::translate("RobotWindow", "None", nullptr));
        label_62->setText(QCoreApplication::translate("RobotWindow", "S", nullptr));
        leAccel->setText(QString());
        leAccel->setPlaceholderText(QCoreApplication::translate("RobotWindow", "None", nullptr));
        leVelocity->setText(QString());
        leVelocity->setPlaceholderText(QCoreApplication::translate("RobotWindow", "None", nullptr));
        label_29->setText(QCoreApplication::translate("RobotWindow", "F", nullptr));
        leStartSpeed->setText(QString());
        leStartSpeed->setPlaceholderText(QCoreApplication::translate("RobotWindow", "None", nullptr));
        label_32->setText(QCoreApplication::translate("RobotWindow", "mm/s2", nullptr));
        label_30->setText(QCoreApplication::translate("RobotWindow", "mm/s", nullptr));
        label_31->setText(QCoreApplication::translate("RobotWindow", "A", nullptr));
        label_63->setText(QCoreApplication::translate("RobotWindow", "mm/s", nullptr));
        label_116->setText(QCoreApplication::translate("RobotWindow", "E", nullptr));
        label_117->setText(QCoreApplication::translate("RobotWindow", "mm/s", nullptr));
        leJerk->setText(QString());
        leJerk->setPlaceholderText(QCoreApplication::translate("RobotWindow", "None", nullptr));
        label_64->setText(QCoreApplication::translate("RobotWindow", "mm/s3", nullptr));
        label_47->setText(QCoreApplication::translate("RobotWindow", "J", nullptr));
        robotTitile_3->setProperty("Func", QVariant(QCoreApplication::translate("RobotWindow", "Title", nullptr)));
        label_279->setText(QCoreApplication::translate("RobotWindow", "Output", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("RobotWindow", "Delta X 1 / Delta X 2", nullptr));
        pbPump->setText(QCoreApplication::translate("RobotWindow", "  Vacuum", nullptr));
        pbLaser->setText(QCoreApplication::translate("RobotWindow", "      Laser", nullptr));
        label_17->setText(QCoreApplication::translate("RobotWindow", "min", nullptr));
        label_27->setText(QCoreApplication::translate("RobotWindow", "max", nullptr));
        pbGrip->setText(QCoreApplication::translate("RobotWindow", "Grip", nullptr));
        leGripperMin->setText(QCoreApplication::translate("RobotWindow", "5", nullptr));
        leGripperMax->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        lbGripperValue->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        gbOutput->setTitle(QCoreApplication::translate("RobotWindow", "Delta X S Output", nullptr));
        cbD3->setText(QString());
        cbD0->setText(QString());
        label_71->setText(QCoreApplication::translate("RobotWindow", "D6", nullptr));
        label_66->setText(QCoreApplication::translate("RobotWindow", "D4", nullptr));
        cbD6->setText(QString());
        label_53->setText(QCoreApplication::translate("RobotWindow", "D1", nullptr));
        cbD2->setText(QString());
        cbD7->setText(QString());
        label_72->setText(QCoreApplication::translate("RobotWindow", "D7", nullptr));
        cbD1->setText(QString());
        cbD4->setText(QString());
        label_51->setText(QCoreApplication::translate("RobotWindow", "D0", nullptr));
        label_69->setText(QCoreApplication::translate("RobotWindow", "D5", nullptr));
        label_61->setText(QCoreApplication::translate("RobotWindow", "D3", nullptr));
        cbD5->setText(QString());
        label_60->setText(QCoreApplication::translate("RobotWindow", "D2", nullptr));
        label_68->setText(QCoreApplication::translate("RobotWindow", "Digital", nullptr));
        label_67->setText(QCoreApplication::translate("RobotWindow", "Custom", nullptr));
        leDx->setText(QCoreApplication::translate("RobotWindow", "D0", nullptr));
        cbDx->setText(QString());
        leRx->setText(QCoreApplication::translate("RobotWindow", "R0", nullptr));
        cbRx->setText(QString());
        label_280->setText(QCoreApplication::translate("RobotWindow", "Input", nullptr));
        gbInput->setTitle(QCoreApplication::translate("RobotWindow", "Delta X S Input", nullptr));
        pbReadI0->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        label_70->setText(QCoreApplication::translate("RobotWindow", "I0", nullptr));
        lbI0Value->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
#if QT_CONFIG(tooltip)
        cbToggle0->setToolTip(QCoreApplication::translate("RobotWindow", "The robot will respond when the value of digital input pin changes", nullptr));
#endif // QT_CONFIG(tooltip)
        cbToggle0->setText(QCoreApplication::translate("RobotWindow", "wait toggle", nullptr));
        pbReadI1->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        label_74->setText(QCoreApplication::translate("RobotWindow", "I1", nullptr));
        lbI1Value->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
#if QT_CONFIG(tooltip)
        cbToggle1->setToolTip(QCoreApplication::translate("RobotWindow", "The robot will respond when the value of digital input pin changes", nullptr));
#endif // QT_CONFIG(tooltip)
        cbToggle1->setText(QCoreApplication::translate("RobotWindow", "wait toggle", nullptr));
        pbReadI2->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        label_76->setText(QCoreApplication::translate("RobotWindow", "I2", nullptr));
        lbI2Value->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
#if QT_CONFIG(tooltip)
        cbToggle2->setToolTip(QCoreApplication::translate("RobotWindow", "The robot will respond when the value of digital input pin changes", nullptr));
#endif // QT_CONFIG(tooltip)
        cbToggle2->setText(QCoreApplication::translate("RobotWindow", "wait toggle", nullptr));
        pbReadI3->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        label_78->setText(QCoreApplication::translate("RobotWindow", "I3", nullptr));
        lbI3Value->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
#if QT_CONFIG(tooltip)
        cbToggle3->setToolTip(QCoreApplication::translate("RobotWindow", "The robot will respond when the value of digital input pin changes", nullptr));
#endif // QT_CONFIG(tooltip)
        cbToggle3->setText(QCoreApplication::translate("RobotWindow", "wait toggle", nullptr));
        pbReadIx->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        leIx->setText(QCoreApplication::translate("RobotWindow", "I4", nullptr));
        leIx->setPlaceholderText(QCoreApplication::translate("RobotWindow", "I", nullptr));
        lbIxValue->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
#if QT_CONFIG(tooltip)
        cbTogglex->setToolTip(QCoreApplication::translate("RobotWindow", "The robot will respond when the value of digital input pin changes", nullptr));
#endif // QT_CONFIG(tooltip)
        cbTogglex->setText(QCoreApplication::translate("RobotWindow", "wait toggle", nullptr));
        pbReadA0->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        label_83->setText(QCoreApplication::translate("RobotWindow", "A0", nullptr));
        lbA0Value->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
        leA0Delay->setPlaceholderText(QCoreApplication::translate("RobotWindow", "0 ms", nullptr));
        pbReadA1->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        label_85->setText(QCoreApplication::translate("RobotWindow", "A1", nullptr));
        lbA1Value->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
        leA1Delay->setPlaceholderText(QCoreApplication::translate("RobotWindow", "0 ms", nullptr));
        pbReadAx->setText(QCoreApplication::translate("RobotWindow", "read", nullptr));
        leAx->setText(QCoreApplication::translate("RobotWindow", "A2", nullptr));
        leAx->setPlaceholderText(QCoreApplication::translate("RobotWindow", "I", nullptr));
        lbAxValue->setText(QCoreApplication::translate("RobotWindow", "null", nullptr));
        leAxDelay->setPlaceholderText(QCoreApplication::translate("RobotWindow", "0 ms", nullptr));
        twDevices->setTabText(twDevices->indexOf(tRobot), QCoreApplication::translate("RobotWindow", "Robot", nullptr));
        label->setText(QCoreApplication::translate("RobotWindow", "Selected Conveyor", nullptr));
        checkBox->setText(QCoreApplication::translate("RobotWindow", "Auto Scan", nullptr));
        pbConveyorConnect->setText(QCoreApplication::translate("RobotWindow", "Connect", nullptr));
        cbSelectedConveyor->setItemText(0, QCoreApplication::translate("RobotWindow", "conveyor0", nullptr));
        cbSelectedConveyor->setItemText(1, QCoreApplication::translate("RobotWindow", "conveyor1", nullptr));
        cbSelectedConveyor->setItemText(2, QCoreApplication::translate("RobotWindow", "conveyor2", nullptr));
        cbSelectedConveyor->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        groupBox_10->setTitle(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        lbConveyorCOMName->setText(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("RobotWindow", "Baudrate", nullptr));
        lbBaudrate_3->setText(QCoreApplication::translate("RobotWindow", "115200", nullptr));
        label_8->setText(QCoreApplication::translate("RobotWindow", "Type", nullptr));
        cbConveyorType->setItemText(0, QCoreApplication::translate("RobotWindow", "Conveyor X", nullptr));
        cbConveyorType->setItemText(1, QCoreApplication::translate("RobotWindow", "Conveyor Hub X", nullptr));
        cbConveyorType->setItemText(2, QCoreApplication::translate("RobotWindow", "Custom", nullptr));

#if QT_CONFIG(tooltip)
        leConveyorXPosition->setToolTip(QCoreApplication::translate("RobotWindow", "<html><head/><body><p><a name=\"32\"/><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">M</span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">311 \342\200\223 Set Speed</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Description:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Seg"
                        "oe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Usage: M311 [&lt;value&gt;]</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Parameters:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">[&lt;value&gt;]: Speed in mm/s</span></p><p><br/></p><p><a name=\"33\"/><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">M</span><span style=\" font-family:'-apple-system','BlinkMacSys"
                        "temFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">312 - Set Position</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Description:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Usage: M312 [&lt;value&gt;]</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background"
                        "-color:#ffffff;\">Parameters:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">[&lt;value&gt;]: Position in mm</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        leConveyorXPosition->setText(QCoreApplication::translate("RobotWindow", "-100", nullptr));
        label_12->setText(QCoreApplication::translate("RobotWindow", "Position", nullptr));
        label_52->setText(QCoreApplication::translate("RobotWindow", "Control Mode", nullptr));
        label_57->setText(QCoreApplication::translate("RobotWindow", "Speed", nullptr));
        cbConveyorMode->setItemText(0, QCoreApplication::translate("RobotWindow", "Manual", nullptr));
        cbConveyorMode->setItemText(1, QCoreApplication::translate("RobotWindow", "UART", nullptr));

#if QT_CONFIG(tooltip)
        cbConveyorMode->setToolTip(QCoreApplication::translate("RobotWindow", "<html><head/><body><p><a name=\"31\"/><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">M</span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">310 \342\200\223 Set Mode</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Description: .</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Se"
                        "goe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Usage: M310 [&lt;index&gt;]</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Parameters:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">1: Serial Mode.</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">0: Volume Mode.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        cbConveyorValueType->setItemText(0, QCoreApplication::translate("RobotWindow", "Continuous", nullptr));
        cbConveyorValueType->setItemText(1, QCoreApplication::translate("RobotWindow", "Position", nullptr));

        lbUnitOfConveyorMoving->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
        lbSpeedOfPositionMode->setText(QCoreApplication::translate("RobotWindow", "mm/s2", nullptr));
#if QT_CONFIG(tooltip)
        leConveyorXSpeed->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        leConveyorXSpeed->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
        label_46->setText(QCoreApplication::translate("RobotWindow", "Moving Mode", nullptr));
        label_77->setText(QCoreApplication::translate("RobotWindow", "Position (mm)", nullptr));
#if QT_CONFIG(tooltip)
        leSubConveyor1Position->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        leSubConveyor1Position->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
        label_115->setText(QCoreApplication::translate("RobotWindow", "Moving Mode", nullptr));
        label_114->setText(QCoreApplication::translate("RobotWindow", "C3", nullptr));
        cbSubConveyor2Mode->setItemText(0, QCoreApplication::translate("RobotWindow", "Continuous", nullptr));
        cbSubConveyor2Mode->setItemText(1, QCoreApplication::translate("RobotWindow", "Position", nullptr));

#if QT_CONFIG(tooltip)
        leSubConveyor1Speed->setToolTip(QCoreApplication::translate("RobotWindow", "<html><head/><body><p><a name=\"32\"/><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">M</span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">311 \342\200\223 Set Speed</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Description:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Seg"
                        "oe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Usage: M311 [&lt;value&gt;]</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Parameters:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">[&lt;value&gt;]: Speed in mm/s</span></p><p><br/></p><p><a name=\"33\"/><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">M</span><span style=\" font-family:'-apple-system','BlinkMacSys"
                        "temFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">312 - Set Position</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Description:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Usage: M312 [&lt;value&gt;]</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background"
                        "-color:#ffffff;\">Parameters:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">[&lt;value&gt;]: Position in mm</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        leSubConveyor1Speed->setText(QCoreApplication::translate("RobotWindow", "-100", nullptr));
        label_75->setText(QCoreApplication::translate("RobotWindow", "C1", nullptr));
        label_82->setText(QCoreApplication::translate("RobotWindow", "C2", nullptr));
#if QT_CONFIG(tooltip)
        leSubConveyor2Position->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        leSubConveyor2Position->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
#if QT_CONFIG(tooltip)
        leSubConveyor2Speed->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        leSubConveyor2Speed->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
        cbSubConveyor3Mode->setItemText(0, QCoreApplication::translate("RobotWindow", "Continuous", nullptr));
        cbSubConveyor3Mode->setItemText(1, QCoreApplication::translate("RobotWindow", "Position", nullptr));

#if QT_CONFIG(tooltip)
        leSubConveyor3Speed->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        leSubConveyor3Speed->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
        cbSubConveyor1Mode->setItemText(0, QCoreApplication::translate("RobotWindow", "Continuous", nullptr));
        cbSubConveyor1Mode->setItemText(1, QCoreApplication::translate("RobotWindow", "Position", nullptr));

        label_80->setText(QCoreApplication::translate("RobotWindow", "Speed (mm/s2)", nullptr));
#if QT_CONFIG(tooltip)
        leSubConveyor3Position->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        leSubConveyor3Position->setText(QCoreApplication::translate("RobotWindow", "50", nullptr));
#if QT_CONFIG(tooltip)
        pbStopCustomConveyor2Command->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pbStopCustomConveyor2Command->setText(QCoreApplication::translate("RobotWindow", "robot0 M05 D1", nullptr));
        pbStartCustomConveyor3->setText(QCoreApplication::translate("RobotWindow", "Start", nullptr));
        pbStopCustomConveyor3->setText(QCoreApplication::translate("RobotWindow", "Stop", nullptr));
        label_147->setText(QCoreApplication::translate("RobotWindow", "C3", nullptr));
#if QT_CONFIG(tooltip)
        pbStartCustomConveyor2Command->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pbStartCustomConveyor2Command->setText(QCoreApplication::translate("RobotWindow", "robot0 M03 D1", nullptr));
        pbStopCustomConveyor2->setText(QCoreApplication::translate("RobotWindow", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        pbStopCustomConveyor3Command->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pbStopCustomConveyor3Command->setText(QCoreApplication::translate("RobotWindow", "robot0 M05 D2", nullptr));
        label_153->setText(QCoreApplication::translate("RobotWindow", "C1", nullptr));
        pbStartCustomConveyor1->setText(QCoreApplication::translate("RobotWindow", "Start", nullptr));
        pbStopCustomConveyor1->setText(QCoreApplication::translate("RobotWindow", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        pbStopCustomConveyor1Command->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pbStopCustomConveyor1Command->setText(QCoreApplication::translate("RobotWindow", "robot0 M05 D0", nullptr));
#if QT_CONFIG(tooltip)
        pbStartCustomConveyor1Command->setToolTip(QCoreApplication::translate("RobotWindow", "<html><head/><body><p><a name=\"32\"/><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">M</span><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">311 \342\200\223 Set Speed</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Description:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Seg"
                        "oe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Usage: M311 [&lt;value&gt;]</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Parameters:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">[&lt;value&gt;]: Speed in mm/s</span></p><p><br/></p><p><a name=\"33\"/><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">M</span><span style=\" font-family:'-apple-system','BlinkMacSys"
                        "temFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-weight:600; color:#212529;\">312 - Set Position</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Description:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">Usage: M312 [&lt;value&gt;]</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background"
                        "-color:#ffffff;\">Parameters:</span></p><p><span style=\" font-family:'-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; color:#212529; background-color:#ffffff;\">[&lt;value&gt;]: Position in mm</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pbStartCustomConveyor1Command->setText(QCoreApplication::translate("RobotWindow", "robot0 M03 D0", nullptr));
        pbStartCustomConveyor2->setText(QCoreApplication::translate("RobotWindow", "Start", nullptr));
#if QT_CONFIG(tooltip)
        pbStartCustomConveyor3Command->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pbStartCustomConveyor3Command->setText(QCoreApplication::translate("RobotWindow", "robot0 M03 D2", nullptr));
        label_154->setText(QCoreApplication::translate("RobotWindow", "C2", nullptr));
        twDevices->setTabText(twDevices->indexOf(ConveyorTab), QCoreApplication::translate("RobotWindow", "Conveyor", nullptr));
        label_9->setText(QCoreApplication::translate("RobotWindow", "Selected Encoder", nullptr));
        checkBox_3->setText(QCoreApplication::translate("RobotWindow", "Auto Scan", nullptr));
        pbConnectEncoder->setText(QCoreApplication::translate("RobotWindow", "Connect", nullptr));
        cbSelectedEncoder->setItemText(0, QCoreApplication::translate("RobotWindow", "encoder0", nullptr));
        cbSelectedEncoder->setItemText(1, QCoreApplication::translate("RobotWindow", "encoder1", nullptr));
        cbSelectedEncoder->setItemText(2, QCoreApplication::translate("RobotWindow", "encoder2", nullptr));
        cbSelectedEncoder->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        groupBox_12->setTitle(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        lbEncoderCOMname->setText(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("RobotWindow", "Baudrate", nullptr));
        lbBaudrate_5->setText(QCoreApplication::translate("RobotWindow", "115200", nullptr));
        label_124->setText(QCoreApplication::translate("RobotWindow", "Type", nullptr));
        cbEncoderType->setItemText(0, QCoreApplication::translate("RobotWindow", "Encoder X", nullptr));
        cbEncoderType->setItemText(1, QCoreApplication::translate("RobotWindow", "Sub Encoder", nullptr));
        cbEncoderType->setItemText(2, QCoreApplication::translate("RobotWindow", "Virtual Encoder", nullptr));

        cbEncoderActive->setText(QCoreApplication::translate("RobotWindow", "Active", nullptr));
        leEncoderCurrentPosition->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        pbSetEncoderInterval->setText(QCoreApplication::translate("RobotWindow", "Set", nullptr));
        label_129->setText(QCoreApplication::translate("RobotWindow", "Velocity (mm/s)", nullptr));
        leEncoderInterval->setText(QCoreApplication::translate("RobotWindow", "1000", nullptr));
        label_125->setText(QCoreApplication::translate("RobotWindow", "Timer (ms)", nullptr));
        pbResetEncoder->setText(QCoreApplication::translate("RobotWindow", "Reset", nullptr));
        pbSetEncoderVelocity->setText(QCoreApplication::translate("RobotWindow", "Set", nullptr));
        label_130->setText(QCoreApplication::translate("RobotWindow", "Current Position (mm)", nullptr));
        leEncoderVelocity->setText(QCoreApplication::translate("RobotWindow", "100", nullptr));
        pbReadEncoder->setText(QCoreApplication::translate("RobotWindow", "Read", nullptr));
        cbConveyorForVirtualEncoder->setItemText(0, QCoreApplication::translate("RobotWindow", "conveyor0", nullptr));
        cbConveyorForVirtualEncoder->setItemText(1, QCoreApplication::translate("RobotWindow", "conveyor1", nullptr));
        cbConveyorForVirtualEncoder->setItemText(2, QCoreApplication::translate("RobotWindow", "conveyor2", nullptr));

        cbLinkToConveyorX->setText(QCoreApplication::translate("RobotWindow", "Link to Conveyor X", nullptr));
        twDevices->setTabText(twDevices->indexOf(EncoderTab), QCoreApplication::translate("RobotWindow", "Encoder", nullptr));
        label_15->setText(QCoreApplication::translate("RobotWindow", "Selected Encoder", nullptr));
        checkBox_5->setText(QCoreApplication::translate("RobotWindow", "Auto Scan", nullptr));
        pbSlidingConnect->setText(QCoreApplication::translate("RobotWindow", "Connect", nullptr));
        cbSelectedSlider->setItemText(0, QCoreApplication::translate("RobotWindow", "slider0", nullptr));
        cbSelectedSlider->setItemText(1, QCoreApplication::translate("RobotWindow", "slider1", nullptr));
        cbSelectedSlider->setItemText(2, QCoreApplication::translate("RobotWindow", "slider2", nullptr));
        cbSelectedSlider->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        groupBox_19->setTitle(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        lbSliderCOMName->setText(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        groupBox_20->setTitle(QCoreApplication::translate("RobotWindow", "Baudrate", nullptr));
        lbBaudrate_7->setText(QCoreApplication::translate("RobotWindow", "115200", nullptr));
        label_284->setText(QCoreApplication::translate("RobotWindow", "Type", nullptr));
        cbEncoderType_2->setItemText(0, QCoreApplication::translate("RobotWindow", "Encoder X", nullptr));
        cbEncoderType_2->setItemText(1, QCoreApplication::translate("RobotWindow", "Sub Encoder", nullptr));
        cbEncoderType_2->setItemText(2, QCoreApplication::translate("RobotWindow", "Virtual Encoder", nullptr));

        cbEncoderActive_2->setText(QCoreApplication::translate("RobotWindow", "Active", nullptr));
        label_36->setText(QCoreApplication::translate("RobotWindow", "Speed", nullptr));
#if QT_CONFIG(tooltip)
        pbSlidingHome->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pbSlidingHome->setText(QCoreApplication::translate("RobotWindow", "Home", nullptr));
        label_59->setText(QCoreApplication::translate("RobotWindow", "mm", nullptr));
#if QT_CONFIG(tooltip)
        pbSlidingDisable->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        pbSlidingDisable->setText(QCoreApplication::translate("RobotWindow", "Disable motors", nullptr));
        label_37->setText(QCoreApplication::translate("RobotWindow", "Position", nullptr));
        label_58->setText(QCoreApplication::translate("RobotWindow", "mm/s", nullptr));
        twDevices->setTabText(twDevices->indexOf(SliderTab), QCoreApplication::translate("RobotWindow", "Slider", nullptr));
        label_16->setText(QCoreApplication::translate("RobotWindow", "Selected Device", nullptr));
        checkBox_6->setText(QCoreApplication::translate("RobotWindow", "Auto Scan", nullptr));
        pbExternalControllerConnect->setText(QCoreApplication::translate("RobotWindow", "Connect", nullptr));
        cbSelectedDevice->setItemText(0, QCoreApplication::translate("RobotWindow", "device0", nullptr));
        cbSelectedDevice->setItemText(1, QCoreApplication::translate("RobotWindow", "device1", nullptr));
        cbSelectedDevice->setItemText(2, QCoreApplication::translate("RobotWindow", "device2", nullptr));
        cbSelectedDevice->setItemText(3, QCoreApplication::translate("RobotWindow", "+", nullptr));

        groupBox_21->setTitle(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        lbExternalCOMName->setText(QCoreApplication::translate("RobotWindow", "COM", nullptr));
        groupBox_22->setTitle(QCoreApplication::translate("RobotWindow", "Baudrate", nullptr));
        lbBaudrate_8->setText(QCoreApplication::translate("RobotWindow", "115200", nullptr));
        leTransmitToMCU->setText(QString());
        leTransmitToMCU->setPlaceholderText(QCoreApplication::translate("RobotWindow", "Transmit to MCU", nullptr));
        twDevices->setTabText(twDevices->indexOf(MCUTab), QCoreApplication::translate("RobotWindow", "External Device", nullptr));
        twDevices->setTabText(twDevices->indexOf(PlusDeviceTab), QCoreApplication::translate("RobotWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RobotWindow: public Ui_RobotWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTWINDOW_H
