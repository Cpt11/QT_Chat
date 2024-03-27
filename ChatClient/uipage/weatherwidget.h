#ifndef WEATHERWIDGET_H
#define WEATHERWIDGET_H

#include "customwidget.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>

class QLabel;
class QPushButton;

class WeatherWidget : public CustomDialog
{
    Q_OBJECT
public:
    explicit WeatherWidget(QWidget *parent = 0);
    ~WeatherWidget();

signals:

private slots:
    void replyFinished(QNetworkReply* reply);

private:
    QLabel *labelTemperature;
    QLabel *labelCity;


    QNetworkAccessManager *manager;
};

#endif // WEATHERWIDGET_H
