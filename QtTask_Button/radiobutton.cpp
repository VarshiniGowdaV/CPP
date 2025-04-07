#include "radiobutton.h"
#include <QDebug>
RadioButton::RadioButton()
{
    qDebug()<<"RadioButton construtor called";
}
RadioButton::~RadioButton()
{
    qDebug()<<"RadioButton destructor called";
}
bool RadioButton::event(QEvent *e)
{
    qDebug()<<"RadioButton event function called";
    return true;
}
void RadioButton::paintEvent(QPaintEvent *event)
{
    qDebug()<<"RadioButton paintevent called";
}
