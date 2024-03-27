#include "mainwindow.h"
#include "myapp.h"
#include "databasemagr.h"

#include <QApplication>
#include <QFile>
#include <QJsonArray>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonValue>

#include <QImage>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyApp::InitApp(a.applicationDirPath());

    QFile qss(":/qss/resource/qss/default.css");
    qss.open(QIODevice::ReadOnly);
    a.setStyleSheet(qss.readAll());
    qss.close();

    // 加载数据库
    DataBaseMagr::Instance()->OpenDb(MyApp::m_strDatabasePath + "info.db");

    MainWindow w;
    w.show();

    return a.exec();
}
