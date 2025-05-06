#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QVector>

class MainWindow : public QMainWindow ,public QPushButton,{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QVector<QPushButton*> dateButtons;
    QPushButton *prevMonthBtn, *nextMonthBtn;
    QPushButton *bookBtn, *checkBtn, *exitBtn;
    QLabel *monthLabel;

    void setupUI();
    void createCalendarButtons();
};

#endif // MAINWINDOW_H
