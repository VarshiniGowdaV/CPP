#include "theater.h"

Theater::Theater(int id):m_id(id)
{
    for(int i=1;i<31;i++)
    {
        booked[i] = false;
    }
    cout<<"Theater constructor called"<<endl;
}
Theater::Theater()
{
    cout<<"Theater default constructor called"<<endl;
}
Theater::~Theater()
{
    cout<<"Theater destructor called"<<endl;
}
int Theater::getId()
{
    return m_id;
}
void Theater::setId(int id)
{
    m_id=id;
}
bool Theater::book(int day)
{
    if (day < 1 || day > 30 || booked[day])
        return false;
    booked[day] = true;
    return true;
}

bool Theater::isBooked(int day)
{
    if (day < 1 || day > 30)
        return false;
    return booked[day];
}
