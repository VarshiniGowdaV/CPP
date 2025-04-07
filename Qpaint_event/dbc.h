#ifndef DBC_H
#define DBC_H
#include "abc.h"
#include <iostream>
#include <QWidget>
using namespace std;

class DBC:public QWidget
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;
public:
    DBC(QWidget *parent = nullptr);
    ~DBC();
};

#endif // DBC_H
