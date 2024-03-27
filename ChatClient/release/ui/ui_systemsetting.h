/********************************************************************************
** Form generated from reading UI file 'systemsetting.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTING_H
#define UI_SYSTEMSETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clineedit.h"

QT_BEGIN_NAMESPACE

class Ui_SystemSetting
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetWinTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWinIcon;
    QLabel *labelWinTitle;
    QPushButton *btnWinMin;
    QPushButton *btnWinClose;
    QWidget *widgetBody;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QIPLineEdit *lineEditHostAddr;
    QLabel *label_2;
    QLineEdit *lineEditHostMsgPort;
    QLabel *label_3;
    QLineEdit *lineEditHostFilePort;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBoxLocalHost;
    QPushButton *btnSaveSetting;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QToolButton *toolBtnLeftClr;
    QToolButton *toolBtnClr;
    QToolButton *toolButton;
    QLineEdit *lineEditRightBubble;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *lineEditLeftBubble;
    QLineEdit *lineEditClrBackground;
    QLabel *label_5;
    QLabel *labelBackground;
    QLabel *labelLeftBubbleClr;
    QLabel *labelRightBubbleClr;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SystemSetting)
    {
        if (SystemSetting->objectName().isEmpty())
            SystemSetting->setObjectName(QStringLiteral("SystemSetting"));
        SystemSetting->resize(440, 340);
        SystemSetting->setMinimumSize(QSize(440, 340));
        SystemSetting->setMaximumSize(QSize(440, 340));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resource/background/app.png"), QSize(), QIcon::Normal, QIcon::Off);
        SystemSetting->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(SystemSetting);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        widgetWinTitle = new QWidget(SystemSetting);
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
        labelWinIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/common/ic_setting.png")));

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

        verticalLayout->addWidget(widgetWinTitle);

        widgetBody = new QWidget(SystemSetting);
        widgetBody->setObjectName(QStringLiteral("widgetBody"));
        verticalLayout_2 = new QVBoxLayout(widgetBody);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        groupBox = new QGroupBox(widgetBody);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEditHostAddr = new QIPLineEdit(groupBox);
        lineEditHostAddr->setObjectName(QStringLiteral("lineEditHostAddr"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditHostAddr);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEditHostMsgPort = new QLineEdit(groupBox);
        lineEditHostMsgPort->setObjectName(QStringLiteral("lineEditHostMsgPort"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditHostMsgPort);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEditHostFilePort = new QLineEdit(groupBox);
        lineEditHostFilePort->setObjectName(QStringLiteral("lineEditHostFilePort"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditHostFilePort);


        horizontalLayout->addLayout(formLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        checkBoxLocalHost = new QCheckBox(groupBox);
        checkBoxLocalHost->setObjectName(QStringLiteral("checkBoxLocalHost"));

        verticalLayout_3->addWidget(checkBoxLocalHost);

        btnSaveSetting = new QPushButton(groupBox);
        btnSaveSetting->setObjectName(QStringLiteral("btnSaveSetting"));

        verticalLayout_3->addWidget(btnSaveSetting);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        horizontalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_2);


        verticalLayout_4->addWidget(widget);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toolBtnLeftClr = new QToolButton(groupBox_2);
        toolBtnLeftClr->setObjectName(QStringLiteral("toolBtnLeftClr"));

        gridLayout->addWidget(toolBtnLeftClr, 1, 3, 1, 1);

        toolBtnClr = new QToolButton(groupBox_2);
        toolBtnClr->setObjectName(QStringLiteral("toolBtnClr"));

        gridLayout->addWidget(toolBtnClr, 2, 3, 1, 1);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout->addWidget(toolButton, 0, 3, 1, 1);

        lineEditRightBubble = new QLineEdit(groupBox_2);
        lineEditRightBubble->setObjectName(QStringLiteral("lineEditRightBubble"));
        lineEditRightBubble->setReadOnly(true);

        gridLayout->addWidget(lineEditRightBubble, 2, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        lineEditLeftBubble = new QLineEdit(groupBox_2);
        lineEditLeftBubble->setObjectName(QStringLiteral("lineEditLeftBubble"));
        lineEditLeftBubble->setReadOnly(true);

        gridLayout->addWidget(lineEditLeftBubble, 1, 1, 1, 1);

        lineEditClrBackground = new QLineEdit(groupBox_2);
        lineEditClrBackground->setObjectName(QStringLiteral("lineEditClrBackground"));
        lineEditClrBackground->setReadOnly(true);

        gridLayout->addWidget(lineEditClrBackground, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        labelBackground = new QLabel(groupBox_2);
        labelBackground->setObjectName(QStringLiteral("labelBackground"));
        labelBackground->setMinimumSize(QSize(20, 20));
        labelBackground->setMaximumSize(QSize(20, 20));
        labelBackground->setStyleSheet(QStringLiteral("background-color: #ECECEC;"));

        gridLayout->addWidget(labelBackground, 0, 2, 1, 1);

        labelLeftBubbleClr = new QLabel(groupBox_2);
        labelLeftBubbleClr->setObjectName(QStringLiteral("labelLeftBubbleClr"));
        labelLeftBubbleClr->setMinimumSize(QSize(20, 20));
        labelLeftBubbleClr->setMaximumSize(QSize(20, 20));
        labelLeftBubbleClr->setStyleSheet(QStringLiteral("background-color: #9EE656;"));

        gridLayout->addWidget(labelLeftBubbleClr, 1, 2, 1, 1);

        labelRightBubbleClr = new QLabel(groupBox_2);
        labelRightBubbleClr->setObjectName(QStringLiteral("labelRightBubbleClr"));
        labelRightBubbleClr->setMinimumSize(QSize(20, 20));
        labelRightBubbleClr->setMaximumSize(QSize(20, 20));
        labelRightBubbleClr->setStyleSheet(QStringLiteral("background-color:#FFFFFF;"));

        gridLayout->addWidget(labelRightBubbleClr, 2, 2, 1, 1);


        verticalLayout_5->addLayout(gridLayout);


        verticalLayout_4->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout->addWidget(widgetBody);


        retranslateUi(SystemSetting);
        QObject::connect(btnWinClose, SIGNAL(clicked()), SystemSetting, SLOT(close()));
        QObject::connect(btnWinMin, SIGNAL(clicked()), SystemSetting, SLOT(showMinimized()));

        QMetaObject::connectSlotsByName(SystemSetting);
    } // setupUi

    void retranslateUi(QWidget *SystemSetting)
    {
        SystemSetting->setWindowTitle(QApplication::translate("SystemSetting", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        labelWinIcon->setText(QString());
        labelWinTitle->setText(QApplication::translate("SystemSetting", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        btnWinMin->setText(QString());
        btnWinClose->setText(QString());
        groupBox->setTitle(QApplication::translate("SystemSetting", "\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("SystemSetting", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\351\205\215\347\275\256\357\274\232", nullptr));
        lineEditHostAddr->setText(QApplication::translate("SystemSetting", "192.168.5.181", nullptr));
        label_2->setText(QApplication::translate("SystemSetting", "\346\266\210\346\201\257\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        lineEditHostMsgPort->setText(QApplication::translate("SystemSetting", "60001", nullptr));
        label_3->setText(QApplication::translate("SystemSetting", "\346\226\207\344\273\266\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\357\274\232", nullptr));
        lineEditHostFilePort->setText(QApplication::translate("SystemSetting", "60001", nullptr));
        checkBoxLocalHost->setText(QApplication::translate("SystemSetting", "\344\275\277\345\261\200\345\237\237\347\275\221\345\234\260\345\235\200", nullptr));
        btnSaveSetting->setText(QApplication::translate("SystemSetting", "\344\277\235\345\255\230\351\205\215\347\275\256", nullptr));
        checkBox->setText(QApplication::translate("SystemSetting", "\350\207\252\345\212\250\346\267\273\345\212\240\345\245\275\345\217\213", nullptr));
        checkBox_2->setText(QApplication::translate("SystemSetting", "\350\207\252\345\212\250\346\216\245\346\224\266\347\276\244\347\273\204\344\272\272\345\221\230", nullptr));
        groupBox_2->setTitle(QApplication::translate("SystemSetting", "\350\201\212\345\244\251\350\203\214\346\231\257\350\211\262\351\205\215\347\275\256", nullptr));
        toolBtnLeftClr->setText(QApplication::translate("SystemSetting", "...", nullptr));
        toolBtnClr->setText(QApplication::translate("SystemSetting", "...", nullptr));
        toolButton->setText(QApplication::translate("SystemSetting", "...", nullptr));
        lineEditRightBubble->setText(QApplication::translate("SystemSetting", "#FFFFFF", nullptr));
        label_6->setText(QApplication::translate("SystemSetting", "\350\201\212\345\244\251\350\203\214\346\231\257\350\211\262\357\274\232", nullptr));
        label_4->setText(QApplication::translate("SystemSetting", "\345\267\246\346\260\224\350\276\271\346\263\241\351\242\234\350\211\262\357\274\232", nullptr));
        lineEditLeftBubble->setText(QApplication::translate("SystemSetting", "#9EE656", nullptr));
        lineEditClrBackground->setText(QApplication::translate("SystemSetting", "#ECECEC", nullptr));
        label_5->setText(QApplication::translate("SystemSetting", "\345\217\263\350\276\271\346\260\224\346\263\241\351\242\234\350\211\262\357\274\232", nullptr));
        labelBackground->setText(QString());
        labelLeftBubbleClr->setText(QString());
        labelRightBubbleClr->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemSetting: public Ui_SystemSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTING_H
