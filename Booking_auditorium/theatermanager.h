
#ifndef THEATERMANAGER_H
#define THEATERMANAGER_H

#include "Calender.h"
#include "Theater.h"
#include "Date.h"
#include <map>
#include <vector>

class TheaterManager {
private:
    std::map<int, Theater> m_theaters;
    std::map<std::string, std::vector<int>> m_dateBookings;
    Calendar m_calendar;

public:
    TheaterManager();
    bool bookTheater(int id, const Date& date);
    void showBookings(const Date& date) const;
    void printAvailableTheaters(int day) const;
    std::map<int, Theater>& getTheaters();
    Calendar& getCalendar();
};

#endif
