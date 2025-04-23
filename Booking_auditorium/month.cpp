
#include "Month.h"
#include <iostream>
#include <iomanip>

Month::Month(int monthNumber, int year) : m_monthNumber(monthNumber), m_year(year) {
    int daysInMonth = 30;
    for (int i = 1; i <= daysInMonth; ++i) {
        m_dates.emplace_back(i, monthNumber, year);
    }
}

std::vector<Date>& Month::getDates() {
    return m_dates;
}

void Month::printMonthCalendar() {
    std::cout << "\nApril " << m_year << " Calendar\n";
    std::cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int q = 1, m = m_monthNumber, Y = m_year;
    if (m < 3) { m += 12; Y--; }
    int K = Y % 100;
    int J = Y / 100;
    int dayOfWeek = (q + (13 * (m + 1)) / 5 + K + K/4 + J/4 + 5*J) % 7;
    dayOfWeek = (dayOfWeek + 6) % 7;

    for (int i = 0; i < dayOfWeek; i++) std::cout << "    ";
    for (int d = 1; d <= 30; d++) {
        std::cout << std::setw(3) << d << " ";
        if ((dayOfWeek + d - 1) % 7 == 6) std::cout << "\n";
    }
    std::cout << std::endl;
}
