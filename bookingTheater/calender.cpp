#include "calender.h"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <conio.h>
using namespace std;
Calender::Calender()
{
    cout<<"Calender constructor called"<<endl;
}
Calender::~Calender()
{
    cout<<"Calender destructor called"<<endl;
}
bool Calender::isLeapYear(int year)const
{
    return (year % 4== 0 && year % 100 !=0) || (year % 400 == 0);
}
int Calender::getDaysInMonth(int month,int year) const
{
    switch(month)
    {
    case 2: return isLeapYear(year) ? 29 :28;
    case 4: case 6:case 9:case 11: return 30;
    default:return 31;
    }
}
int Calender::getStartDay(int month,int year)const
{
    tm firstDay = {};
    firstDay.tm_mday=1;
    firstDay.tm_mon = month -1;
    firstDay.tm_year =year -1900;
    mktime(&firstDay);
    return firstDay.tm_wday;
}
void Calender::displayCalender(int month,int year)const
{
    static const char* monthNames[] =
    {
        "", "January", "February", "March", "April", "May", "June",
         "July", "August", "September", "October", "November", "December"

    };
    int startDay =getStartDay(month,year);
    int totalDays =getDaysInMonth(month,year);

    cout<<"\n "<<monthNames[month] <<" "<< year <<"\n";
    cout<<"Sun   Mon  Tue  Wed Thu  Fri  Sat\n";

    for(int i=0;i<startDay;++i)
    {
        cout<<"  ";
    }
    for(int i=0;i< startDay;i++)
    {
        cout<<"  ";
    }
    for(int day = 1;day<=totalDays;++day)
    {
        cout<<setw(4)<<day;
        if((day + startDay) % 7==0)
            cout<<"\n";
    }
    cout<<"\n\n < Previous Month       > NextMonth       ESC to Exit\n";
}
void Calender::run()
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    int month =localTime->tm_mon + 1;
    int year = localTime->tm_year +1900;
    char ch;

    do {
        system("cls");
        displayCalender(month, year);

        ch = _getch();
        if (ch == 0 || ch == -32) {
            ch = _getch();
            if (ch == 75) {
                --month;
                if (month < 1) {
                    month = 12;
                    --year;
                }
            } else if (ch == 77) {
                ++month;
                if (month > 12) {
                    month = 1;
                    ++year;
                }
            }
        }
    } while (ch != 27);
}
void Calender::displayCurrentDate() const
{
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    int day =localTime->tm_mday;
    int month = localTime->tm_mon + 1;
    int year = localTime->tm_year + 1900;

    cout<<"Current date: "<<setw(2) << setfill('0') << day <<"-"
         <<setw(2) << setfill('0') <<month <<"-"<<year<<endl<<endl;
}
