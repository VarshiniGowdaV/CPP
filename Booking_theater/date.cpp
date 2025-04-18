#include "Date.h"

Date::Date(std::string day, std::string month, std::string year)
{
    m_day=day;
    m_month=month;
    m_year=year;
}

Date::Date(std::string dateStr)
{
    m_dateStr=dateStr;
}

Date::~Date() {
    std::cout << "Date destroyed: " << m_dateStr << std::endl;
}

std::string Date::getDateStr() const {
    return m_dateStr;
}

bool Date::operator==(const Date& other) const {
    return m_dateStr == other.m_dateStr;
}

std::ostream& operator<<(std::ostream& os, const Date& dt) {
    os << dt.m_dateStr;
    return os;
}
