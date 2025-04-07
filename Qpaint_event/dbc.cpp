#include "dbc.h"

DBC::DBC(QWidget *parent):QWidget(parent)
{
    qDebug()<<"DBC constructor called";
}
DBC::~DBC()
{
    qDebug()<<"DBC destructor called";
}
void DBC::paintEvent(QPaintEvent *event)
{
    qDebug()<<"DBC paintevent function called";
}
