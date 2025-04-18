#include "TheaterManager.h"
#include <iostream>
#include <algorithm>

TheaterManager::TheaterManager() : m_calendar(2025) {
    for (int i = 1; i <= 10; ++i) {
        m_theaters[i] = Theater(i);
    }
}

bool TheaterManager::bookTheater(int id, const Date& date) {
    if (id < 1 || id > 10) return false;

    std::string dateStr = date.toString();
    auto& bookings = m_dateBookings[dateStr];
    if (std::find(bookings.begin(), bookings.end(), id) != bookings.end()) {
        std::cout << "Theater already booked on " << dateStr << std::endl;
        return false;
    }

    bookings.push_back(id);
    m_theaters[id].bookDay(date.getDay());
    std::cout << "Booked Theater ID " << id << " on " << dateStr << std::endl;
    return true;
}

void TheaterManager::showBookings(const Date& date) const {
    auto it = m_dateBookings.find(date.toString());
    if (it != m_dateBookings.end()) {
        std::cout << "Bookings on " << date.toString() << ":\n";
        for (int id : it->second) std::cout << "  Theater ID: " << id << std::endl;
    } else {
        std::cout << "No bookings on " << date.toString() << ".\n";
    }
}

void TheaterManager::printAvailableTheaters(int day) const {
    std::cout << "Available Theaters on April " << day << ":\n";
    for (const auto& pair : m_theaters) {
        if (!pair.second.isBooked(day)) {
            std::cout << "  Theater ID: " << pair.first << " is available\n";
        }
    }
}

std::map<int, Theater>& TheaterManager::getTheaters() {
    return m_theaters;
}

Calendar& TheaterManager::getCalendar() {
    return m_calendar;
}
