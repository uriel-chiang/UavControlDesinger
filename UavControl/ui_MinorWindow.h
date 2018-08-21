/********************************************************************************
** Form generated from reading UI file 'MinorWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINORWINDOW_H
#define UI_MINORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MinorWindow
{
public:
    QGridLayout *gridLayout;
    QWidget *MinorWidget;

    void setupUi(QWidget *MinorWindow)
    {
        if (MinorWindow->objectName().isEmpty())
            MinorWindow->setObjectName(QStringLiteral("MinorWindow"));
        MinorWindow->resize(200, 200);
        MinorWindow->setMinimumSize(QSize(200, 200));
        MinorWindow->setMaximumSize(QSize(200, 200));
        MinorWindow->setWindowOpacity(0.8);
        gridLayout = new QGridLayout(MinorWindow);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        MinorWidget = new QWidget(MinorWindow);
        MinorWidget->setObjectName(QStringLiteral("MinorWidget"));

        gridLayout->addWidget(MinorWidget, 0, 0, 1, 1);


        retranslateUi(MinorWindow);

        QMetaObject::connectSlotsByName(MinorWindow);
    } // setupUi

    void retranslateUi(QWidget *MinorWindow)
    {
        MinorWindow->setWindowTitle(QApplication::translate("MinorWindow", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class MinorWindow: public Ui_MinorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINORWINDOW_H
