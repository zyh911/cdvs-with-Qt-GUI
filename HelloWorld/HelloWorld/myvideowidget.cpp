#include "myvideowidget.h"
#include "QEvent"

MyVideoWidget::MyVideoWidget()
{

}

void MyVideoWidget::paintEvent(QPaintEvent *event)
{
    this->show();
}

void MyVideoWidget::changeEvent(QEvent *e)
{
    switch (e->type()) {

    case QEvent::WindowStateChange:
        if(isModal())
             this->setWindowState(Qt::WindowActive);//恢复窗口显示
             this->repaint();
             e->ignore();
    default:
        break;
    }
}
