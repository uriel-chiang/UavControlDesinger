/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QFrame *frameTitle;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCETC;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonClose;
    QWidget *MainWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(983, 630);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frameTitle = new QFrame(centralWidget);
        frameTitle->setObjectName(QStringLiteral("frameTitle"));
        frameTitle->setMinimumSize(QSize(0, 30));
        frameTitle->setMaximumSize(QSize(16777215, 30));
        frameTitle->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 255);"));
        frameTitle->setFrameShape(QFrame::StyledPanel);
        frameTitle->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameTitle);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelCETC = new QLabel(frameTitle);
        labelCETC->setObjectName(QStringLiteral("labelCETC"));
        labelCETC->setMinimumSize(QSize(211, 20));
        labelCETC->setMaximumSize(QSize(211, 20));
        labelCETC->setStyleSheet(QStringLiteral(""));
        labelCETC->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/res/image/logo.png")));
        labelCETC->setScaledContents(true);
        labelCETC->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(labelCETC);

        horizontalSpacer_2 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        labelTitle = new QLabel(frameTitle);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setMinimumSize(QSize(0, 0));
        labelTitle->setMaximumSize(QSize(400, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        labelTitle->setFont(font);
        labelTitle->setLayoutDirection(Qt::LeftToRight);
        labelTitle->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        labelTitle->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonClose = new QPushButton(frameTitle);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/res/image/icon_close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClose->setIcon(icon);

        horizontalLayout->addWidget(pushButtonClose);


        gridLayout->addWidget(frameTitle, 0, 0, 1, 1);

        MainWidget = new QWidget(centralWidget);
        MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(MainWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        labelCETC->setText(QString());
        labelTitle->setText(QApplication::translate("MainWindow", "KJB\350\275\257\344\273\266", 0));
        pushButtonClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
