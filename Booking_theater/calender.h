#ifndef CALENDER_H
#define CALENDER_H
#include <iostream>
using namespace std;
class Calender
{
public:
    Calender();
    ~Calender();

    void PrintAprilCalendar(int year);
    void CurrentDate();
    void showDate(const std::string& dateStr);
};

#endif // CALENDER_H
