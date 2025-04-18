#ifndef THEATER_H
#define THEATER_H

#include <iostream>
#include <vector>
class Theater {
private:
    int m_id;
std::vector<int> bookedDays;
public:
    Theater(int id = -1);
    ~Theater();

    int getId() const;
    void setId(int id);

    void bookDay(int day);
    bool isBooked(int day) const;
    friend std::ostream& operator<<(std::ostream& os, const Theater& t);
};

#endif
