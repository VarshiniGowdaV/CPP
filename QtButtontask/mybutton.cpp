#include "mybutton.h"
#include <QDebug>
MyButton::MyButton()
{
    qDebug()<<"MyButton constructor called";
}
MyButton::~MyButton()
{
    qDebug()<<"MyButton destructor called";
}
// bool MyButton::event(QEvent *e)
// {
//     qDebug()<<"MyButton event functon called";
//     return true;
// }
// void MyButton::paintEvent(QPaintEvent *event)
// {
//     qDebug()<<"MyButton paintevent function called";
// }
