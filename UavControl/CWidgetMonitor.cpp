#include "CWidgetMonitor.h"
#include "ui_CWidgetMonitor.h"
#include "MainWindow.h"

CWidgetMonitor *CWidgetMonitor::s_pCWidgetMonitor = NULL;
CWidgetMonitor::CWidgetMonitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CWidgetMonitor)
{
    ui->setupUi(this);
}

CWidgetMonitor::~CWidgetMonitor()
{
    delete ui;
}

CWidgetMonitor *CWidgetMonitor::GetCWidgetMonitor(QWidget *parent)
{
    if(NULL == s_pCWidgetMonitor){
        s_pCWidgetMonitor = new CWidgetMonitor(parent);
    }
    return s_pCWidgetMonitor;
}

CWidgetMonitor *GetCWidgetMonitor(QWidget *parent)
{
    return CWidgetMonitor::GetCWidgetMonitor(parent);
}
