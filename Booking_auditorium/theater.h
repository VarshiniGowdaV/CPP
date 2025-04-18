#ifndef THEATER_H
#define THEATER_H

#include <vector>
#include <iostream>

class Theater {
private:
    int m_id;
    std::vector<int> bookedDays;

public:
    Theater(int id = -1);
    int getId() const;
    void bookDay(int day);
    bool isBooked(int day) const;
    friend std::ostream& operator<<(std::ostream& os, const Theater& t);
};

#endif
