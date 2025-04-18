#include "date.h"

Date::Date()
{
   cout<<"Date constructor called"<<endl;
}
Date::Date(string date, string month, string year)
{
    m_date=date;
    m_month=month;
    m_year=year;
}
Date::~Date()
{
    cout<<"Date destructor called"<<endl;
}
string Date::getDate()
{
    return m_date;
}
string Date::getMonth()
{
    return m_month;
}
string Date::getYear()
{
    return m_year;
}
void Date::setDate(string date)
{
    m_date=date;
}
void Date::setMonth(string month)
{
    m_month=month;
}
void Date::setYear(string year)
{
    m_year=year;
}
