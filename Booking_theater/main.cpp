#include <iostream>
#include <regex>
#include "TheaterManager.h"
#include "calender.h"
#include "Date.h"

bool isValidDateFormat(const std::string& dateStr)
{
    std::regex datePattern(R"(\d{2}-\d{2}-\d{4})");
    return std::regex_match(dateStr, datePattern);
}

int main()
{
    TheaterManager manager;
    Calendar calendar(&manager);
    std::string input;

    std::string dateStr, theatreId;

    while (true)
    {
        std::cout << "\nMenu:\n1. Show Calendar\n2. Book Theatre\n3. Check Bookings\n4. <- Previous Month\n5. -> Next Month\n6. Exit\nEnter choice: ";
        std::cin >> input;

        if (input == "1")
        {
            calendar.showCalendar();
        }
        else if (input == "2")
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateStr;
            if (!isValidDateFormat(dateStr))
            {
                std::cout << "Invalid date format.\n";
                continue;
            }

            int d = std::stoi(dateStr.substr(0, 2));
            int m = std::stoi(dateStr.substr(3, 2));
            int y = std::stoi(dateStr.substr(6, 4));
            Date date(d, m, y);

            if (!date.isValid() || date.isPast())
            {
                std::cout << "Invalid or past date.\n";
                continue;
            }

            std::cout << "Enter theatre ID: ";
            std::cin >> theatreId;
            if (!manager.isAvailable(dateStr, theatreId))
            {
                std::cout << "Theatre already booked.\n";
            }
            else
            {
                manager.bookTheater(dateStr, theatreId);
                std::cout << "Booking successful!\n";
            }
            if (!date.isValid() || date.isPast())
            {
                std::cout << "Invalid or past date.\n";
                continue;
            }
        }
        else if (input == "3")
        {
            std::cout << "Enter date (DD-MM-YYYY): ";
            std::cin >> dateStr;

            if (!isValidDateFormat(dateStr))
            {
                std::cout << "Invalid date format.\n";
                continue;
            }

            int d = std::stoi(dateStr.substr(0, 2));
            int m = std::stoi(dateStr.substr(3, 2));
            int y = std::stoi(dateStr.substr(6, 4));
            Date date(d, m, y);

            if (!date.isValid() || date.isPast())
            {
                std::cout << "Invalid or past date.\n";
                continue;
            }

            auto booked = manager.getBookedTheatres(dateStr);
            std::cout << "Booked theatres on " << dateStr << ":\n";
            for (const auto& t : booked)
            {
                std::cout << "- " << t << "\n";
            }
        }
        else if (input == "4")
        {
            calendar.prevMonth();
        }
        else if (input == "5")
        {
            calendar.nextMonth();
        }
        else if (input == "6")
        {
            std::cout << "Exiting...\n";
            break;
        }
        else
        {
            std::cout << "Invalid input.\n";
        }
    }

    return 0;
}// #include <iostream>
// #include <regex>
// #include "theatermanager.h"
// #include "calender.h"
// #include <iostream>
// using namespace std;

// bool isValidDateFormat(const std::string& dateStr) {
//     std::regex datePattern(R"(\d{2}-\d{2}-\d{4})");
//     return std::regex_match(dateStr, datePattern);
// }

// int main() {
//     TheaterManager manager;
//     Calendar calendar(&manager);
//     calendar.showCalendar();

//     int choice;
//     std::string dateStr, theatreId;

//     while (true)
//     {
//         cout<<endl;
//         cout<<"Select the choice"<<endl;
//         cout<<"1. <- Previous month"<<endl;
//         cout<<"2. -> Next month"<<endl;
//         cout<<"3. Show Calender"<<endl;
//         cout<<"4. Book Theatre"<<endl;
//         cout<<"5. Check Bookings"<<endl;
//         cout<<"6. Exit"<<endl;

//         cin >> choice;
//         switch(choice)
//         {
//         case 1:
//         {
//             calendar.prevMonth();
//             break;
//         }
//         case 2:
//         {
//             calendar.nextMonth();
//             break;
//         }
//         case 3:
//         {
//             calendar.showCalendar();
//             break;
//         }
//         case 4:
//         {
//             std::cout << "Enter date (DD-MM-YYYY): ";
//             std::cin >> dateStr;
//             if (!isValidDateFormat(dateStr)) {
//                 std::cout << "Invalid date format.\n";
//                 continue;
//             }

//             int d = std::stoi(dateStr.substr(0, 2));
//             int m = std::stoi(dateStr.substr(3, 2));
//             int y = std::stoi(dateStr.substr(6, 4));
//             Date date(d, m, y);

//             if (!date.isValid() || date.isPast()) {
//                 std::cout << "Invalid or past date.\n";
//                 continue;
//             }

//             std::cout << "Enter theatre ID: ";
//             std::cin >> theatreId;
//             if (!manager.isAvailable(dateStr, theatreId)) {
//                 std::cout << "Theatre already booked.\n";
//             } else {
//                 manager.bookTheater(dateStr, theatreId);
//                 std::cout << "Booking successful!\n";
//             }
//             break;
//         }

//         case 5:
//         {
//             std::cout << "Enter date (DD-MM-YYYY): ";
//             std::cin >> dateStr;

//             if (!isValidDateFormat(dateStr)) {
//                 std::cout << "Invalid date format.\n";
//                 continue;
//             }

//             auto booked = manager.getBookedTheatres(dateStr);
//             std::cout << "Booked theatres on " << dateStr << ":\n";
//             for (const auto& t : booked)
//             {
//                 std::cout<<"Theatre id: "<<t<<endl;
//             }
//             break;
//         }
//         case 6:
//         {
//             exit(0);
//         }
//         default:
//         {
//             cout<<"invalid choice enter valid choice"<<endl;
//         }
//         }
//     }
//     return 0;
// }
