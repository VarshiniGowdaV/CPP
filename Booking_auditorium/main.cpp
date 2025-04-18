#include "TheaterManager.h"
#include "Date.h"
#include <iostream>

int main() {
    TheaterManager manager;
    int choice;

    do {
        std::cout << "\nTheater Management System\n";
        std::cout << "1. Book a Theater\n";
        std::cout << "2. View Bookings on Date\n";
        std::cout << "3. Show Available Theaters\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            manager.getCalendar().printApril();
            manager.getCalendar().showCurrentDate();

            int day;
            std::cout << "Enter day of April (1-30): ";
            std::cin >> day;
            int id;
            std::cout << "Enter Theater ID (1-10): ";
            std::cin >> id;

            Date date(day, 4, 2025);
            manager.bookTheater(id, date);

        } else if (choice == 2) {
            int day;
            std::cout << "Enter day of April: ";
            std::cin >> day;
            manager.showBookings(Date(day, 4, 2025));

        } else if (choice == 3) {
            int day;
            std::cout << "Enter day of April: ";
            std::cin >> day;
            manager.printAvailableTheaters(day);

        } else if (choice != 4) {
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
