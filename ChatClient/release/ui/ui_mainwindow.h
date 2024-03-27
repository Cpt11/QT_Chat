/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <widgethead.h>
#include "animationstackedwidget.h"
#include "qqlist/qqlistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetUserInfo;
    QVBoxLayout *verticalLayout_9;
    QWidget *widgetWinBar;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnWinMenu;
    QPushButton *btnWinMin;
    QPushButton *btnWinClose;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    WidgetHead *widgetHead;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelUser;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelUserName;
    QLabel *labelUserMask;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_10;
    QLabel *label_12;
    AnimationStackedWidget *GCStackedWidget;
    QWidget *page2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widgetFrindT;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QQListWidget *frindListWidget;
    QWidget *page3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widgetGroupT;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *label_6;
    QQListWidget *groupListWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_10;
    QWidget *widgetConVT;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QQListWidget *convationListWidget;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QWidget *widgetApply;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *label_8;
    QQListWidget *widget_5;
    QWidget *widgetBottom;
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetButtons;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnFrind;
    QToolButton *btnGroup;
    QToolButton *btnConversation;
    QToolButton *btnApplay;
    QWidget *widgetMenu;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnSysMenu;
    QToolButton *tbtnAddUser;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *tbtnWeather;
    QToolButton *tbtnCalendar;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(362, 900);
        MainWindow->setMaximumSize(QSize(362, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/background/app.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        widgetUserInfo = new QWidget(MainWindow);
        widgetUserInfo->setObjectName(QStringLiteral("widgetUserInfo"));
        widgetUserInfo->setMinimumSize(QSize(0, 170));
        widgetUserInfo->setMaximumSize(QSize(16777215, 170));
        verticalLayout_9 = new QVBoxLayout(widgetUserInfo);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(1, 1, 1, 1);
        widgetWinBar = new QWidget(widgetUserInfo);
        widgetWinBar->setObjectName(QStringLiteral("widgetWinBar"));
        widgetWinBar->setMinimumSize(QSize(0, 30));
        widgetWinBar->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_7 = new QHBoxLayout(widgetWinBar);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 5, 0);
        label_9 = new QLabel(widgetWinBar);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(30, 0));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/robot.png")));

        horizontalLayout_7->addWidget(label_9);

        horizontalSpacer = new QSpacerItem(220, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnWinMenu = new QPushButton(widgetWinBar);
        btnWinMenu->setObjectName(QStringLiteral("btnWinMenu"));
        btnWinMenu->setFocusPolicy(Qt::NoFocus);
        btnWinMenu->setAutoRepeatDelay(300);
        btnWinMenu->setAutoRepeatInterval(100);

        horizontalLayout_7->addWidget(btnWinMenu);

        btnWinMin = new QPushButton(widgetWinBar);
        btnWinMin->setObjectName(QStringLiteral("btnWinMin"));
        btnWinMin->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resource/common/ic_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMin->setIcon(icon1);
        btnWinMin->setAutoRepeatDelay(300);
        btnWinMin->setAutoRepeatInterval(100);

        horizontalLayout_7->addWidget(btnWinMin);

        btnWinClose = new QPushButton(widgetWinBar);
        btnWinClose->setObjectName(QStringLiteral("btnWinClose"));
        btnWinClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinClose->setIcon(icon2);
        btnWinClose->setAutoRepeatDelay(300);
        btnWinClose->setAutoRepeatInterval(100);

        horizontalLayout_7->addWidget(btnWinClose);


        verticalLayout_9->addWidget(widgetWinBar);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(5, -1, 5, -1);
        widget = new QWidget(widgetUserInfo);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        widgetHead = new WidgetHead(widget);
        widgetHead->setObjectName(QStringLiteral("widgetHead"));
        widgetHead->setMinimumSize(QSize(64, 64));
        widgetHead->setMaximumSize(QSize(64, 64));
        widgetHead->setStyleSheet(QStringLiteral("border: 1px solid #000000;"));
        horizontalLayout_9 = new QHBoxLayout(widgetHead);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(widgetHead);

        labelUser = new QLabel(widget);
        labelUser->setObjectName(QStringLiteral("labelUser"));
        labelUser->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelUser);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_8->addWidget(widget);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(15);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        labelUserName = new QLabel(widgetUserInfo);
        labelUserName->setObjectName(QStringLiteral("labelUserName"));

        verticalLayout_7->addWidget(labelUserName);

        labelUserMask = new QLabel(widgetUserInfo);
        labelUserMask->setObjectName(QStringLiteral("labelUserMask"));

        verticalLayout_7->addWidget(labelUserMask);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_10 = new QLabel(widgetUserInfo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_10);

        label_12 = new QLabel(widgetUserInfo);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_12);


        horizontalLayout_8->addLayout(verticalLayout_8);


        verticalLayout_9->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(widgetUserInfo);

        GCStackedWidget = new AnimationStackedWidget(MainWindow);
        GCStackedWidget->setObjectName(QStringLiteral("GCStackedWidget"));
        GCStackedWidget->setStyleSheet(QStringLiteral(""));
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        verticalLayout_4 = new QVBoxLayout(page2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widgetFrindT = new QWidget(page2);
        widgetFrindT->setObjectName(QStringLiteral("widgetFrindT"));
        widgetFrindT->setMaximumSize(QSize(16777215, 30));
        widgetFrindT->setStyleSheet(QLatin1String("QWidget#widgetFrindT  {\n"
"	background-color: #5AFFFFFF;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(widgetFrindT);
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(10, 0, 0, 0);
        label_3 = new QLabel(widgetFrindT);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/ic_user.png")));
        label_3->setScaledContents(false);

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(widgetFrindT);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_4->addWidget(widgetFrindT);

        frindListWidget = new QQListWidget(page2);
        frindListWidget->setObjectName(QStringLiteral("frindListWidget"));

        verticalLayout_4->addWidget(frindListWidget);

        GCStackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        verticalLayout_3 = new QVBoxLayout(page3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetGroupT = new QWidget(page3);
        widgetGroupT->setObjectName(QStringLiteral("widgetGroupT"));
        widgetGroupT->setMaximumSize(QSize(16777215, 30));
        widgetGroupT->setStyleSheet(QLatin1String("QWidget#widgetGroupT  {\n"
"	background-color: #5AFFFFFF;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widgetGroupT);
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, 0, 0, 0);
        label_5 = new QLabel(widgetGroupT);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/ic_group.png")));
        label_5->setScaledContents(false);

        horizontalLayout_4->addWidget(label_5);

        label_6 = new QLabel(widgetGroupT);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_3->addWidget(widgetGroupT);

        groupListWidget = new QQListWidget(page3);
        groupListWidget->setObjectName(QStringLiteral("groupListWidget"));

        verticalLayout_3->addWidget(groupListWidget);

        GCStackedWidget->addWidget(page3);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_10 = new QVBoxLayout(page);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        widgetConVT = new QWidget(page);
        widgetConVT->setObjectName(QStringLiteral("widgetConVT"));
        widgetConVT->setMaximumSize(QSize(16777215, 30));
        widgetConVT->setStyleSheet(QLatin1String("QWidget#widgetConVT  {\n"
"	background-color: #5AFFFFFF;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widgetConVT);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        label = new QLabel(widgetConVT);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/ic_chat.png")));
        label->setScaledContents(false);

        horizontalLayout_2->addWidget(label);

        label_2 = new QLabel(widgetConVT);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_10->addWidget(widgetConVT);

        convationListWidget = new QQListWidget(page);
        convationListWidget->setObjectName(QStringLiteral("convationListWidget"));

        verticalLayout_10->addWidget(convationListWidget);

        GCStackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widgetApply = new QWidget(page_2);
        widgetApply->setObjectName(QStringLiteral("widgetApply"));
        widgetApply->setMaximumSize(QSize(16777215, 30));
        widgetApply->setStyleSheet(QLatin1String("QWidget#widgetApply  {\n"
"	background-color: #5AFFFFFF;\n"
"}"));
        horizontalLayout_6 = new QHBoxLayout(widgetApply);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(10, 0, 0, 0);
        label_7 = new QLabel(widgetApply);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/ic_app.png")));
        label_7->setScaledContents(false);

        horizontalLayout_6->addWidget(label_7);

        label_8 = new QLabel(widgetApply);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_6->addWidget(label_8);

        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_6->addWidget(widgetApply);

        widget_5 = new QQListWidget(page_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));

        verticalLayout_6->addWidget(widget_5);

        GCStackedWidget->addWidget(page_2);

        verticalLayout->addWidget(GCStackedWidget);

        widgetBottom = new QWidget(MainWindow);
        widgetBottom->setObjectName(QStringLiteral("widgetBottom"));
        widgetBottom->setMinimumSize(QSize(0, 110));
        widgetBottom->setMaximumSize(QSize(16777215, 110));
        verticalLayout_5 = new QVBoxLayout(widgetBottom);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widgetButtons = new QWidget(widgetBottom);
        widgetButtons->setObjectName(QStringLiteral("widgetButtons"));
        widgetButtons->setMinimumSize(QSize(0, 65));
        horizontalLayout = new QHBoxLayout(widgetButtons);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnFrind = new QToolButton(widgetButtons);
        btnFrind->setObjectName(QStringLiteral("btnFrind"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resource/images/contacts.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFrind->setIcon(icon3);
        btnFrind->setIconSize(QSize(24, 24));
        btnFrind->setCheckable(true);
        btnFrind->setChecked(true);
        btnFrind->setAutoRepeatDelay(300);
        btnFrind->setAutoRepeatInterval(100);
        btnFrind->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(btnFrind);

        btnGroup = new QToolButton(widgetButtons);
        btnGroup->setObjectName(QStringLiteral("btnGroup"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resource/images/group_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnGroup->setIcon(icon4);
        btnGroup->setIconSize(QSize(24, 24));
        btnGroup->setCheckable(true);
        btnGroup->setAutoRepeatDelay(300);
        btnGroup->setAutoRepeatInterval(100);
        btnGroup->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(btnGroup);

        btnConversation = new QToolButton(widgetButtons);
        btnConversation->setObjectName(QStringLiteral("btnConversation"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resource/images/conversation_normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnConversation->setIcon(icon5);
        btnConversation->setIconSize(QSize(24, 24));
        btnConversation->setCheckable(true);
        btnConversation->setChecked(false);
        btnConversation->setAutoRepeatDelay(300);
        btnConversation->setAutoRepeatInterval(100);
        btnConversation->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(btnConversation);

        btnApplay = new QToolButton(widgetButtons);
        btnApplay->setObjectName(QStringLiteral("btnApplay"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resource/images/applay.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApplay->setIcon(icon6);
        btnApplay->setIconSize(QSize(24, 24));
        btnApplay->setCheckable(true);
        btnApplay->setChecked(false);
        btnApplay->setAutoRepeatDelay(300);
        btnApplay->setAutoRepeatInterval(100);
        btnApplay->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout->addWidget(btnApplay);


        verticalLayout_5->addWidget(widgetButtons);

        widgetMenu = new QWidget(widgetBottom);
        widgetMenu->setObjectName(QStringLiteral("widgetMenu"));
        widgetMenu->setMinimumSize(QSize(0, 35));
        widgetMenu->setMaximumSize(QSize(16777215, 35));
        horizontalLayout_5 = new QHBoxLayout(widgetMenu);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(10, 2, 10, 2);
        btnSysMenu = new QPushButton(widgetMenu);
        btnSysMenu->setObjectName(QStringLiteral("btnSysMenu"));
        btnSysMenu->setMinimumSize(QSize(0, 30));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resource/common/ic_sysmen.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSysMenu->setIcon(icon7);
        btnSysMenu->setIconSize(QSize(24, 24));
        btnSysMenu->setAutoRepeatDelay(300);
        btnSysMenu->setAutoRepeatInterval(100);

        horizontalLayout_5->addWidget(btnSysMenu);

        tbtnAddUser = new QToolButton(widgetMenu);
        tbtnAddUser->setObjectName(QStringLiteral("tbtnAddUser"));
        tbtnAddUser->setMinimumSize(QSize(0, 30));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resource/common/ic_user_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnAddUser->setIcon(icon8);
        tbtnAddUser->setIconSize(QSize(24, 24));
        tbtnAddUser->setAutoRepeatDelay(300);
        tbtnAddUser->setAutoRepeatInterval(100);

        horizontalLayout_5->addWidget(tbtnAddUser);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        tbtnWeather = new QToolButton(widgetMenu);
        tbtnWeather->setObjectName(QStringLiteral("tbtnWeather"));
        tbtnWeather->setMinimumSize(QSize(0, 30));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resource/common/ic_weather.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnWeather->setIcon(icon9);
        tbtnWeather->setIconSize(QSize(24, 24));
        tbtnWeather->setAutoRepeatDelay(300);
        tbtnWeather->setAutoRepeatInterval(100);

        horizontalLayout_5->addWidget(tbtnWeather);

        tbtnCalendar = new QToolButton(widgetMenu);
        tbtnCalendar->setObjectName(QStringLiteral("tbtnCalendar"));
        tbtnCalendar->setMinimumSize(QSize(0, 30));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/resource/common/ic_calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnCalendar->setIcon(icon10);
        tbtnCalendar->setIconSize(QSize(24, 24));
        tbtnCalendar->setAutoRepeatDelay(300);
        tbtnCalendar->setAutoRepeatInterval(100);

        horizontalLayout_5->addWidget(tbtnCalendar);


        verticalLayout_5->addWidget(widgetMenu);


        verticalLayout->addWidget(widgetBottom);


        retranslateUi(MainWindow);
        QObject::connect(btnWinMin, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));
        QObject::connect(btnWinClose, SIGNAL(clicked()), MainWindow, SLOT(hide()));

        GCStackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\347\225\205\346\203\263\350\201\212\345\244\251APP", nullptr));
        label_9->setText(QString());
        btnWinMenu->setText(QString());
        btnWinMin->setText(QString());
        btnWinClose->setText(QString());
        labelUser->setText(QApplication::translate("MainWindow", "zhangsan", nullptr));
        labelUserName->setText(QApplication::translate("MainWindow", "\346\203\263\344\275\240\346\211\200\346\203\263", nullptr));
        labelUserMask->setText(QApplication::translate("MainWindow", "\344\270\226\347\225\214\344\271\213\345\244\247\357\274\214\346\227\240\345\245\207\344\270\215\346\234\211\357\274\201", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\345\244\251\346\260\224\346\231\264", nullptr));
        label_12->setText(QString());
        label_3->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\350\201\224\347\263\273\344\272\272", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\347\276\244\347\273\204", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\344\274\232\350\257\235", nullptr));
        label_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
        btnFrind->setText(QApplication::translate("MainWindow", "\345\245\275\345\217\213", nullptr));
        btnGroup->setText(QApplication::translate("MainWindow", "\347\276\244\347\273\204", nullptr));
#ifndef QT_NO_TOOLTIP
        btnConversation->setToolTip(QApplication::translate("MainWindow", "\344\274\232\350\257\235", nullptr));
#endif // QT_NO_TOOLTIP
        btnConversation->setText(QApplication::translate("MainWindow", "\344\274\232\350\257\235", nullptr));
#ifndef QT_NO_TOOLTIP
        btnApplay->setToolTip(QApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
#endif // QT_NO_TOOLTIP
        btnApplay->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250", nullptr));
#ifndef QT_NO_TOOLTIP
        btnSysMenu->setToolTip(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\217\234\345\215\225", nullptr));
#endif // QT_NO_TOOLTIP
        btnSysMenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        tbtnAddUser->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
#endif // QT_NO_TOOLTIP
        tbtnAddUser->setText(QString());
#ifndef QT_NO_TOOLTIP
        tbtnWeather->setToolTip(QApplication::translate("MainWindow", "\345\244\251\346\260\224\346\237\245\350\257\242", nullptr));
#endif // QT_NO_TOOLTIP
        tbtnWeather->setText(QString());
#ifndef QT_NO_TOOLTIP
        tbtnCalendar->setToolTip(QApplication::translate("MainWindow", "\346\227\245\345\216\206", nullptr));
#endif // QT_NO_TOOLTIP
        tbtnCalendar->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
