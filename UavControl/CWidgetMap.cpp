#include "CWidgetMap.h"
#include "ui_CWidgetMap.h"
#include "MainWindow.h"

CWidgetMap *CWidgetMap::s_pCWidgetMap = NULL;
CWidgetMap::CWidgetMap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CWidgetMap)
{
    ui->setupUi(this);
}

CWidgetMap::~CWidgetMap()
{
    delete ui;
}


CWidgetMap *CWidgetMap::GetCWidgetMap(QWidget *parent)
{
    if(NULL == s_pCWidgetMap){
        s_pCWidgetMap = new CWidgetMap(parent);
    }
    return s_pCWidgetMap;
}


CWidgetMap *GetCWidgetMap(QWidget *parent )
{
    return CWidgetMap::GetCWidgetMap(parent);
}
