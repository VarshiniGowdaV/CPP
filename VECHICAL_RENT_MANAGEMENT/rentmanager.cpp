#include "rentmanager.h"
#include <iostream>
#include "vechical.h"
#include "bike.h"
#include "car.h"
using namespace std;
RentManager::RentManager()
{
    cout<<"Rentmanager constructor called"<<endl;
}
RentManager::~RentManager()
{
    cout<<"Rentmanager destructor called"<<endl;
}
void RentManager::addCar()
{
    Car newCar;
    newCar.inputCarDetails();
    cars.push_back(newCar);
    cout<<"Car added Successfully!"<<endl;
}
void RentManager::addBike()
{
    Bike newBike;
    newBike.inputBikeDetails();
    bikes.push_back(newBike);
    cout<<"Bike added Successfully!"<<endl;
}
void RentManager::BookBike()
{
    int bikeID;
    cout << "Enter Bike ID to book: ";
    cin >> bikeID;

    for (auto &b : bikes)
    {
        if (b.getVechicalNumber() == bikeID && !b.isBookedBike())
        {
            b.bookBike();
            cout << "Bike booked successfully!" << endl;
            return;
        }
    }
    cout << "Bike not available !" << endl;
}


void RentManager::BookCar()
{
    int carID;
    cout << "Enter Car ID to book: ";
    cin >> carID;

    for (auto &c : cars)
    {
        if (c.getVechicalNum() == carID && !c.isbookedCar())
        {
            c.bookCar();
            cout << "Car booked successfully!" << endl;
            return;
        }
    }
    cout << "Car not available!" << endl;
}



void RentManager::ReturnBike(int vechical_number)
{
    for (Bike &bike : bikes)
    {
        if (bike.getVechicalNumber() == vechical_number)
        {
            if (bike.isBookedBike())
            {
                bike.returnBike();
                cout << "Bike with Vehicle Number " << vechical_number << " has been returned successfully." << endl;
            }
            else
            {
                cout << "Bike with Vehicle Number " << vechical_number << " is already available." << endl;
            }
            return;
        }
    }
    cout << "Bike with Vehicle Number " << vechical_number << " not found in the system." << endl;
}
void RentManager::ReturnCar(int vehicle_num)
{
    for (auto& car : cars)
    {
        if (car.getVechicalNum() == vehicle_num)
        {
            if (car.isbookedCar())
            {
                car.returnCar();
                cout << "Car with vehicle number " << vehicle_num << " has been returned successfully." << endl;
            }
            else
            {
                cout << "Car with vehicle number " << vehicle_num << " is already available." << endl;
            }
            return;
        }
    }
    cout << "Car with vehicle number " << vehicle_num << " not found in the system." << endl;
}
void RentManager::DisplayRent()
{
    cout<<"List of Cars: "<<endl;
    for(const auto &c : cars)
    {
        c.DisplayCarDetails();
    }
    cout<<"List of Bikes: "<<endl;
    for(const auto &b : bikes)
    {
        b.DisplayBikeDetails();
    }
}
