#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/video/video.hpp>
#include <opencv2/calib3d/calib3d.hpp>

#include <pylon/PylonIncludes.h>
#include <pylon/gige/BaslerGigECamera.h>

#ifdef PYLON_WIN_BUILD
#include <pylon/PylonGUI.h>
#endif

#include <MvCameraControl.h>

#include "xcammanager.h"
#include <QLabel>
#include "ImageUnity.h"
#include <qtimer.h>

#include <QThread>
#include <QSettings>

#include "CameraProcessor.h"
#include <QMessageBox>
#include <QThreadPool>
#include <QElapsedTimer>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();

    void LoadSettings(QSettings* setting);
    void SaveSettings(QSettings* setting);
    void GetMessageFromOtherModule(QString cmd);

    // ---- Camera variables -----
//    CameraProcessor* CameraProcessorThread;

    CameraProcessor* CameraProcessorJob;

    XCamManager IndustryCamera;

    QTimer* CameraDisplayUpdatingTimer;
    QElapsedTimer ElapseTimer;

    bool IsLastJobDone = true;

public slots:
    void GetEventFromUI();
    void GetStateLastJob(bool state);
signals:
    void EmitEventFromUI(QString cmd);
    void CapturedImage(cv::Mat mat);
    void StartedCapture();

private slots:
    void on_pbRefresh_clicked();

    void on_pbConnectCamera_clicked();

    void on_cbStream_toggled(bool checked);



    void on_pbShotImage_clicked();

    void on_pbShotVideo_clicked();
    void intervalFunction();

    void on_leExposureTime_returnPressed();

    void on_leGain_returnPressed();

    void on_leImageWidth_returnPressed();

    void on_cbEnoughResize_toggled(bool checked);

private:
    Ui::Form *ui;

    bool isStream = false;
};

#endif // FORM_H
