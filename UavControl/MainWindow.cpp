#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QGridLayout>

MainWindow *MainWindow::s_pMainWindow = NULL;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_pCWidgetMap(GetCWidgetMap(this)),
    m_pCWidgetMonitor(GetCWidgetMonitor(this)),
    m_pMinorWindow(GetMinorWindow()),
    m_pMainLayout(new QGridLayout),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_DeleteOnClose, true);
    setWindowState(Qt::WindowMaximized);
    setWindowFlags(Qt::FramelessWindowHint);

    init();
}
void MainWindow::init()
{
    m_pMainLayout->setMargin(0);
    m_pMainLayout->setSpacing(0);

    setMainWidget(m_pCWidgetMonitor);
    m_pMinorWindow->setMinorWidget(m_pCWidgetMap);
    m_pMinorWindow->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setMainWidget(QWidget *widget)
{
    if(m_pMainLayout->isEmpty())
    {
        m_pMainLayout->removeWidget(m_pCWidgetMap);
        m_pMainLayout->removeWidget(m_pMinorWindow);
    }
    m_pMainLayout->addWidget(widget);
    ui->MainWidget->setLayout(m_pMainLayout);
}

QWidget *MainWindow::getMainWidget()
{
    return m_pMainLayout->widget();
}

void MainWindow::closeEvent(QCloseEvent *)
{
    m_pMinorWindow->close();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    //键盘事件:Ctrl+F4 关闭界面
  if ((event->modifiers() == Qt::ControlModifier) && (event->key() == Qt::Key_F4)){
         this->close();
    }
}

void MainWindow::on_pushButtonClose_clicked()
{
    close();
}


MainWindow *MainWindow::GetMainWindow(QWidget *parent)
{
    if(NULL == s_pMainWindow){
        s_pMainWindow = new MainWindow(parent);
    }
    return s_pMainWindow;
}

MainWindow *GetMainWindow(QWidget *parent)
{
    return MainWindow::GetMainWindow(parent);
}

