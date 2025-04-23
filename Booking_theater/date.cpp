#include "date.h"
#include <iomanip>
#include <sstream>
#include <iostream>
#include <regex>
#include <ctime>
using namespace std;

Date::Date(int day, int month, int year)
{
    m_day=day;
    m_month=month;
    m_year=year;
    //cout << "Date constructor called" << endl;
}

Date::Date(const std::string& dateStr)
{
    std::istringstream iss(dateStr);
    char sep1, sep2;
    int d, m, y;
    iss >> d >> sep1 >> m >> sep2 >> y;

    if (sep1 == '-' && sep2 == '-' && isValidDate(d, m, y))
    {
        m_day = d;
        m_month = m;
        m_year = y;
    }
    else
    {
        m_day = m_month = m_year = 0;
        cout << "Invalid date in constructor from string." << endl;
    }
}

Date::~Date()
{
    cout << "Date destructor called" << endl;
}

bool Date::isValidFormat(const std::string& dateStr)
{
    std::regex datePattern("^\\d{2}-\\d{2}-\\d{4}$");
    return std::regex_match(dateStr, datePattern);
}

bool Date::isValidDate(int day, int month, int year)
{
    if (year < 1900 || month < 1 || month > 12 || day < 1)
        return false;

    int daysInMonth[] = {
        31,
        (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28,
        31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    return day <= daysInMonth[month - 1];
}

Date Date::fromString(const std::string& dateStr)
{
    if (!isValidFormat(dateStr))
    {
        cout << "Invalid date format. Please use DD-MM-YYYY." << endl;
        return Date(0, 0, 0);
    }

    std::istringstream iss(dateStr);
    int d, m, y;
    char sep1, sep2;
    iss >> d >> sep1 >> m >> sep2 >> y;

    if (!isValidDate(d, m, y))
    {
        cout << "Invalid calendar date." << endl;
        return Date(0, 0, 0);
    }

    return Date(d, m, y);
}
std::string Date::toString() const
{
        return std::to_string(m_day) + "-" + std::to_string(m_month) + "-" + std::to_string(m_year);
    }


int Date::getDay() const
{
    return m_day;
}
int Date::getMonth() const
{
    return m_month;
}
int Date::getYear() const
{
    return m_year;
}

Date Date::getCurrentDate()
{
        // Fetch the current date without invoking the constructor message
        time_t now = time(nullptr);
        tm* localTime = localtime(&now);
        return Date(localTime->tm_mday, localTime->tm_mon + 1, localTime->tm_year + 1900);
}
std::ostream& operator<<(std::ostream& os, const Date& dt)
{
    os << dt.toString();
    return os;
}

bool Date::operator<(const Date& other) const
{
    if (m_year != other.m_year)
        return m_year < other.m_year;
    if (m_month != other.m_month)
        return m_month < other.m_month;
    return m_day < other.m_day;
}
