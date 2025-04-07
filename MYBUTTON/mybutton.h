#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <iostream>
using namespace std;
#include <QAbstractbutton>

class MyButton : public QAbstractbutton
{
public:
    MyButton();
    ~MyButton();
    virtual bool event(QEvent *event);
};

#endif // MYBUTTON_H
