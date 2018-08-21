#ifndef CWIDGETMAP_H
#define CWIDGETMAP_H

#include <QWidget>

namespace Ui {
class CWidgetMap;
}

class CWidgetMap : public QWidget
{
    Q_OBJECT

public:
    static CWidgetMap *GetCWidgetMap(QWidget *parent = 0);
private:
    explicit CWidgetMap(QWidget *parent = 0);

    ~CWidgetMap();

private:
    Ui::CWidgetMap      *ui;
    static CWidgetMap   *s_pCWidgetMap;
};

CWidgetMap *GetCWidgetMap(QWidget *parent = 0);
#endif // CWIDGETMAP_H
