#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget widget;
    widget.show();
    QObject o;
    QPaintEvent paintevent;
    paintevent.paintEvent();
    return a.exec();
}
