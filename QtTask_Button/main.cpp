#include "widget.h"
#include <mybutton.h>
#include <checkbox.h>
#include <radiobutton.h>
#include "toolbutton.h"
#include "spinbox.h"
#include "scrollbar.h"
#include "tabbar.h"
#include "dialog.h"
#include "errormessage.h"
#include "menubar.h"
#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // QEvent *e;
    // QPaintEvent *event;
    Widget w;
    w.show();

    MyButton button;
    button.show();
    // button.event(e);
    // button.paintEvent(event);
    qDebug()<<"******************************";

    CheckBox checkbox;
    checkbox.show();
    // checkbox.event(e);
    // checkbox.paintEvent(event);
    qDebug()<<"******************************";


    RadioButton radiobutton;
    radiobutton.show();
    // radiobutton.event(e);
    // radiobutton.paintEvent(event);
    qDebug()<<"******************************";


    ToolButton toolbutton;
    toolbutton.show();
    // toolbutton.event(e);
    // toolbutton.paintEvent(event);
    qDebug()<<"******************************";


    SpinBox spinbox;
    spinbox.show();
    // spinbox.event(e);
    // spinbox.paintEvent(event);
    qDebug()<<"******************************";


    ScrollBar scrollbar;
    scrollbar.show();
    // scrollbar.event(e);
    // scrollbar.paintEvent(event);
    qDebug()<<"******************************";


    TabBar tabbar;
    tabbar.show();
    // tabbar.event(e);
    // tabbar.paintEvent(event);
    qDebug()<<"******************************";

    Dialog dialog;
    dialog.show();
    // dialog.event(e);
    // dialog.paintEvent(event);
    qDebug()<<"******************************";

    ErrorMessage errormessage;
    errormessage.show();
    // errormessage.event(e);
    // errormessage.paintEvent(event);
    qDebug()<<"******************************";

    MenuBar menubar;
    menubar.show();
    // menubar.event(e);
    // menubar.paintEvent(event);
    qDebug()<<"******************************";

    return a.exec();
}
