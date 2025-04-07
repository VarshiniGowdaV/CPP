#ifndef RADIOBUTTON_H
#define RADIOBUTTON_H
#include <QEvent>
#include <QPaintEvent>
#include <QRadioButton>

class RadioButton : public QRadioButton
{
public:
    RadioButton();
    ~RadioButton();
    bool event(QEvent *e) override;
    void paintEvent(QPaintEvent *event)override;
};

#endif // RADIOBUTTON_H
