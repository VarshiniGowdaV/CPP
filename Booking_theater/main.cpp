#include "calender.h"
#include "Date.h"
#include "TheaterManager.h"
#include "Theater.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {
    Calender calender;
    TheaterManager manager;
    int choice;
    do {
        cout << "\nTheater Management System\n";
        cout << "1. Book a Theater\n";
        cout << "2. View Bookings on Date\n";
        cout << "3. Show All Available Theaters on a Day\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            calender.PrintAprilCalendar(2025);
            calender.CurrentDate();

            string dateStr;
            int id;
            cout << "Enter date (DD-MM-YYYY): ";
            cin >> dateStr;
            cout << "Enter Theater ID (1-10): ";
            cin >> id;

            calender.showDate(dateStr);
            bool success = manager.bookTheater(id, dateStr);
            if (success) {
                int day = stoi(dateStr.substr(0, 2));
                vector<Theater>& theaters = manager.getTheaterList();
                for (auto& t : theaters) {
                    if (t.getId() == id) {
                        t.bookDay(day);
                        break;
                    }
                }
            }
        } else if (choice == 2) {
            calender.PrintAprilCalendar(2025);
            calender.CurrentDate();

            string dateStr;
            cout << "Enter date to check bookings (DD-MM-YYYY): ";
            cin >> dateStr;
            manager.showBookings(dateStr);
        } else if (choice == 3) {
            calender.PrintAprilCalendar(2025);
            calender.CurrentDate();

            int day;
            cout << "Enter day of April to check availability: ";
            cin >> day;
            manager.printStatus(manager.getTheaterList(), day);
        } else if (choice != 4) {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
