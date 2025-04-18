#include "TheaterManager.h"
#include <iostream>
using namespace std;
TheaterManager::TheaterManager()
{
    cout<<"Theater manager constructor called"<<endl;
}
TheaterManager::~TheaterManager()
{
    cout<<"Theater manager destructor called"<<endl;
}
std::map<int, Theater>& TheaterManager::getTheaterList()
{
    return m_theaters;
}

bool TheaterManager::bookTheater(int id, const std::string& dateStr) {
    if (id < 1 || id > 10) {
        cout << "Theater ID is invalid (1-10).\n";
        return false;
    }

    try {
        int date = stoi(dateStr);
        if (date < 1 || date > 30) {
            cout << "Date is invalid (1-30).\n";
            return false;
        }
    } catch (invalid_argument& e) {
        cout << "Invalid date format. Please enter correct number (1-30).\n";
        return false;
    }

    if (m_theaters.find(id) == m_theaters.end()) {
        cout << "Invalid Theater Id.\n";
        return false;
    }

    auto& bookedList = m_dateBookings[dateStr];
    if (find(bookedList.begin(), bookedList.end(), id) != bookedList.end()) {
        cout << "Theater already booked for this date.\n";
        return false;
    }

    bookedList.push_back(id);
    cout << "Booked Theater ID " << id << " on " << dateStr << "\n";
    return true;
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
void TheaterManager::showBookings(const std::string& dateStr) const {
    auto it = m_dateBookings.find(dateStr);
    if (it != m_dateBookings.end()) {
        cout << "Booked Theaters on " << dateStr << ":\n";
        for (int id : it->second) {
            cout << "Theater ID: " << id << endl;
        }
    } else {
        cout << "No bookings found on " << dateStr << ".\n";
    }
}
