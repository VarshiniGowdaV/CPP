#include "scrollbar.h"
#include <QDebug>
ScrollBar::ScrollBar()
{
    qDebug()<<"Scrollbar constructor called";
}
ScrollBar::~ScrollBar()
{
    qDebug()<<"Scrollbar destructor called";
}
// bool ScrollBar::event(QEvent *e)
// {
//      qDebug()<<"Scrollbar event function called";
//     return true;
// }
// void ScrollBar::paintEvent(QPaintEvent *event)
// {
//     qDebug()<<"Scrollbar paintevent function called";
// }
