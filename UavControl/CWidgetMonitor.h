#ifndef CWIDGETMONITOR_H
#define CWIDGETMONITOR_H

#include <QWidget>

namespace Ui {
class CWidgetMonitor;
}

class CWidgetMonitor : public QWidget
{
    Q_OBJECT

public:
    static CWidgetMonitor *GetCWidgetMonitor(QWidget *parent = 0);
private:
    explicit CWidgetMonitor(QWidget *parent = 0);
    ~CWidgetMonitor();
private:
    Ui::CWidgetMonitor  *ui;
    static CWidgetMonitor      *s_pCWidgetMonitor;
};

CWidgetMonitor *GetCWidgetMonitor(QWidget *parent = 0);
#endif // CWIDGETMONITOR_H
