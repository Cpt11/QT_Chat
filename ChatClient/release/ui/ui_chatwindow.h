/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "chatbubble.h"

QT_BEGIN_NAMESPACE

class Ui_ChatWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widgetWinTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWinIcon;
    QLabel *labelWinTitle;
    QPushButton *btnWinMin;
    QPushButton *btnWinClose;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    BubbleList *widgetBubble;
    QWidget *widgetSetting;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *btnSendFile;
    QToolButton *toolButton_7;
    QToolButton *toolButton_6;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;
    QWidget *widgetMsg;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *textEditMsg;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnSendMsg;
    QPushButton *btnAction;
    QWidget *widgetFileBoard;
    QVBoxLayout *verticalLayout_5;
    QWidget *widgetFileInfo;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QProgressBar *progressBar;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEditTotalSize;
    QLabel *label_4;
    QLineEdit *lineEditCurrSize;
    QLabel *label_5;
    QLineEdit *lineEditRate;
    QSpacerItem *verticalSpacer;
    QTableView *tableViewGroups;

    void setupUi(QWidget *ChatWindow)
    {
        if (ChatWindow->objectName().isEmpty())
            ChatWindow->setObjectName(QStringLiteral("ChatWindow"));
        ChatWindow->resize(729, 595);
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/background/app.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChatWindow->setWindowIcon(icon);
        ChatWindow->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(ChatWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        widgetWinTitle = new QWidget(ChatWindow);
        widgetWinTitle->setObjectName(QStringLiteral("widgetWinTitle"));
        widgetWinTitle->setMinimumSize(QSize(0, 30));
        widgetWinTitle->setMaximumSize(QSize(16777215, 30));
        horizontalLayout_2 = new QHBoxLayout(widgetWinTitle);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        labelWinIcon = new QLabel(widgetWinTitle);
        labelWinIcon->setObjectName(QStringLiteral("labelWinIcon"));
        labelWinIcon->setMinimumSize(QSize(30, 30));
        labelWinIcon->setMaximumSize(QSize(30, 30));
        labelWinIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/robot.png")));

        horizontalLayout_2->addWidget(labelWinIcon);

        labelWinTitle = new QLabel(widgetWinTitle);
        labelWinTitle->setObjectName(QStringLiteral("labelWinTitle"));
        labelWinTitle->setStyleSheet(QStringLiteral("color: #FFFFFF;"));

        horizontalLayout_2->addWidget(labelWinTitle);

        btnWinMin = new QPushButton(widgetWinTitle);
        btnWinMin->setObjectName(QStringLiteral("btnWinMin"));
        btnWinMin->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resource/common/ic_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMin->setIcon(icon1);

        horizontalLayout_2->addWidget(btnWinMin);

        btnWinClose = new QPushButton(widgetWinTitle);
        btnWinClose->setObjectName(QStringLiteral("btnWinClose"));
        btnWinClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinClose->setIcon(icon2);

        horizontalLayout_2->addWidget(btnWinClose);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addWidget(widgetWinTitle);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 5);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, 5, -1);
        widgetBubble = new BubbleList(ChatWindow);
        widgetBubble->setObjectName(QStringLiteral("widgetBubble"));
        widgetBubble->setMinimumSize(QSize(200, 200));

        verticalLayout->addWidget(widgetBubble);

        widgetSetting = new QWidget(ChatWindow);
        widgetSetting->setObjectName(QStringLiteral("widgetSetting"));
        widgetSetting->setMinimumSize(QSize(0, 30));
        widgetSetting->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(widgetSetting);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        toolButton_2 = new QToolButton(widgetSetting);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resource/common/ic_font.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon3);

        horizontalLayout_3->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(widgetSetting);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resource/common/ic_smile.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon4);

        horizontalLayout_3->addWidget(toolButton_3);

        toolButton_4 = new QToolButton(widgetSetting);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resource/common/ic_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon5);

        horizontalLayout_3->addWidget(toolButton_4);

        btnSendFile = new QToolButton(widgetSetting);
        btnSendFile->setObjectName(QStringLiteral("btnSendFile"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resource/common/ic_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSendFile->setIcon(icon6);

        horizontalLayout_3->addWidget(btnSendFile);

        toolButton_7 = new QToolButton(widgetSetting);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resource/common/ic_picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon7);

        horizontalLayout_3->addWidget(toolButton_7);

        toolButton_6 = new QToolButton(widgetSetting);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resource/common/ic_cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon8);

        horizontalLayout_3->addWidget(toolButton_6);

        horizontalSpacer = new QSpacerItem(396, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        toolButton = new QToolButton(widgetSetting);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resource/common/ic_notes.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon9);

        horizontalLayout_3->addWidget(toolButton);


        verticalLayout->addWidget(widgetSetting);

        widgetMsg = new QWidget(ChatWindow);
        widgetMsg->setObjectName(QStringLiteral("widgetMsg"));
        widgetMsg->setMinimumSize(QSize(0, 100));
        verticalLayout_3 = new QVBoxLayout(widgetMsg);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, -1);
        textEditMsg = new QTextEdit(widgetMsg);
        textEditMsg->setObjectName(QStringLiteral("textEditMsg"));
        textEditMsg->setMaximumSize(QSize(16777215, 100));

        verticalLayout_3->addWidget(textEditMsg);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 10, -1);
        label = new QLabel(widgetMsg);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(widgetMsg);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout_5->addWidget(btnClose);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnSendMsg = new QPushButton(widgetMsg);
        btnSendMsg->setObjectName(QStringLiteral("btnSendMsg"));
        btnSendMsg->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(btnSendMsg);

        btnAction = new QPushButton(widgetMsg);
        btnAction->setObjectName(QStringLiteral("btnAction"));

        horizontalLayout_4->addWidget(btnAction);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(widgetMsg);

        verticalLayout->setStretch(0, 1);

        horizontalLayout->addLayout(verticalLayout);

        widgetFileBoard = new QWidget(ChatWindow);
        widgetFileBoard->setObjectName(QStringLiteral("widgetFileBoard"));
        widgetFileBoard->setStyleSheet(QLatin1String("QLineEdit {\n"
"	border: none;\n"
"	border-radius:0px;\n"
"	background-color: #05CE26;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QProgressBar {\n"
"	border: 1px solid grey;\n"
"    border-radius: 0px;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"	background-color: #05B8CC;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(widgetFileBoard);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        widgetFileInfo = new QWidget(widgetFileBoard);
        widgetFileInfo->setObjectName(QStringLiteral("widgetFileInfo"));
        verticalLayout_6 = new QVBoxLayout(widgetFileInfo);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        label_2 = new QLabel(widgetFileInfo);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        progressBar = new QProgressBar(widgetFileInfo);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 15));
        progressBar->setValue(0);
        progressBar->setInvertedAppearance(false);

        verticalLayout_4->addWidget(progressBar);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(widgetFileInfo);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEditTotalSize = new QLineEdit(widgetFileInfo);
        lineEditTotalSize->setObjectName(QStringLiteral("lineEditTotalSize"));
        lineEditTotalSize->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditTotalSize);

        label_4 = new QLabel(widgetFileInfo);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEditCurrSize = new QLineEdit(widgetFileInfo);
        lineEditCurrSize->setObjectName(QStringLiteral("lineEditCurrSize"));
        lineEditCurrSize->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditCurrSize);

        label_5 = new QLabel(widgetFileInfo);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        lineEditRate = new QLineEdit(widgetFileInfo);
        lineEditRate->setObjectName(QStringLiteral("lineEditRate"));
        lineEditRate->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditRate);


        verticalLayout_4->addLayout(formLayout);


        verticalLayout_6->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(widgetFileInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        tableViewGroups = new QTableView(widgetFileBoard);
        tableViewGroups->setObjectName(QStringLiteral("tableViewGroups"));

        verticalLayout_5->addWidget(tableViewGroups);

        verticalLayout_5->setStretch(2, 1);

        horizontalLayout->addWidget(widgetFileBoard);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(ChatWindow);
        QObject::connect(btnWinMin, SIGNAL(clicked()), ChatWindow, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(ChatWindow);
    } // setupUi

    void retranslateUi(QWidget *ChatWindow)
    {
        ChatWindow->setWindowTitle(QApplication::translate("ChatWindow", "\350\201\212\345\244\251\347\252\227\345\217\243", nullptr));
        labelWinIcon->setText(QString());
        labelWinTitle->setText(QApplication::translate("ChatWindow", "\344\270\216 XXX \350\201\212\345\244\251\344\270\255", nullptr));
        btnWinMin->setText(QString());
        btnWinClose->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_2->setToolTip(QApplication::translate("ChatWindow", "\344\277\256\346\224\271\350\201\212\345\244\251\345\255\227\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_3->setToolTip(QApplication::translate("ChatWindow", "\346\217\222\345\205\245\350\241\250\346\203\205", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_4->setToolTip(QApplication::translate("ChatWindow", "\350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSendFile->setToolTip(QApplication::translate("ChatWindow", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        btnSendFile->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_7->setToolTip(QApplication::translate("ChatWindow", "\345\217\221\351\200\201\345\233\276\347\211\207", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton_6->setToolTip(QApplication::translate("ChatWindow", "\346\210\252\345\261\217", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        toolButton->setToolTip(QApplication::translate("ChatWindow", "\350\201\212\345\244\251\350\256\260\345\275\225", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton->setText(QString());
        label->setText(QApplication::translate("ChatWindow", "\345\255\227\347\254\246\351\231\220\345\210\266: 0 / 255", nullptr));
#ifndef QT_NO_TOOLTIP
        btnClose->setToolTip(QApplication::translate("ChatWindow", "\345\205\263\351\227\255\345\275\223\345\211\215\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
        btnClose->setText(QApplication::translate("ChatWindow", "\345\205\263\351\227\255(&C)", nullptr));
#ifndef QT_NO_TOOLTIP
        btnSendMsg->setToolTip(QApplication::translate("ChatWindow", "\345\217\221\351\200\201\350\201\212\345\244\251\346\266\210\346\201\257", nullptr));
#endif // QT_NO_TOOLTIP
        btnSendMsg->setText(QApplication::translate("ChatWindow", "\345\217\221\351\200\201(&S)", nullptr));
        btnAction->setText(QString());
        label_2->setText(QApplication::translate("ChatWindow", "\346\226\207\344\273\266\344\274\240\350\276\223\357\274\232", nullptr));
        label_3->setText(QApplication::translate("ChatWindow", "\346\200\273\345\244\247\345\260\217:", nullptr));
        lineEditTotalSize->setText(QApplication::translate("ChatWindow", "0 KB", nullptr));
        label_4->setText(QApplication::translate("ChatWindow", "\345\267\262\344\274\240\350\276\223\357\274\232", nullptr));
        lineEditCurrSize->setText(QApplication::translate("ChatWindow", "0 KB", nullptr));
        label_5->setText(QApplication::translate("ChatWindow", "\351\200\237\347\216\207\357\274\232", nullptr));
        lineEditRate->setText(QApplication::translate("ChatWindow", "10 M/S", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWindow: public Ui_ChatWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
