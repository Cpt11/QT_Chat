#ifndef SYSTEMSETTING_H
#define SYSTEMSETTING_H

#include "customwidget.h"

namespace Ui {
class SystemSetting;
}

class SystemSetting : public CustomDialog
{
    Q_OBJECT

public:
    explicit SystemSetting(QWidget *parent = 0);
    ~SystemSetting();
signals:
    void signalRotate();
protected:
    void changeEvent(QEvent *e);

private slots:
    void on_btnSaveSetting_clicked();

    void on_toolButton_clicked();

    void on_toolBtnLeftClr_clicked();

    void on_toolBtnClr_clicked();

private:
    Ui::SystemSetting *ui;
};

#endif // SYSTEMSETTING_H
