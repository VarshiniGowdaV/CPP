#ifndef SCROLLBAR_H
#define SCROLLBAR_H
#include <QEvent>
#include <QPaintEvent>
#include <QScrollBar>

class ScrollBar : public QScrollBar
{
public:
    ScrollBar();
    ~ScrollBar();
    bool event(QEvent *e)override;
    void paintEvent(QPaintEvent * event)override;
};

#endif // SCROLLBAR_H
