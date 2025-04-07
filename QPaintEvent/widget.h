#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QPaintEvent : public QWidget
{
    Q_OBJECT

public:
    QPaintEvent();
    ~QPaintEvent();
    bool paintEvent();
};
#endif // WIDGET_H
