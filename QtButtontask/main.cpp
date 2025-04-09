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


    CheckBox checkbox;
    checkbox.show();
    // checkbox.event(e);
    // checkbox.paintEvent(event);


    RadioButton radiobutton;
    radiobutton.show();
    // radiobutton.event(e);
    // radiobutton.paintEvent(event);


    ToolButton toolbutton;
    toolbutton.show();
    // toolbutton.event(e);
    // toolbutton.paintEvent(event);

    SpinBox spinbox;
    spinbox.show();
    // spinbox.event(e);
    // spinbox.paintEvent(event);



    ScrollBar scrollbar;
    scrollbar.show();
    // scrollbar.event(e);
    // scrollbar.paintEvent(event);


    TabBar tabbar;
    tabbar.show();
    // tabbar.event(e);
    // tabbar.paintEvent(event);

    Dialog dialog;
    dialog.show();
    // dialog.event(e);
    // dialog.paintEvent(event);


    ErrorMessage errormessage;
    errormessage.show();
    // errormessage.event(e);
    // errormessage.paintEvent(event);

    MenuBar menubar;
    menubar.show();
    // menubar.event(e);
    // menubar.paintEvent(event);


    return a.exec();
}
