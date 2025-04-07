#include "ABC.h"

ABC::ABC(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<"ABC constructor called";
}

ABC::~ABC()
{
    qDebug()<<"ABC destructor called";
}
void ABC::paintEvent(QPaintEvent *event)
{
    qDebug()<<"ABC paintEvent function called";
}
