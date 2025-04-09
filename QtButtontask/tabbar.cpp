#include "tabbar.h"
#include <QDebug>
TabBar::TabBar()
{
    qDebug()<<"Tabbar constructor called";
}
TabBar::~TabBar()
{
    qDebug()<<"Tabbar destructor called";
}
// bool TabBar::event(QEvent *e)
// {
//     qDebug()<<"Tabbar event function called";
//     return true;
// }
// void TabBar::paintEvent(QPaintEvent *event)
// {
//     qDebug()<<"Tabbar paintevent called";
// }
