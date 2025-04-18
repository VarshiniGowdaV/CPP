#include "theatermanager.h"

TheaterManager::TheaterManager()
{
    cout<<"TheaterManager constructor called"<<endl;
}
TheaterManager::~TheaterManager()
{
    cout<<"TheaterManager destructor called"<<endl;
}
bool TheaterManager::bookTheater(vector<Theater>& m_theaterlist, int id, int day)
{
    if (id < 0 || id >= m_theaterlist.size())
    {
        cout << "Invalid theater ID.\n";
        return false;
    }
    if (m_theaterlist[id].book(day))
    {
        cout << "Theater " << id << " successfully booked for April " << day << ".\n";
        return true;
    }
    else
    {
        cout << "Theater " << id << " is already booked for April " << day << ".\n";
        return false;
    }
}

void TheaterManager::printStatus(vector<Theater> &m_theaterlist, int day)
{
    cout<<"Available Theaters on April "<<day<<":\n";
    for(auto& t : m_theaterlist)
    {
        if(!t.isBooked(day))
        {
            cout<<"Theater "<<t.getId() <<":Available\n";
        }
    }
}
