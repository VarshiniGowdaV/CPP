#include "rentmanager.h"
#include <iostream>
using namespace std;
Rentmanager::Rentmanager()
{
    cout<<"Rentmanager construtor called"<<endl;
}

Rentmanager::~Rentmanager()
{
    cout<<"Rentmanager destructor called"<<endl;
}

void Rentmanager::addCar()
{
    string number, name, model,duration, status;
    float price;
    cout << "Enter Car Number: ";
    cin>>number;
    cout<<"Enter car name: ";
    cin>>name;
    cout<<"Enter Model: ";
    cin>>model;
    cout<<"Enter the price: ";
    cin>>price;
    cout<<"Enter the duration: ";
    cin>>duration;
    cout<<"Enter the status: ";
    cin>>status;
    carlist.push_back(Car(number, name, model, price, duration, status));
    file.writeCarData(carlist);
}

void Rentmanager::addBike()
{
    string number, name, model,duration, status;
    float price;
    cout << "Enter Bike Number: ";
    cin>>number;
    cout<<"Enter Bike name: ";
    cin>>name;
    cout<<"Enter Model: ";
    cin>>model;
    cout<<"Enter  price: ";
    cin>>price;
    cout<<"Enter duration: ";
    cin>>duration;
    cout<<"Enter the status: ";
    cin>>status;
    bikelist.push_back(Bike(number, name, model, price, duration, status));
    file.writeBikeData(bikelist);
}
void Rentmanager::BookCar() {
    string number;
    cout << "Enter Car Number to Book: ";
    cin >> number;

    for (auto &car : carlist) {
        if (car.getvechicalnumber() == number && car.getstatus() == "Available") {
            string name, idProof, phone;
            int age;

            cout << "Enter Customer Name: ";
            cin>>name;
            cout << "Enter ID Proof: ";
            cin >> idProof;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Phone Number: ";
            cin >> phone;
            CustomerDetails customerList(name, idProof, age, phone);
            car.setDetails(car.getvechicalnumber(), car.getvechicalname(), car.getmodel(), car.getrentprice(), car.getduration(), "Booked");

            cout << "Car Booked Successfully for " << name << endl;
            return;
        }
    }
    cout << "Car not available or incorrect number!"<<endl;
}

void Rentmanager::BookBike() {
    string number;
    cout << "Enter Bike Number to Book: ";
    cin >> number;
    for (auto &bike : bikelist) {
        if (bike.getvechicalnumber() == number && bike.getstatus() == "Available") {
            string name, idProof, phone;
            int age;

            cout << "Enter Customer Name: ";
            cin>>name;
            cout << "Enter ID Proof: ";
            cin >> idProof;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Phone Number: ";
            cin >> phone;
            CustomerDetails customerList(name, idProof, age, phone);
            bike.setDetails(bike.getvechicalnumber(), bike.getvechicalname(), bike.getmodel(), bike.getrentprice(),bike.getduration(), "Booked");

            cout << "Bike Booked Successfully for " << name << endl;
            return;
        }
    }
    cout << "bike not available or incorrect number!"<<endl;
}
void Rentmanager::ReturnCar()
{
    carlist = file.readCarData();
    cout << "Car return function called" << endl;

    string vehicleNumber;
    string newstatus ;

    cout << "Enter car number to return: ";
    cin >> vehicleNumber;

    for (auto i = carlist.begin(); i != carlist.end(); i++)
    {
        if (i->getvechicalnumber() == vehicleNumber && i->getstatus() == "booked")
        {
            i->setstatus("available");
            file.writeCarData(carlist);
            cout << "Car returned successfully from the customer" << endl;
            return;
        }
    }
    cout << "Car with number " << vehicleNumber << " is not booked" << endl;
}


void Rentmanager::ReturnBike()
{
    bikelist = file.readBikeData();
    cout<<"Bike return function called"<<endl;
    string vechicalNumber;
    string newstatus;
    cout<<"Enter bike number to return: ";
    cin>>vechicalNumber;
    for(auto i=bikelist.begin();i!=bikelist.end();i++)
    {
        if(i->getvechicalnumber() == vechicalNumber && i->getstatus() == "booked")
        {
            i->setstatus("available");
            file.writeBikeData(bikelist);
            cout<<"Bike returned successfully from the customer"<<endl;
            return;
        }
    }
    cout<<"car with number "<<vechicalNumber<<"is not booked"<<endl;
}

void Rentmanager::displayOfBike() {
    for (const auto &bike : bikelist) {
        cout << "Bike: " << bike.getvechicalnumber() << " "
             << bike.getvechicalname() << " "
             << bike.getmodel() << " "
             << bike.getrentprice() << " "
             << bike.getstatus() << endl;
    }
}

void Rentmanager::displayofCar() {
    for (const auto &car : carlist) {
        cout << "Car: " << car.getvechicalnumber() << " "
             << car.getvechicalname() << " "
             << car.getmodel() << " "
             << car.getrentprice() << " "
             << car.getstatus() << endl;
    }
}


void Rentmanager::updateBikePrice()
{
    string number;
    float newPrice;
    cout << "Enter Bike Number and New Rent Price: ";
    cin >> number >> newPrice;
    for (auto &bike : bikelist) {
        if (bike.getvechicalnumber() == number) {
            bike.setDetails(bike.getvechicalnumber(), bike.getvechicalname(), bike.getmodel(), newPrice, bike.getduration(), bike.getstatus());
            cout << "Bike Rent Price Updated!\n";
            return;
        }
    }
    cout << "Bike not found!\n";
}

void Rentmanager::updateCarPrice() {
    string number;
    float newPrice;
    cout << "Enter Car Number and New Rent Price: ";
    cin >> number >> newPrice;
    for (auto &car : carlist) {
        if (car.getvechicalnumber() == number) {
            car.setDetails(car.getvechicalnumber(), car.getvechicalname(), car.getmodel(), newPrice, car.getduration(), car.getstatus());
            cout << "Car Rent Price Updated!\n";
            return;
        }
    }
    cout << "Car not found!\n";
}
void Rentmanager::deleteBike()
{
    bikelist = file.readBikeData();
    cout << "Bike Delete function called" << endl;
    string vehicleNumber;

    cout << "Enter bike number to delete: " << endl;
    cin >> vehicleNumber;

    for (auto i= bikelist.begin();i!=bikelist.end();i++)
    {
        if (i->getvechicalnumber() == vehicleNumber && i->getstatus() == "booked")
        {
            bikelist.erase(i);
            file.writeBikeData(bikelist);
            cout << "Bike deleted successfully" << endl;
            return;
        }
    }

    cout << "Bike with number " << vehicleNumber << " is not deleted" << endl;
}
void Rentmanager::deleteCar()
{
    carlist =file.readCarData();
    cout<<"Car delete function called"<<endl;
    string vehicleNumber;
    cout<<"Enter car number to delete: "<<endl;
    cin>>vehicleNumber;
    for(auto i=carlist.begin();i!=carlist.end();i++)
    {
        if(i->getvechicalnumber() == vehicleNumber && i->getstatus() == "booked")
        {
            carlist.erase(i);
            file.writeCarData(carlist);
            cout<<"Car deleted successfully"<<endl;
            return;
        }
    }
    cout<<"Car with number "<<vehicleNumber <<"is not deleted"<<endl;
}

void Rentmanager::alldetails()
{
    Rentmanager manager;
    int choice;

    while (true)
    {
        cout << "\nVehicle Rental Application" << endl;
        cout << "\n 1. Add Vehicles" << endl;
        cout << " 2. Display Vehicles" << endl;
        cout << " 3. Update Vehicle Rent Price" << endl;
        cout << " 4. Rent Vehicle" << endl;
        cout << " 5. Return Vehicle" << endl;
        cout << " 6. Delete Vehicle" << endl;
        cout << " 7. Exit" << endl;
        cout << " Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int addChoice;
            cout << "\n ADD VEHICLES " << endl;
            cout << " 1. Add Bike " << endl;
            cout << " 2. Add Car " << endl;
            cout << " 3. Exit " << endl;
            cout << " Enter your choice: ";
            cin >> addChoice;

            switch (addChoice)
            {
            case 1:
                manager.addBike();
                break;
            case 2:
                manager.addCar();
                break;
            case 3:
                cout << "Exit Add" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
                break;
            }
            break;
        case 2:
            cout << "\n Display Vehicles " << endl;
            manager.displayOfBike();
            manager.displayofCar();
            break;
        case 3:
            int updateChoice;
            cout << "\n Update Rent Price " << endl;
            cout << " 1. Update Bike Rent Price " << endl;
            cout << " 2. Update Car Rent Price " << endl;
            cout << " Enter your choice: ";
            cin >> updateChoice;
            if (updateChoice == 1)
                manager.updateBikePrice();
            else if (updateChoice == 2)
                manager.updateCarPrice();
            else
                cout << "Invalid choice!" << endl;
            break;
        case 4:
            int rentChoice;
            cout << "\n Rent Vehicle " << endl;
            cout << " 1. Rent a Bike " << endl;
            cout << " 2. Rent a Car " << endl;
            cout << " Enter your choice: ";
            cin >> rentChoice;
            if (rentChoice == 1)
                manager.BookBike();
            else if (rentChoice == 2)
                manager.BookCar();
            else
                cout << "Invalid choice!" << endl;
            break;
        case 5:
            int returnChoice;
            cout << "\n Return Vehicle " << endl;
            cout << " 1. Return a Bike " << endl;
            cout << " 2. Return a Car " << endl;
            cout << " Enter your choice: ";
            cin >> returnChoice;
            if (returnChoice == 1)
                manager.ReturnBike();
            else if (returnChoice == 2)
                manager.ReturnCar();
            else
                cout << "Invalid choice!" << endl;
            break;
        case 6:
            int deleteChoice;
            cout << "\n Delete Vehicle " << endl;
            cout << " 1. Delete a Bike " << endl;
            cout << " 2. Delete a Car " << endl;
            cout << " Enter your choice: ";
            cin >> deleteChoice;
            if (deleteChoice == 1)
                manager.deleteBike();
            else if (deleteChoice == 2)
                manager.deleteCar();
            else
                cout << "Invalid choice!" << endl;
            break;
        case 7:
            cout << "Exiting Application..." << endl;
            return;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
}
