#ifndef THEATERMANAGER_H
#define THEATERMANAGER_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include "theater.h"

class TheaterManager {
private:
    std::map<int, Theater> m_theaters;
    std::map<std::string, std::vector<int>> m_dateBookings;

public:
    TheaterManager();
    ~TheaterManager();

    std::map<int, Theater>& getTheaterList();
    bool bookTheater(int id, const std::string& dateStr);
    void showBookings(const std::string& dateStr) const;
    void printStatus(std::vector<Theater>& m_theaterlist, int day);
};

#endif // THEATERMANAGER_H
