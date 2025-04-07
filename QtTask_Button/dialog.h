#ifndef DIALOG_H
#define DIALOG_H
#include <QEvent>
#include <QPaintEvent>
#include <QDialog>

class Dialog : public QDialog
{
public:
    Dialog();
    ~Dialog();
    bool event(QEvent *e)override;
    void paintEvent(QPaintEvent * event)override;
};

#endif // DIALOG_H
