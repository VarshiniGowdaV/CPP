#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "calender.h"
#include "TheatreManager.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onPrevMonthClicked();
    void onNextMonthClicked();
    void onShowCalendarClicked();
    void onBookTheatreClicked();
    void onCheckBookingsClicked();
    void onExitClicked();

private:
    Calendar* calendar;
    TheaterManager* manager;
    QLabel* calendarDisplayLabel;
    QPushButton* prevMonthButton;
    QPushButton* nextMonthButton;
    QPushButton* bookTheatreButton;
    QPushButton* checkBookingsButton;
    QPushButton* exitButton;
};

#endif // MAINWINDOW_H
