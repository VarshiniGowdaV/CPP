#ifndef TABBAR_H
#define TABBAR_H
#include <QEvent>
#include <QPaintEvent>
#include <QTabBar>

class TabBar : public QTabBar
{
public:
    TabBar();
    ~TabBar();
    bool event(QEvent *e)override;
    void paintEvent(QPaintEvent * event)override;
};

#endif // TABBAR_H
