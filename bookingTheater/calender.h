#ifndef CALENDER_H
#define CALENDER_H

class Calender
{
private:
    void displayCalender(int month,int year) const;
    int getStartDay(int month,int year) const;
    int getDaysInMonth(int month,int year)const;
    bool isLeapYear(int year) const;
public:
    Calender();
    ~Calender();

    void run();
    void displayCurrentDate() const;
};

#endif // CALENDER_H
