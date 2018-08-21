/********************************************************************************
** Form generated from reading UI file 'CWidgetMap.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWIDGETMAP_H
#define UI_CWIDGETMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CWidgetMap
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *CWidgetMap)
    {
        if (CWidgetMap->objectName().isEmpty())
            CWidgetMap->setObjectName(QStringLiteral("CWidgetMap"));
        CWidgetMap->resize(312, 300);
        CWidgetMap->setMinimumSize(QSize(300, 300));
        CWidgetMap->setStyleSheet(QStringLiteral("background-color: rgb(0, 255, 255);"));
        gridLayout = new QGridLayout(CWidgetMap);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(CWidgetMap);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(CWidgetMap);

        QMetaObject::connectSlotsByName(CWidgetMap);
    } // setupUi

    void retranslateUi(QWidget *CWidgetMap)
    {
        CWidgetMap->setWindowTitle(QApplication::translate("CWidgetMap", "Form", 0));
        label->setText(QApplication::translate("CWidgetMap", "\345\234\260\345\233\276\347\225\214\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class CWidgetMap: public Ui_CWidgetMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWIDGETMAP_H
