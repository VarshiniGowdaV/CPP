#include "mybutton.h"

MyButton::MyButton()
{
    qDebug()<<"MyButton constructor called";
}
MyButton::~MyButton()
{
    qDebug()<<"MyButton destructor called";
}
bool MyButton::event(QEvent *event)
{
    qDebug()<<"MyButton function";
    return true;
}
