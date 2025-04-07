#include "toolbutton.h"
#include <QDebug>
ToolButton::ToolButton()
{
    qDebug()<<"ToolButton constructor called";
}
ToolButton::~ToolButton()
{
    qDebug()<<"ToolButton destructor called";
}
bool ToolButton::event(QEvent *e)
{
    qDebug()<<"ToolButton event function called";
    return true;
}
void ToolButton::paintEvent(QPaintEvent *event)
{
    qDebug()<<"ToolButton paint event function called";
}
