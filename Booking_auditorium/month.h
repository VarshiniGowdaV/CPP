
#ifndef MONTH_H
#define MONTH_H

#include "Date.h"
#include <vector>

class Month {
private:
    int m_monthNumber;
    int m_year;
    std::vector<Date> m_dates;

public:
    Month(int monthNumber = 4, int year = 2025);
    std::vector<Date>& getDates();
    void printMonthCalendar();
};

#endif
