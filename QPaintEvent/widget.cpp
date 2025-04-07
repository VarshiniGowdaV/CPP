#include "widget.h"
#include <iostream>
#include <QDebug>
using namespace std;
QPaintEvent::QPaintEvent()
{
    QDebug<<"QPaintEvent constructor called"<<endl;
}
QPaintEvent::~QPaintEvent()
{
    QDebug<<"QPaintEvent destructor called"<<endl;
}
bool QPaintEvent::paintEvent()
{
    QDebug<<"QpaintEvent function called"<<endl;
}
