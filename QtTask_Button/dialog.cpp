#include "dialog.h"
#include <QDebug>
Dialog::Dialog()
{
    qDebug()<<"Dialog constructor called";
}
Dialog::~Dialog()
{
    qDebug()<<"Dialog destructor called";

}
bool Dialog::event(QEvent *e)
{
    qDebug()<<"Dialog event function called";
    return true;
}
void Dialog::paintEvent(QPaintEvent *event)
{
   qDebug()<<"Dialog paintevent called";

}
