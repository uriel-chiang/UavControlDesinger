#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "MinorWindow.h"
#include "CWidgetMap.h"
#include "CWidgetMonitor.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    static MainWindow *GetMainWindow(QWidget *parent = 0);

    void setMainWidget(QWidget *pMainWidget);

    QWidget *getMainWidget();
protected:
    void closeEvent(QCloseEvent *);

    void keyPressEvent(QKeyEvent *event);
private slots:
    void on_pushButtonClose_clicked();

private:

    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

    void init();
private:
    Ui::MainWindow  *ui;
    static MainWindow      *s_pMainWindow;
    CWidgetMap             *m_pCWidgetMap;
    CWidgetMonitor         *m_pCWidgetMonitor;

    MinorWindow            *m_pMinorWindow;
    QLayout                *m_pMainLayout;
};

MainWindow *GetMainWindow(QWidget *parent = 0);

#endif // MAINWINDOW_H
