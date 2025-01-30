# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'AccountWindow.ui'
##
## Created by: Qt User Interface Compiler version 6.4.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QAction, QBrush, QColor, QConicalGradient,
    QCursor, QFont, QFontDatabase, QGradient,
    QIcon, QImage, QKeySequence, QLinearGradient,
    QPainter, QPalette, QPixmap, QRadialGradient,
    QTransform)
from PySide6.QtWidgets import (QApplication, QFrame, QMainWindow, QMenu,
    QMenuBar, QPushButton, QRadioButton, QSizePolicy,
    QSplitter, QStatusBar, QToolButton, QVBoxLayout,
    QWidget)

class Ui_AccountWindow(object):
    def setupUi(self, AccountWindow):
        if not AccountWindow.objectName():
            AccountWindow.setObjectName(u"AccountWindow")
        AccountWindow.resize(800, 600)
        self.actionNew = QAction(AccountWindow)
        self.actionNew.setObjectName(u"actionNew")
        self.centralwidget = QWidget(AccountWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.verticalLayout_3 = QVBoxLayout(self.centralwidget)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.splitter = QSplitter(self.centralwidget)
        self.splitter.setObjectName(u"splitter")
        sizePolicy = QSizePolicy(QSizePolicy.Preferred, QSizePolicy.Expanding)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(10)
        sizePolicy.setHeightForWidth(self.splitter.sizePolicy().hasHeightForWidth())
        self.splitter.setSizePolicy(sizePolicy)
        self.splitter.setOrientation(Qt.Vertical)
        self.frame = QFrame(self.splitter)
        self.frame.setObjectName(u"frame")
        sizePolicy1 = QSizePolicy(QSizePolicy.Ignored, QSizePolicy.Ignored)
        sizePolicy1.setHorizontalStretch(0)
        sizePolicy1.setVerticalStretch(0)
        sizePolicy1.setHeightForWidth(self.frame.sizePolicy().hasHeightForWidth())
        self.frame.setSizePolicy(sizePolicy1)
        self.frame.setMaximumSize(QSize(16777215, 16777215))
        self.frame.setFrameShape(QFrame.StyledPanel)
        self.frame.setFrameShadow(QFrame.Raised)
        self.verticalLayout = QVBoxLayout(self.frame)
        self.verticalLayout.setObjectName(u"verticalLayout")
        self.pushButton = QPushButton(self.frame)
        self.pushButton.setObjectName(u"pushButton")

        self.verticalLayout.addWidget(self.pushButton)

        self.toolButton = QToolButton(self.frame)
        self.toolButton.setObjectName(u"toolButton")

        self.verticalLayout.addWidget(self.toolButton)

        self.radioButton = QRadioButton(self.frame)
        self.radioButton.setObjectName(u"radioButton")

        self.verticalLayout.addWidget(self.radioButton)

        self.splitter.addWidget(self.frame)
        self.frame_2 = QFrame(self.splitter)
        self.frame_2.setObjectName(u"frame_2")
        sizePolicy2 = QSizePolicy(QSizePolicy.Ignored, QSizePolicy.Ignored)
        sizePolicy2.setHorizontalStretch(0)
        sizePolicy2.setVerticalStretch(20)
        sizePolicy2.setHeightForWidth(self.frame_2.sizePolicy().hasHeightForWidth())
        self.frame_2.setSizePolicy(sizePolicy2)
        self.frame_2.setFrameShape(QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QFrame.Raised)
        self.verticalLayout_2 = QVBoxLayout(self.frame_2)
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.pushButton_2 = QPushButton(self.frame_2)
        self.pushButton_2.setObjectName(u"pushButton_2")

        self.verticalLayout_2.addWidget(self.pushButton_2)

        self.toolButton_2 = QToolButton(self.frame_2)
        self.toolButton_2.setObjectName(u"toolButton_2")

        self.verticalLayout_2.addWidget(self.toolButton_2)

        self.pushButton_3 = QPushButton(self.frame_2)
        self.pushButton_3.setObjectName(u"pushButton_3")

        self.verticalLayout_2.addWidget(self.pushButton_3)

        self.splitter.addWidget(self.frame_2)

        self.verticalLayout_3.addWidget(self.splitter)

        AccountWindow.setCentralWidget(self.centralwidget)
        self.menubar = QMenuBar(AccountWindow)
        self.menubar.setObjectName(u"menubar")
        self.menubar.setGeometry(QRect(0, 0, 800, 26))
        self.menuFile = QMenu(self.menubar)
        self.menuFile.setObjectName(u"menuFile")
        AccountWindow.setMenuBar(self.menubar)
        self.statusbar = QStatusBar(AccountWindow)
        self.statusbar.setObjectName(u"statusbar")
        AccountWindow.setStatusBar(self.statusbar)

        self.menubar.addAction(self.menuFile.menuAction())
        self.menuFile.addAction(self.actionNew)

        self.retranslateUi(AccountWindow)

        QMetaObject.connectSlotsByName(AccountWindow)
    # setupUi

    def retranslateUi(self, AccountWindow):
        AccountWindow.setWindowTitle(QCoreApplication.translate("AccountWindow", u"MainWindow", None))
        self.actionNew.setText(QCoreApplication.translate("AccountWindow", u"New", None))
        self.pushButton.setText(QCoreApplication.translate("AccountWindow", u"PushButton", None))
        self.toolButton.setText(QCoreApplication.translate("AccountWindow", u"...", None))
        self.radioButton.setText(QCoreApplication.translate("AccountWindow", u"RadioButton", None))
        self.pushButton_2.setText(QCoreApplication.translate("AccountWindow", u"PushButton", None))
        self.toolButton_2.setText(QCoreApplication.translate("AccountWindow", u"...", None))
        self.pushButton_3.setText(QCoreApplication.translate("AccountWindow", u"PushButton", None))
        self.menuFile.setTitle(QCoreApplication.translate("AccountWindow", u"File", None))
    # retranslateUi

