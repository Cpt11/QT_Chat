/********************************************************************************
** Form generated from reading UI file 'qqlistviewgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQLISTVIEWGROUP_H
#define UI_QQLISTVIEWGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQListViewGroup
{
public:
    QLabel *groupIconLabel;
    QLabel *groupTitleLabel;
    QLabel *groupSubTitleLabel;

    void setupUi(QWidget *QQListViewGroup)
    {
        if (QQListViewGroup->objectName().isEmpty())
            QQListViewGroup->setObjectName(QStringLiteral("QQListViewGroup"));
        QQListViewGroup->resize(270, 25);
        groupIconLabel = new QLabel(QQListViewGroup);
        groupIconLabel->setObjectName(QStringLiteral("groupIconLabel"));
        groupIconLabel->setGeometry(QRect(10, 7, 11, 11));
        groupTitleLabel = new QLabel(QQListViewGroup);
        groupTitleLabel->setObjectName(QStringLiteral("groupTitleLabel"));
        groupTitleLabel->setGeometry(QRect(30, 5, 131, 16));
        groupSubTitleLabel = new QLabel(QQListViewGroup);
        groupSubTitleLabel->setObjectName(QStringLiteral("groupSubTitleLabel"));
        groupSubTitleLabel->setGeometry(QRect(200, 5, 62, 16));

        retranslateUi(QQListViewGroup);

        QMetaObject::connectSlotsByName(QQListViewGroup);
    } // setupUi

    void retranslateUi(QWidget *QQListViewGroup)
    {
        QQListViewGroup->setWindowTitle(QApplication::translate("QQListViewGroup", "Form", nullptr));
        groupIconLabel->setText(QString());
        groupTitleLabel->setText(QString());
        groupSubTitleLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QQListViewGroup: public Ui_QQListViewGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQLISTVIEWGROUP_H
