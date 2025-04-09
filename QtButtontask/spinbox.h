#ifndef SPINBOX_H
#define SPINBOX_H
// #include <QEvent>
// #include <QPaintEvent>
#include <QSpinBox>

class SpinBox : public QSpinBox
{
public:
    SpinBox();
    ~SpinBox();
    // bool event(QEvent *e)override;
    // void paintEvent(QPaintEvent *event)override;
};

#endif // SPINBOX_H
