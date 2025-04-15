#include <iostream>
#include <vector>
#include "calender.h"
#include "theatermanager.h"
using namespace std;

int main()
{
    Calender calender;
    calender.PrintAprilCalendar(2025);
    calender.CurrentDate();

    vector<Theater> m_theaterlist;
    for(int i = 0; i < 10; ++i)
    {
        m_theaterlist.push_back(Theater(i));
    }

    TheaterManager manager;

    int choice;
    do {
        cout << "\n--- Theater Booking System ---\n";
        cout << "1. Book a Theater\n";
        cout << "2. Check Booking Status on a Date\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int id, day;
            cout << "Enter Theater ID (0 - 9): ";
            cin >> id;
            cout << "Enter Date in April (1 - 30): ";
            cin >> day;

            manager.bookTheater(m_theaterlist, id, day);

        } else if (choice == 2) {
            int day;
            cout << "Enter Date in April (1 - 30) to check status: ";
            cin >> day;

            manager.printStatus(m_theaterlist, day);
        }

    } while (choice != 3);

    return 0;
}
