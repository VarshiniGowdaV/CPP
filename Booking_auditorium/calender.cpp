
#include "Calender.h"
#include <ctime>

Calendar::Calendar(int year) : m_year(year) {}

void Calendar::printApril() {
    m_year.getApril().printMonthCalendar();
}

void Calendar::showCurrentDate() {
    time_t t = time(0);
    tm* now = localtime(&t);
    std::cout << "Current date: "
              << now->tm_mday << "-"
              << (now->tm_mon + 1) << "-"
              << (now->tm_year + 1900) << std::endl;
}
