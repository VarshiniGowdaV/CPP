#include "checkbox.h"
#include <QDebug>
CheckBox::CheckBox()
{
    qDebug()<<"CheckBox constructor called";
}
CheckBox::~CheckBox()
{
    qDebug()<<"CheckBox destructor called";
}
// bool CheckBox::event(QEvent *e)
// {
//     qDebug()<<"CheckBox event function called";
//     return true;
// }
// void CheckBox::paintEvent(QPaintEvent *event)
// {
//     qDebug()<<"CheckBox paintevent function called";
// }
