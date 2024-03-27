#ifndef WIDGETHEAD_H
#define WIDGETHEAD_H

#include <QWidget>
#include <QDialog>

class PictureCutDialog;
class ClientFileSocket;

class WidgetHead : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetHead(QWidget *parent = 0);

    void SetHeadPixmap(const QPixmap &pixmap);

    void DownloadFriendHead(const int &userId);
signals:
    void signalCutHeadOk();
    void signalUpdateUserHead(const int &userId, const QString &strHead);
public slots:

private:
    QPixmap m_pixmap;
    QDialog *dialog;

    PictureCutDialog *pictureEdit;

    ClientFileSocket *headUpLoadSocket;

    quint8           m_nType;
    qint32           m_nUserId;
private slots:
    void SltPictureCutClose();
    void SltChangeNewPixHead();

    void SltBeginToSend();

    void SltConnectedToServer();
    void SltSendFileOk();
    void SltFileRecvOk(const quint8 &, const QString &filePath);

private:
    // 解压头像文件
    void UnPackHeasicons();
protected:
    void enterEvent(QEvent *e);
    void leaveEvent(QEvent *e);

    void mousePressEvent(QMouseEvent *e);
    void paintEvent(QPaintEvent *);
};

#endif // WIDGETHEAD_H
