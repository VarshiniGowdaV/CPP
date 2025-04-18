#ifndef THEATER_H
#define THEATER_H
#include <iostream>
using namespace std;
class Theater
{
private:
    int m_id;
    bool booked[31];
public:
    Theater(int id);
    Theater();
    ~Theater();

    int getId();
    void setId(int m_id);

    bool book(int day);
    bool isBooked(int day);

};

#endif // THEATER_H
