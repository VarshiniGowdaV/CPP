#ifndef CHECKBOX_H
#define CHECKBOX_H
// #include <QEvent>
// #include <QPaintEvent>
#include <QCheckBox>

class CheckBox : public QCheckBox
{
public:
    CheckBox();
    ~CheckBox();
    // bool event(QEvent *e)override;
    // void paintEvent(QPaintEvent *event)override;
};

#endif // CHECKBOX_H
