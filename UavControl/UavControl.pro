#-------------------------------------------------
#
# Project created by QtCreator 2018-08-20T09:40:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = UavControl
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    CWidgetMonitor.cpp \
    CWidgetMap.cpp \
    MinorWindow.cpp

HEADERS  += MainWindow.h \
    CWidgetMonitor.h \
    CWidgetMap.h \
    MinorWindow.h

FORMS    += MainWindow.ui \
    CWidgetMonitor.ui \
    CWidgetMap.ui \
    MinorWindow.ui

RESOURCES += \
    res.qrc
