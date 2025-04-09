#include "errormessage.h"
#include <QDebug>
ErrorMessage::ErrorMessage()
{
    qDebug()<<"ErrorMessage constructor called";
}
ErrorMessage::~ErrorMessage()
{
    qDebug()<<"ErrorMessage destructor called";
}
// bool ErrorMessage::event(QEvent *e)
// {
//     qDebug()<<"ErrorMessage event function called";
//     return true;
// }
// void ErrorMessage::paintEvent(QPaintEvent *event)
// {
//     qDebug()<<"ErrorMessage paint event function called";
// }
