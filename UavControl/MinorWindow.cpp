#include "MinorWindow.h"
#include "ui_MinorWindow.h"
#include "MainWindow.h"
#include <QDesktopWidget>

MinorWindow *MinorWindow::s_pMinorWindow = NULL;
MinorWindow::MinorWindow(QWidget *parent) :
    QWidget(parent),
    m_pCWidgetMap(GetCWidgetMap(this)),
    m_pCWidgetMonitor(GetCWidgetMonitor(this)),
    m_pMinorLayout(new QGridLayout),
    bMinWidgetIsMap(true),
    ui(new Ui::MinorWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowStaysOnTopHint|Qt::FramelessWindowHint);

    QDesktopWidget* desktopWidget = QApplication::desktop();
    move(0, desktopWidget->screenGeometry().height() - height());

    m_pMinorLayout->setMargin(0);
    m_pMinorLayout->setSpacing(0);
    ui->MinorWidget->installEventFilter(this);
}

MinorWindow::~MinorWindow()
{
    delete ui;
}

void MinorWindow::setMinorWidget(QWidget *widget)
{
    if(m_pMinorLayout->isEmpty())
    {
        m_pMinorLayout->removeWidget(m_pCWidgetMap);
        m_pMinorLayout->removeWidget(m_pCWidgetMonitor);
    }
    if(widget == m_pCWidgetMap)
        bMinWidgetIsMap = true;
    else
        bMinWidgetIsMap = false;

    m_pMinorLayout->addWidget(widget);
    ui->MinorWidget->setLayout(m_pMinorLayout);

}

bool MinorWindow::eventFilter(QObject *obj, QEvent *evt)
{
    if(evt->type() == QEvent::MouseButtonPress && obj == ui->MinorWidget)
    {
        if(bMinWidgetIsMap)
        {
            GetMainWindow()->setMainWidget(m_pCWidgetMap);
            setMinorWidget(m_pCWidgetMonitor);
        }
        else
        {
            GetMainWindow()->setMainWidget(m_pCWidgetMonitor);
            setMinorWidget(m_pCWidgetMap);
        }
    }

    return QWidget::eventFilter(obj,evt);
}

MinorWindow *MinorWindow::GetMinorWindow(QWidget *parent)
{
    if(NULL == s_pMinorWindow){
        s_pMinorWindow = new MinorWindow(parent);
    }
    return s_pMinorWindow;
}

MinorWindow *GetMinorWindow(QWidget *parent)
{
    return MinorWindow::GetMinorWindow(parent);
}
