/********************************************************************************
** Form generated from reading UI file 'CWidgetMonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWIDGETMONITOR_H
#define UI_CWIDGETMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CWidgetMonitor
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *CWidgetMonitor)
    {
        if (CWidgetMonitor->objectName().isEmpty())
            CWidgetMonitor->setObjectName(QStringLiteral("CWidgetMonitor"));
        CWidgetMonitor->resize(737, 614);
        CWidgetMonitor->setMinimumSize(QSize(300, 300));
        CWidgetMonitor->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 0);"));
        gridLayout = new QGridLayout(CWidgetMonitor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(CWidgetMonitor);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(CWidgetMonitor);

        QMetaObject::connectSlotsByName(CWidgetMonitor);
    } // setupUi

    void retranslateUi(QWidget *CWidgetMonitor)
    {
        CWidgetMonitor->setWindowTitle(QApplication::translate("CWidgetMonitor", "Form", 0));
        label->setText(QApplication::translate("CWidgetMonitor", "\347\233\221\346\216\247\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class CWidgetMonitor: public Ui_CWidgetMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWIDGETMONITOR_H
