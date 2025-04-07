#include "spinbox.h"
#include <QDebug>
SpinBox::SpinBox()
{
    qDebug()<<"Spinbox constructor called";
}
SpinBox::~SpinBox()
{
     qDebug()<<"Spinbox destructor called";
}
bool SpinBox::event(QEvent *e)
{
    qDebug()<<"Spinbox event function called";
    return true;
}
void SpinBox::paintEvent(QPaintEvent *event)
{
    qDebug()<<"Spinbox paint event function called";

}
