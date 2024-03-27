#include "mainwindow.h"

#include "myapp.h"
#include "global.h"
#include "loginwidget.h"
#include "databasemagr.h"
#include "picturecutdialog.h"

#include <QApplication>
#include <QHostInfo>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);

//    Qt::WA_SetWindowIcon(QIcon("C://Users//27285/Desktop//xmnew//ChatClient//resource//ico//app.ico"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));

    MyApp::InitApp(a.applicationDirPath());
    myHelper::setStyle("default");
    // 加载数据库
    DataBaseMagr::Instance()->OpenUserDb(MyApp::m_strDatabasePath + "user.db");
    DataBaseMagr::Instance()->OpenMessageDb(MyApp::m_strDatabasePath + "msg.db");

//    MainWindow w;
    LoginWidget w;

    w.setWindowIcon(QIcon("C://Users//27285/Desktop//xmnew//ChatClient//resource//ico//app.ico"));
    myHelper::FormInCenter(&w);
    w.show();

    return a.exec();
}
