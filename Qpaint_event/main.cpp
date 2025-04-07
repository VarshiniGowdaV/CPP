#include "ABC.h"
#include "dbc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget w;
    w.show();

    QObject object;

    ABC abc;
    abc.show();
    DBC dbc;
    dbc.show();
    QWidget w1;
    w1.show();
    return a.exec();
}
