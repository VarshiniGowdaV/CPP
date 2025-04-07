#include "menubar.h"
#include <QDebug>
MenuBar::MenuBar()
{
    qDebug()<<"MenuBar constructor called";
}
MenuBar::~MenuBar()
{
    qDebug()<<"MenuBar destructor called";
}
bool MenuBar::event(QEvent *e)
{
    qDebug()<<"MenuBar event function called";
    return true;
}
void MenuBar::paintEvent(QPaintEvent *event)
{
    qDebug()<<"MenuBar paintevent function called";
}
