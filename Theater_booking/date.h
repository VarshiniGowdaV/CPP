#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
private:
    string m_date;
    string m_month;
    string m_year;

public:
    Date(string date, string month, string year);
    Date();
    ~Date();

    string getDate();
    string getMonth();
    string getYear();

    void setDate(string date);
    void setMonth(string month);
    void setYear(string year);
};

#endif // DATE_H
