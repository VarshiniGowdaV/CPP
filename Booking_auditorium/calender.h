#ifndef CALENDAR_H
#define CALENDAR_H

#include "Year.h"
#include <iostream>

class Calendar {
private:
    Year m_year;

public:
    Calendar(int year = 2025);
    void printApril();
    void showCurrentDate();
};

#endif
