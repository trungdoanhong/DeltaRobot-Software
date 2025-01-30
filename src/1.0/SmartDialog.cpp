#include "SmartDialog.h"

SmartDialog::SmartDialog(QWidget *parent) : QWidget(parent)
{

}

void SmartDialog::SetType(int typeId)
{
    dialogType = typeId;
}

QMessageBox::StandardButton SmartDialog::PopUp(QString title, QString msg)
{
    QMessageBox* CloseUIBox = new QMessageBox();
    this->setStyleSheet("QPushButton{ min-width: 60px; min-height: 20px;}");

    if (dialogType == CLOSE_DIALOG)
    {
        CloseUIBox->setWindowTitle(title);
        CloseUIBox->setText(msg);
        CloseUIBox->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        CloseUIBox->setDefaultButton(QMessageBox::No);

        int ret = CloseUIBox->exec();
        if (ret == QMessageBox::Yes)
        {
            return QMessageBox::Yes;
        }
        else
        {
            return QMessageBox::No;
        }
    }
    else if (dialogType == INFO_DIALOG)    
    {
        CloseUIBox->setWindowTitle(title);
        CloseUIBox->setText(msg);
        CloseUIBox->setStandardButtons(QMessageBox::Ok|QMessageBox::No);
        CloseUIBox->setDefaultButton(QMessageBox::Ok);

        int ret = CloseUIBox->exec();
        if (ret == QMessageBox::Ok)
        {
            return QMessageBox::Ok;
        }
        else
        {
            return QMessageBox::Cancel;
        }
    }
    else
    {
        return QMessageBox::No;
    }

    
}
