#ifndef MINORWINDOW_H
#define MINORWINDOW_H

#include <QWidget>
#include "CWidgetMap.h"
#include "CWidgetMonitor.h"

namespace Ui {
class MinorWindow;
}

class MinorWindow : public QWidget
{
    Q_OBJECT

public:

    static MinorWindow *GetMinorWindow(QWidget *parent);

    explicit MinorWindow(QWidget *parent = 0);

    ~MinorWindow();

    void setMinorWidget(QWidget *widget);
protected:
    bool eventFilter(QObject * obj, QEvent * evt);
private:
    Ui::MinorWindow *ui;
    static MinorWindow      *s_pMinorWindow;
    CWidgetMap             *m_pCWidgetMap;
    CWidgetMonitor         *m_pCWidgetMonitor;

    QLayout                *m_pMinorLayout;

    bool                    bMinWidgetIsMap;
};
MinorWindow *GetMinorWindow(QWidget *parent = 0);
#endif // MINORWINDOW_H
