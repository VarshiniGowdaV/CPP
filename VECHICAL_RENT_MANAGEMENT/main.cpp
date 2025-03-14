#include <iostream>
#include "rentmanager.h"
using namespace std;

void displayMenu()
{
    cout << "\nVehicle Rental System" << endl;
    cout << "1. Add Car" << endl;
    cout << "2. Add Bike" << endl;
    cout << "3. Book a Car" << endl;
    cout << "4. Book a Bike" << endl;
    cout << "5. Return a Car" << endl;
    cout << "6. Return a Bike" << endl;
    cout << "7. Display Vehicles" << endl;
    cout << "8. Exit" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    RentManager manager;
    int choice;
    do
    {
        displayMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            manager.addCar();
            break;
        case 2:
            manager.addBike();
            break;
        case 3:
            manager.BookCar();
            break;
        case 4:
            manager.BookBike();
            break;
        case 5:
            int carID;
            cout << "Enter Car ID to return: ";
            cin >> carID;
            manager.ReturnCar(carID);
            break;
        case 6:
            int bikeID;
            cout << "Enter Bike ID to return: ";
            cin >> bikeID;
            manager.ReturnBike(bikeID);
            break;
        case 7:
            manager.DisplayRent();
            break;
        case 8:
            cout << "Exiting system..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}
