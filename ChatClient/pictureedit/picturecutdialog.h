#ifndef PICTURECUTDIALOG_H
#define PICTURECUTDIALOG_H

#include "customwidget.h"

class CutDialog;
class PhotoShotDialog;

namespace Ui {
class PictureCutDialog;
}

class PictureCutDialog : public CustomMoveWidget
{
    Q_OBJECT

public:
    explicit PictureCutDialog(QWidget *parent = 0);
    ~PictureCutDialog();

signals:
    void signalCutHeadOk();
    void signalClose();

protected:
    void changeEvent(QEvent *e);

private slots:
    void SltCutDlgMoved(QRect rect);

    void on_btnLoad_clicked();

    void on_btnSave_clicked();

private:
    Ui::PictureCutDialog *ui;

    QPixmap scaledPix;
    PhotoShotDialog *pdialog;
};

#endif // PICTURECUTDIALOG_H
