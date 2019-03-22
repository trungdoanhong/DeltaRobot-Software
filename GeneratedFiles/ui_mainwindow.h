/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <CameraWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionreferences;
    QAction *actionAbout;
    QWidget *centralWidget;
    QScrollArea *saProgramFiles;
    QWidget *wgProgramContainer;
    QFrame *frExProgram;
    QLineEdit *leExProgramName;
    QPushButton *pbExDeleteProgram;
    QLabel *lbExGCodeNumber;
    QLabel *lbDebug;
    QPushButton *pbExecuteGcodes;
    QPushButton *pbSaveGcode;
    QPlainTextEdit *pteGcodeArea;
    QLineEdit *leTerminal;
    QPushButton *pbG01;
    QPushButton *pbG28;
    QPushButton *pbM03;
    QPushButton *pbM204;
    QPushButton *pbFormat;
    QPushButton *pbAddNewProgram;
    QTabWidget *twDeltaManager;
    QWidget *tab;
    QWidget *tab_3;
    QTabWidget *tabWidget;
    QWidget *tResultCameraArea;
    CameraWidget *lbScreenStreamer;
    QPushButton *pbLoadCamera;
    QPushButton *pbLoadTestImage;
    QPushButton *pbFilter;
    QLabel *label_11;
    QLineEdit *leFPS;
    QLabel *lbTrackingObject;
    QPushButton *pbObjectRect;
    QPushButton *pbObjectLine;
    QWidget *tab_2;
    QLabel *lbTestImage;
    QPushButton *pbHome;
    QPushButton *pbX;
    QPushButton *pbW;
    QLineEdit *leX;
    QPushButton *pbZ;
    QLineEdit *leY;
    QPushButton *pbGrip;
    QPushButton *pbPump;
    QTabWidget *twDeltaGeometry;
    QWidget *t3D;
    GLWidget *wgOpenGl;
    QWidget *t2D;
    QWidget *wg2D;
    QSlider *vsZAdjsution;
    QWidget *tParameter;
    QWidget *widget;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_6;
    QLabel *label_7;
    QPushButton *pbConnect;
    QLineEdit *leZ;
    QLineEdit *leW;
    QPushButton *pbY;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuEditor;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1299, 688);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("icon/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QStringLiteral("actionAdd"));
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QStringLiteral("actionRemove"));
        actionreferences = new QAction(MainWindow);
        actionreferences->setObjectName(QStringLiteral("actionreferences"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        saProgramFiles = new QScrollArea(centralWidget);
        saProgramFiles->setObjectName(QStringLiteral("saProgramFiles"));
        saProgramFiles->setEnabled(true);
        saProgramFiles->setGeometry(QRect(970, 450, 251, 181));
        saProgramFiles->setMinimumSize(QSize(251, 181));
        saProgramFiles->setStyleSheet(QStringLiteral(""));
        saProgramFiles->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        saProgramFiles->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        saProgramFiles->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        saProgramFiles->setWidgetResizable(false);
        wgProgramContainer = new QWidget();
        wgProgramContainer->setObjectName(QStringLiteral("wgProgramContainer"));
        wgProgramContainer->setGeometry(QRect(0, 0, 279, 589));
        frExProgram = new QFrame(wgProgramContainer);
        frExProgram->setObjectName(QStringLiteral("frExProgram"));
        frExProgram->setGeometry(QRect(10, 10, 221, 71));
        frExProgram->setStyleSheet(QStringLiteral("background-color:rgb(209, 209, 209)"));
        frExProgram->setFrameShape(QFrame::StyledPanel);
        frExProgram->setFrameShadow(QFrame::Raised);
        leExProgramName = new QLineEdit(frExProgram);
        leExProgramName->setObjectName(QStringLiteral("leExProgramName"));
        leExProgramName->setEnabled(true);
        leExProgramName->setGeometry(QRect(10, 10, 160, 30));
        QFont font;
        font.setPointSize(10);
        leExProgramName->setFont(font);
        leExProgramName->setCursor(QCursor(Qt::SizeHorCursor));
        leExProgramName->setStyleSheet(QStringLiteral(""));
        pbExDeleteProgram = new QPushButton(frExProgram);
        pbExDeleteProgram->setObjectName(QStringLiteral("pbExDeleteProgram"));
        pbExDeleteProgram->setGeometry(QRect(180, 10, 30, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("icon/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbExDeleteProgram->setIcon(icon1);
        pbExDeleteProgram->setIconSize(QSize(30, 30));
        pbExDeleteProgram->setAutoDefault(false);
        pbExDeleteProgram->setFlat(true);
        lbExGCodeNumber = new QLabel(frExProgram);
        lbExGCodeNumber->setObjectName(QStringLiteral("lbExGCodeNumber"));
        lbExGCodeNumber->setGeometry(QRect(10, 50, 101, 16));
        saProgramFiles->setWidget(wgProgramContainer);
        lbDebug = new QLabel(centralWidget);
        lbDebug->setObjectName(QStringLiteral("lbDebug"));
        lbDebug->setGeometry(QRect(10, 640, 1281, 21));
        lbDebug->setStyleSheet(QLatin1String("background-color:rgb(70, 70, 70);\n"
"color:rgb(0, 235, 0);\n"
""));
        pbExecuteGcodes = new QPushButton(centralWidget);
        pbExecuteGcodes->setObjectName(QStringLiteral("pbExecuteGcodes"));
        pbExecuteGcodes->setGeometry(QRect(970, 20, 35, 35));
        pbExecuteGcodes->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral("icon/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral("icon/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        pbExecuteGcodes->setIcon(icon2);
        pbExecuteGcodes->setIconSize(QSize(30, 30));
        pbExecuteGcodes->setCheckable(true);
        pbExecuteGcodes->setFlat(false);
        pbSaveGcode = new QPushButton(centralWidget);
        pbSaveGcode->setObjectName(QStringLiteral("pbSaveGcode"));
        pbSaveGcode->setGeometry(QRect(1010, 20, 35, 35));
        QIcon icon3;
        icon3.addFile(QStringLiteral("icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbSaveGcode->setIcon(icon3);
        pbSaveGcode->setIconSize(QSize(30, 30));
        pteGcodeArea = new QPlainTextEdit(centralWidget);
        pteGcodeArea->setObjectName(QStringLiteral("pteGcodeArea"));
        pteGcodeArea->setGeometry(QRect(970, 70, 321, 371));
        pteGcodeArea->setMinimumSize(QSize(321, 371));
        QFont font1;
        font1.setPointSize(9);
        pteGcodeArea->setFont(font1);
        pteGcodeArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        leTerminal = new QLineEdit(centralWidget);
        leTerminal->setObjectName(QStringLiteral("leTerminal"));
        leTerminal->setGeometry(QRect(10, 660, 1281, 22));
        pbG01 = new QPushButton(centralWidget);
        pbG01->setObjectName(QStringLiteral("pbG01"));
        pbG01->setGeometry(QRect(1130, 20, 41, 28));
        pbG01->setAutoDefault(false);
        pbG01->setFlat(false);
        pbG28 = new QPushButton(centralWidget);
        pbG28->setObjectName(QStringLiteral("pbG28"));
        pbG28->setGeometry(QRect(1170, 20, 41, 28));
        pbM03 = new QPushButton(centralWidget);
        pbM03->setObjectName(QStringLiteral("pbM03"));
        pbM03->setGeometry(QRect(1210, 20, 41, 28));
        pbM204 = new QPushButton(centralWidget);
        pbM204->setObjectName(QStringLiteral("pbM204"));
        pbM204->setGeometry(QRect(1250, 20, 41, 28));
        pbFormat = new QPushButton(centralWidget);
        pbFormat->setObjectName(QStringLiteral("pbFormat"));
        pbFormat->setGeometry(QRect(1050, 20, 35, 35));
        QIcon icon4;
        icon4.addFile(QStringLiteral("icon/index.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbFormat->setIcon(icon4);
        pbFormat->setIconSize(QSize(30, 30));
        pbAddNewProgram = new QPushButton(centralWidget);
        pbAddNewProgram->setObjectName(QStringLiteral("pbAddNewProgram"));
        pbAddNewProgram->setGeometry(QRect(1230, 450, 61, 31));
        QIcon icon5;
        icon5.addFile(QStringLiteral("icon/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbAddNewProgram->setIcon(icon5);
        pbAddNewProgram->setIconSize(QSize(16, 16));
        pbAddNewProgram->setFlat(false);
        twDeltaManager = new QTabWidget(centralWidget);
        twDeltaManager->setObjectName(QStringLiteral("twDeltaManager"));
        twDeltaManager->setGeometry(QRect(0, 0, 521, 28));
        QFont font2;
        font2.setPointSize(12);
        twDeltaManager->setFont(font2);
        twDeltaManager->setStyleSheet(QStringLiteral("color: rgb(18, 190, 190);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        twDeltaManager->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        twDeltaManager->addTab(tab_3, QString());
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(530, 350, 421, 281));
        tResultCameraArea = new QWidget();
        tResultCameraArea->setObjectName(QStringLiteral("tResultCameraArea"));
        lbScreenStreamer = new CameraWidget(tResultCameraArea);
        lbScreenStreamer->setObjectName(QStringLiteral("lbScreenStreamer"));
        lbScreenStreamer->setGeometry(QRect(20, 40, 291, 201));
        lbScreenStreamer->setStyleSheet(QStringLiteral("background-color:rgb(230, 230, 230)"));
        lbScreenStreamer->setScaledContents(false);
        pbLoadCamera = new QPushButton(tResultCameraArea);
        pbLoadCamera->setObjectName(QStringLiteral("pbLoadCamera"));
        pbLoadCamera->setGeometry(QRect(20, 10, 31, 21));
        QIcon icon6;
        icon6.addFile(QStringLiteral("icon/webcam.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral("icon/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        pbLoadCamera->setIcon(icon6);
        pbLoadCamera->setCheckable(true);
        pbLoadTestImage = new QPushButton(tResultCameraArea);
        pbLoadTestImage->setObjectName(QStringLiteral("pbLoadTestImage"));
        pbLoadTestImage->setGeometry(QRect(60, 10, 31, 21));
        QIcon icon7;
        icon7.addFile(QStringLiteral("icon/image.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbLoadTestImage->setIcon(icon7);
        pbFilter = new QPushButton(tResultCameraArea);
        pbFilter->setObjectName(QStringLiteral("pbFilter"));
        pbFilter->setGeometry(QRect(200, 10, 51, 21));
        label_11 = new QLabel(tResultCameraArea);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(290, 10, 55, 16));
        leFPS = new QLineEdit(tResultCameraArea);
        leFPS->setObjectName(QStringLiteral("leFPS"));
        leFPS->setGeometry(QRect(370, 10, 41, 22));
        leFPS->setAlignment(Qt::AlignCenter);
        lbTrackingObject = new QLabel(tResultCameraArea);
        lbTrackingObject->setObjectName(QStringLiteral("lbTrackingObject"));
        lbTrackingObject->setGeometry(QRect(350, 150, 61, 91));
        lbTrackingObject->setStyleSheet(QStringLiteral("background-color:rgb(230, 230, 230)"));
        pbObjectRect = new QPushButton(tResultCameraArea);
        pbObjectRect->setObjectName(QStringLiteral("pbObjectRect"));
        pbObjectRect->setGeometry(QRect(370, 40, 41, 28));
        pbObjectLine = new QPushButton(tResultCameraArea);
        pbObjectLine->setObjectName(QStringLiteral("pbObjectLine"));
        pbObjectLine->setGeometry(QRect(370, 70, 41, 28));
        tabWidget->addTab(tResultCameraArea, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lbTestImage = new QLabel(tab_2);
        lbTestImage->setObjectName(QStringLiteral("lbTestImage"));
        lbTestImage->setGeometry(QRect(10, 60, 368, 207));
        lbTestImage->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        lbTestImage->setScaledContents(true);
        tabWidget->addTab(tab_2, QString());
        pbHome = new QPushButton(centralWidget);
        pbHome->setObjectName(QStringLiteral("pbHome"));
        pbHome->setGeometry(QRect(530, 110, 51, 51));
        QIcon icon8;
        icon8.addFile(QStringLiteral("icon/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbHome->setIcon(icon8);
        pbHome->setIconSize(QSize(30, 30));
        pbX = new QPushButton(centralWidget);
        pbX->setObjectName(QStringLiteral("pbX"));
        pbX->setGeometry(QRect(590, 110, 41, 27));
        pbW = new QPushButton(centralWidget);
        pbW->setObjectName(QStringLiteral("pbW"));
        pbW->setGeometry(QRect(740, 110, 41, 27));
        leX = new QLineEdit(centralWidget);
        leX->setObjectName(QStringLiteral("leX"));
        leX->setGeometry(QRect(590, 140, 41, 27));
        pbZ = new QPushButton(centralWidget);
        pbZ->setObjectName(QStringLiteral("pbZ"));
        pbZ->setGeometry(QRect(690, 110, 41, 27));
        leY = new QLineEdit(centralWidget);
        leY->setObjectName(QStringLiteral("leY"));
        leY->setGeometry(QRect(640, 140, 41, 27));
        pbGrip = new QPushButton(centralWidget);
        pbGrip->setObjectName(QStringLiteral("pbGrip"));
        pbGrip->setGeometry(QRect(790, 110, 61, 27));
        pbGrip->setAutoFillBackground(false);
        pbGrip->setAutoDefault(false);
        pbGrip->setFlat(false);
        pbPump = new QPushButton(centralWidget);
        pbPump->setObjectName(QStringLiteral("pbPump"));
        pbPump->setGeometry(QRect(790, 140, 61, 27));
        pbPump->setAutoFillBackground(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral("icon/Toggle Off_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon9.addFile(QStringLiteral("icon/Toggle On_16px.png"), QSize(), QIcon::Normal, QIcon::On);
        pbPump->setIcon(icon9);
        pbPump->setCheckable(true);
        pbPump->setAutoDefault(false);
        pbPump->setFlat(false);
        twDeltaGeometry = new QTabWidget(centralWidget);
        twDeltaGeometry->setObjectName(QStringLiteral("twDeltaGeometry"));
        twDeltaGeometry->setGeometry(QRect(0, 90, 521, 541));
        t3D = new QWidget();
        t3D->setObjectName(QStringLiteral("t3D"));
        wgOpenGl = new GLWidget(t3D);
        wgOpenGl->setObjectName(QStringLiteral("wgOpenGl"));
        wgOpenGl->setGeometry(QRect(0, 0, 500, 500));
        twDeltaGeometry->addTab(t3D, QString());
        t2D = new QWidget();
        t2D->setObjectName(QStringLiteral("t2D"));
        wg2D = new QWidget(t2D);
        wg2D->setObjectName(QStringLiteral("wg2D"));
        wg2D->setGeometry(QRect(50, 10, 300, 300));
        vsZAdjsution = new QSlider(t2D);
        vsZAdjsution->setObjectName(QStringLiteral("vsZAdjsution"));
        vsZAdjsution->setGeometry(QRect(10, 9, 22, 301));
        vsZAdjsution->setMaximum(300);
        vsZAdjsution->setOrientation(Qt::Vertical);
        twDeltaGeometry->addTab(t2D, QString());
        tParameter = new QWidget();
        tParameter->setObjectName(QStringLiteral("tParameter"));
        widget = new QWidget(tParameter);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 10, 381, 301));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 130, 41, 20));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 130, 21, 20));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(40, 40, 81, 22));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 21, 20));
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 70, 21, 20));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 10, 41, 20));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(40, 10, 81, 22));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 70, 41, 20));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 21, 20));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 40, 41, 20));
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 100, 41, 20));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_7 = new QLineEdit(widget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(40, 100, 81, 22));
        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(40, 130, 81, 22));
        lineEdit_6 = new QLineEdit(widget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(40, 70, 81, 22));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 100, 21, 20));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        twDeltaGeometry->addTab(tParameter, QString());
        pbConnect = new QPushButton(centralWidget);
        pbConnect->setObjectName(QStringLiteral("pbConnect"));
        pbConnect->setGeometry(QRect(0, 40, 101, 41));
        pbConnect->setStyleSheet(QLatin1String("background-color: rgb(30, 88, 180);\n"
"color: rgb(255, 255, 255);"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("icon/disconnected.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon10.addFile(QStringLiteral("icon/connected.png"), QSize(), QIcon::Normal, QIcon::On);
        pbConnect->setIcon(icon10);
        pbConnect->setIconSize(QSize(30, 20));
        leZ = new QLineEdit(centralWidget);
        leZ->setObjectName(QStringLiteral("leZ"));
        leZ->setGeometry(QRect(690, 140, 41, 27));
        leW = new QLineEdit(centralWidget);
        leW->setObjectName(QStringLiteral("leW"));
        leW->setGeometry(QRect(740, 140, 41, 27));
        pbY = new QPushButton(centralWidget);
        pbY->setObjectName(QStringLiteral("pbY"));
        pbY->setGeometry(QRect(640, 110, 41, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1299, 26));
        menuBar->setStyleSheet(QLatin1String("background-color: rgb(55, 58, 72);\n"
"color: rgb(166, 156, 157);\n"
"selection-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(0, 204, 204);"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuFile->setStyleSheet(QStringLiteral(""));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuEditor = new QMenu(menuBar);
        menuEditor->setObjectName(QStringLiteral("menuEditor"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEditor->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionAdd);
        menuFile->addAction(actionRemove);
        menuHelp->addAction(actionreferences);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        pbExDeleteProgram->setDefault(true);
        pbG01->setDefault(false);
        twDeltaManager->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        pbGrip->setDefault(false);
        pbPump->setDefault(false);
        twDeltaGeometry->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "IMWI - Delta X Software - Version 0.9", Q_NULLPTR));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        actionRemove->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        actionreferences->setText(QApplication::translate("MainWindow", "References", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        leExProgramName->setText(QApplication::translate("MainWindow", "Program 1", Q_NULLPTR));
        pbExDeleteProgram->setText(QString());
        lbExGCodeNumber->setText(QApplication::translate("MainWindow", "100 Gcode Lines", Q_NULLPTR));
        lbDebug->setText(QApplication::translate("MainWindow", "Debug :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbExecuteGcodes->setToolTip(QApplication::translate("MainWindow", "Execute Gcode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbExecuteGcodes->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbSaveGcode->setToolTip(QApplication::translate("MainWindow", "Save Gcode Into File", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbSaveGcode->setText(QString());
        pteGcodeArea->setPlainText(QApplication::translate("MainWindow", "G28\n"
"M03 S2000\n"
"M204 A4000", Q_NULLPTR));
        pbG01->setText(QApplication::translate("MainWindow", "G01", Q_NULLPTR));
        pbG28->setText(QApplication::translate("MainWindow", "G28", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbM03->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbM03->setText(QApplication::translate("MainWindow", "M03", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbM204->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbM204->setText(QApplication::translate("MainWindow", "M204", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pbFormat->setToolTip(QApplication::translate("MainWindow", "Format Gcode Lines", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbFormat->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbAddNewProgram->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbAddNewProgram->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        twDeltaManager->setTabText(twDeltaManager->indexOf(tab), QApplication::translate("MainWindow", "DeltaX 1", Q_NULLPTR));
        twDeltaManager->setTabText(twDeltaManager->indexOf(tab_3), QApplication::translate("MainWindow", "+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tabWidget->setToolTip(QApplication::translate("MainWindow", "Load Camera", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lbScreenStreamer->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbLoadCamera->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pbLoadCamera->setText(QString());
#ifndef QT_NO_TOOLTIP
        pbLoadTestImage->setToolTip(QApplication::translate("MainWindow", "Load Image", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pbLoadTestImage->setText(QString());
        pbFilter->setText(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "FPS", Q_NULLPTR));
        leFPS->setText(QApplication::translate("MainWindow", "15", Q_NULLPTR));
        lbTrackingObject->setText(QString());
        pbObjectRect->setText(QApplication::translate("MainWindow", "Rect", Q_NULLPTR));
        pbObjectLine->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tResultCameraArea), QApplication::translate("MainWindow", "Result", Q_NULLPTR));
        lbTestImage->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Test Image", Q_NULLPTR));
        pbHome->setText(QString());
        pbX->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        pbW->setText(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        pbZ->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        pbGrip->setText(QApplication::translate("MainWindow", "Grip", Q_NULLPTR));
        pbPump->setText(QApplication::translate("MainWindow", "Pump", Q_NULLPTR));
        twDeltaGeometry->setTabText(twDeltaGeometry->indexOf(t3D), QApplication::translate("MainWindow", "3D", Q_NULLPTR));
        twDeltaGeometry->setTabText(twDeltaGeometry->indexOf(t2D), QApplication::translate("MainWindow", "2D", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "mm", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "b", Q_NULLPTR));
        lineEdit_5->setText(QString());
        label->setText(QApplication::translate("MainWindow", "f", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "re", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "mm", Q_NULLPTR));
        lineEdit_4->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "mm", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "rf", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "mm", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "mm", Q_NULLPTR));
        lineEdit_7->setText(QString());
        lineEdit_8->setText(QString());
        lineEdit_6->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "e", Q_NULLPTR));
        twDeltaGeometry->setTabText(twDeltaGeometry->indexOf(tParameter), QApplication::translate("MainWindow", "Parameter", Q_NULLPTR));
        pbConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        pbY->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        menuEditor->setTitle(QApplication::translate("MainWindow", "Editor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
