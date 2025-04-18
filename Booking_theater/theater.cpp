#include "Theater.h"
#include <iostream>
using namespace std;
Theater::Theater(int id) {
    m_id=id;
    cout<<"Theater parameter constructor called"<<endl;
}

Theater::~Theater()
{
    cout<<"Theater destructor called"<<endl;
}

int Theater::getId() const {
    return m_id;
}

void Theater::setId(int id) {
    m_id = id;
}
void Theater::bookDay(int day) {
    bookedDays.push_back(day);
}

bool Theater::isBooked(int day) const {
    for (int d : bookedDays) {
        if (d == day) return true;
    }
    return false;
}
std::ostream& operator<<(std::ostream& os, const Theater& t) {
    os << "Theater ID: " << t.m_id;
    return os;
}
