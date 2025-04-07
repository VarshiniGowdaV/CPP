#ifndef ABC_H
#define ABC_H

#include <QWidget>

class ABC : public QWidget
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;
public:
    ABC(QWidget *parent = nullptr);
    ~ABC();
};
#endif // ABC_H
