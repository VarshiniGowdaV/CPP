
#include "Date.h"
#include <iomanip>
#include <sstream>

Date::Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year) {}

std::string Date::toString() const {
    std::ostringstream oss;
    oss << std::setw(2) << std::setfill('0') << m_day << "-"
        << std::setw(2) << std::setfill('0') << m_month << "-"
        << m_year;
    return oss.str();
}

int Date::getDay() const { return m_day; }
int Date::getMonth() const { return m_month; }
int Date::getYear() const { return m_year; }

bool Date::operator==(const Date& other) const {
    return m_day == other.m_day && m_month == other.m_month && m_year == other.m_year;
}

std::ostream& operator<<(std::ostream& os, const Date& dt) {
    os << dt.toString();
    return os;
}
