#include "Theater.h"
#include <algorithm>

Theater::Theater(int id) : m_id(id) {}

int Theater::getId() const {
    return m_id;
}

void Theater::bookDay(int day) {
    if (!isBooked(day)) {
        bookedDays.push_back(day);
    }
}

bool Theater::isBooked(int day) const {
    return std::find(bookedDays.begin(), bookedDays.end(), day) != bookedDays.end();
}

std::ostream& operator<<(std::ostream& os, const Theater& t) {
    os << "Theater ID: " << t.m_id << "\nBooked Days: ";
    if (t.bookedDays.empty()) {
        os << "None";
    } else {
        for (int d : t.bookedDays) {
            os << d << " ";
        }
    }
    return os;
}
