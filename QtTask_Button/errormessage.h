#ifndef ERRORMESSAGE_H
#define ERRORMESSAGE_H
#include <QEvent>
#include <QPaintEvent>
#include <QErrorMessage>

class ErrorMessage : public QErrorMessage
{
public:
    ErrorMessage();
    ~ErrorMessage();
    bool event(QEvent *e)override;
    void paintEvent(QPaintEvent * event)override;
};

#endif // ERRORMESSAGE_H
