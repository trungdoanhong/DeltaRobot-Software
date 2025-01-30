#ifndef SMARTDIALOG_H
#define SMARTDIALOG_H

#include <QWidget>
#include <QMessageBox>

class SmartDialog : public QWidget
{
    Q_OBJECT
public:
    explicit SmartDialog(QWidget *parent = nullptr);

    void SetType(int typeId);
    QMessageBox::StandardButton PopUp(QString title, QString msg);

    const int CLOSE_DIALOG = 0;
    const int INFO_DIALOG = 1;

signals:

private:
    int dialogType = CLOSE_DIALOG;

};

#endif // SMARTDIALOG_H
