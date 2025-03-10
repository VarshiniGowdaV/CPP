#include "WIFI.h"
#include "fileoperation.h"
#include <iostream>
#include <list>

using namespace std;

enum MenuChoice
{
    ADD_WIFI = 1,
    DISPLAY_WIFI,
    SAVE_DATA,
    LOAD_DATA,
    EXIT
};

int main()
{
    list<WIFI> wifiList;
    Fileoperation fileOp;
    int choice;

    do
    {
        cout << "\n--- WiFi Management System ---\n";
        cout << "1. Add WiFi Network\n";
        cout << "2. Display WiFi Networks\n";
        cout << "3. Save Data to File\n";
        cout << "4. Load Data from File\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer

        switch (static_cast<MenuChoice>(choice))
        {
        case ADD_WIFI:
            WIFI::addWiFi(wifiList);
            break;
        case DISPLAY_WIFI:
            WIFI::displayWiFi(wifiList);
            break;
        case SAVE_DATA:
            fileOp.writeData(wifiList);
            cout << "Data saved successfully.\n";
            break;
        case LOAD_DATA:
            wifiList = fileOp.readData();
            cout << "Data loaded successfully.\n";
            break;
        case EXIT:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != EXIT);

    return 0;
}
