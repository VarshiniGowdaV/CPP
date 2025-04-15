#include "calender.h"
#include <ctime>
#include <iostream>
#include <iomanip>

Calender::Calender()
{
    cout << "Calender constructor called" << endl;
}

Calender::~Calender()
{
    cout << "Calender destructor called" << endl;
}
void Calender::PrintAprilCalendar(int year)
{
    int month = 4;
    int daysInMonth = 30;

    int q = 1;
    int m = month;
    int Y = year;

    if (m < 3)
    {
        m += 12;
        Y--;
    }

    int K = Y % 100;
    int J = Y / 100;

    int dayOfWeek = (q + (13 * (m + 1)) / 5 + K + K/4 + J/4 + 5*J) % 7;
    dayOfWeek = (dayOfWeek + 6) % 7;

    cout << "April " << year << " Calendar\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int currentDay = 1;

    for (int i = 0; i < dayOfWeek; i++)
    {
        cout << "    ";
    }

    for (int i = dayOfWeek; currentDay <= daysInMonth; i++)
    {
        cout << setw(3) << currentDay << " ";
        if (i % 7 == 6) cout << endl;
        currentDay++;
    }

    cout << endl;
}

void Calender::CurrentDate()
{
    time_t t = time(0);
    tm* now = localtime(&t);
    cout << "Current date: "
         << (now->tm_mday) << "-"
         << (now->tm_mon + 1) << "-"
         << (now->tm_year + 1900) << endl;
}
