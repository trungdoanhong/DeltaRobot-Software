#ifndef IMAGE_PROCESSING
#define IMAGE_PROCESSING

#include <QObject>
#include <qwidget.h>
#include <qfiledialog.h>
#include <qscrollarea.h>

#include <ImageUnity.h>
#include <QInputDialog>
#include <qlabel.h>
#include <qtimer.h>
#include <qpushbutton.h>
#include <QCheckBox>

#include "UnityTool.h"
#include <QToolButton>
#include <QRadioButton>

#include "opencv2/dnn.hpp"

#include <QThread>
#include <QTcpSocket>
#include <QProcess>
#include <QTcpServer>
#include <QMap>

#include "TaskNode.h"

class ImageProcessing : public QObject
{
    Q_OBJECT
public:
    ImageProcessing();
    ~ImageProcessing();
    void MoveToThread(QThread* thread);

    TaskNode *CreatTaskNode(QString name, int type, QString previousTasks = "");
    TaskNode* GetNode(QString name);

private:
    QMap<QString, TaskNode*> taskNodeList;
};

#endif
