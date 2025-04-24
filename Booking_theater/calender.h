#ifndef CALENDAR_H
#define CALENDAR_H

#include "Date.h"
#include "theatermanager.h"
#include <string>

class Calendar {
    int currentMonth;
    int currentYear;
    TheatreManager* manager;
public:
    Calendar(TheatreManager* mgr);
    void showCalendar() const;
    void nextMonth();
    void prevMonth();
};

#endif
