#include "rentmanager.h"
#include <iostream>
#include <unordered_map>
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

void Rentmanager::BookCar()
{
    carlist = file.readCarData();
    string number;
    cout << "Enter Car Number to Book: ";
    cin >> number;

    for (auto i = carlist.begin(); i != carlist.end(); i++)
    {
        if (i->getvechicalnumber() == number && i->getstatus() == "Available")
        {
            string name, idProof, phone;
            int age;

            cout << "Enter Customer Name: ";
            cin >> name;
            cout << "Enter ID Proof: ";
            cin >> idProof;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Phone Number: ";
            cin >> phone;

            CustomerDetails customerList(name, idProof, age, phone);

            i->setDetails(i->getvechicalnumber(), i->getvechicalname(), i->getmodel(), i->getrentprice(), i->getduration(), "Booked");

            cout << "Car Booked Successfully for " << name << endl;
            return;
        }
    }
    cout << "Car not available or incorrect number!" << endl;
}

void Rentmanager::BookBike()
{
    bikelist = file.readBikeData();
    string number;
    cout << "Enter Bike Number to Book: ";
    cin >> number;

    for (auto i = bikelist.begin(); i != bikelist.end(); i++)
    {
        if (i->getvechicalnumber() == number && i->getstatus() == "Available")
        {
            string name, idProof, phone;
            int age;

            cout << "Enter Customer Name: ";
            cin >> name;
            cout << "Enter ID Proof: ";
            cin >> idProof;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Phone Number: ";
            cin >> phone;

            CustomerDetails customerList(name, idProof, age, phone);

            i->setDetails(i->getvechicalnumber(), i->getvechicalname(), i->getmodel(), i->getrentprice(), i->getduration(), "Booked");

            cout << "Bike Booked Successfully for " << name << endl;
            return;
        }
    }
    cout << "Bike not available or incorrect number!" << endl;
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

void Rentmanager::displayBike()
{
    bikelist=file.readBikeData();
    for (const auto &bike : bikelist) {
        cout << "Bike: " << bike.getvechicalnumber() << " "
             << bike.getvechicalname() << " "
             << bike.getmodel() << " "
             << bike.getrentprice() << " "
             << bike.getstatus() << endl;
    }
}

void Rentmanager::displayCar()
{
    carlist=file.readCarData();
    for(const auto &car:carlist)
    {
        cout<<"Car: "<<car.getvechicalnumber() <<" "
             <<car.getvechicalname() <<" "
             <<car.getmodel() <<" "
             <<car.getrentprice() <<" "
             <<car.getstatus() <<endl;
    }
}

void Rentmanager::updateBikePrice()
{
    bikelist=file.readBikeData();
    string number;
    float newPrice;
    cout << "Enter Bike Number and New Rent Price: ";
    cin >> number >> newPrice;
    for (auto &bike : bikelist) {
        if (bike.getvechicalnumber() == number) {
            bike.setDetails(bike.getvechicalnumber(), bike.getvechicalname(), bike.getmodel(), newPrice, bike.getduration(), bike.getstatus());
            //file.writeBikeData(bikelist);
            cout << "Bike Rent Price Updated!\n";
            return;
        }
    }
    cout << "Bike not found!\n";
}
void Rentmanager::updateCarPrice()
{
    carlist=file.readCarData();
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

    for (auto i = bikelist.begin(); i != bikelist.end(); ++i)
    {
        if (i->getvechicalnumber() == vehicleNumber && i->getstatus() != "booked")
        {
            bikelist.erase(i);
            file.writeBikeData(bikelist);
            cout << "Bike deleted successfully" << endl;
            return;
        }
    }

    cout << "Bike with number " << vehicleNumber << " could not be deleted (either not found or is booked)." << endl;
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
void Rentmanager::searchBike(const std::string& vehicleNumber)
{
    bikelist=file.readBikeData();
    for (const auto& bike : bikelist)
    {
        if (bike.getvechicalnumber() == vehicleNumber)
        {
            std::cout << "Bike Found:\n";
            std::cout << "Name: " << bike.getvechicalname() << std::endl;
            std::cout << "Model: " << bike.getmodel() << std::endl;
            std::cout << "Rent Price: " << bike.getrentprice() << std::endl;
            std::cout << "Duration: " << bike.getduration() << " days" << std::endl;
            return;
        }
    }
    std::cout << "Bike with Number " << vehicleNumber << " not found" << std::endl;
}
void Rentmanager::searchCar(const std::string& vehicleNumber)
{
    carlist = file.readCarData();
    for (const auto& car : carlist) {
        if (car.getvechicalnumber() == vehicleNumber) {
            std::cout << "Car Found:\n";
            std::cout << "Model: " << car.getmodel() << std::endl;
            std::cout << "Rent Price: " << car.getrentprice() << std::endl;
            return;
        }
    }
    std::cout << "Car with ID " << vehicleNumber << " not found!" << std::endl;
}
void Rentmanager::sortbike()
{
    bikelist=file.readBikeData();
    cout << "Sorting bikes" << endl;
    for (auto i = bikelist.begin(); i != bikelist.end(); ++i)
    {
        for (auto j = i; j != bikelist.end(); ++j)
        {
            if (j->getstatus() == "available" && i->getstatus() == "booked")
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() > i->getrentprice())
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() == i->getrentprice() && j->getvechicalname() > i->getvechicalname())
            {
                iter_swap(i, j);
            }
        }
    }
}

void Rentmanager::sortcar()
{
    carlist=file.readCarData();
    cout << "Sorting cars" << endl;
    for (auto i = carlist.begin(); i != carlist.end(); ++i)
    {
        for (auto j = i; j != carlist.end(); ++j)
        {
            if (j->getstatus() == "available" && i->getstatus() == "booked")
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() > i->getrentprice())
            {
                iter_swap(i, j);
            }
            else if (i->getstatus() == j->getstatus() && j->getrentprice() == i->getrentprice() && j->getvechicalname() > i->getvechicalname())
            {
                iter_swap(i, j);
            }
        }
    }
}

void Rentmanager::alldetails()
{
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
        cout << " 7. Search Vehicle" << endl;
        cout << " 8. Sort Vehicle " <<endl;
        cout << " 9. Exit" << endl;
        cout << " Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
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
                addBike();
                break;
            case 2:
                addCar();
                break;
            case 3:
                cout << "Exit Add" << endl;
                break;
            default:
                cout << "Invalid Choice" << endl;
                break;
            }
        }
        break;
        case 2:
            cout << "\n Display Vehicles " << endl;
            displayBike();
            displayCar();
            break;
        case 3:
        {
            int updateChoice;
            cout << "\n Update Rent Price " << endl;
            cout << " 1. Update Bike Rent Price " << endl;
            cout << " 2. Update Car Rent Price " << endl;
            cout << " Enter your choice: ";
            cin >> updateChoice;
            if (updateChoice == 1)
                updateBikePrice();
            else if (updateChoice == 2)
                updateCarPrice();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 4:
        {
            int rentChoice;
            cout << "\n Rent Vehicle " << endl;
            cout << " 1. Rent a Bike " << endl;
            cout << " 2. Rent a Car " << endl;
            cout << " Enter your choice: ";
            cin >> rentChoice;
            if (rentChoice == 1)
                BookBike();
            else if (rentChoice == 2)
                BookCar();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 5:
        {
            int returnChoice;
            cout << "\n Return Vehicle " << endl;
            cout << " 1. Return a Bike " << endl;
            cout << " 2. Return a Car " << endl;
            cout << " Enter your choice: ";
            cin >> returnChoice;
            if (returnChoice == 1)
                ReturnBike();
            else if (returnChoice == 2)
                ReturnCar();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 6:
        {
            int deleteChoice;
            cout << "\n Delete Vehicle " << endl;
            cout << " 1. Delete a Bike " << endl;
            cout << " 2. Delete a Car " << endl;
            cout << " Enter your choice: ";
            cin >> deleteChoice;
            if (deleteChoice == 1)
                deleteBike();
            else if (deleteChoice == 2)
                deleteCar();
            else
                cout << "Invalid choice!" << endl;
        }
        break;
        case 7:
        {
            int searchChoice;
            std::cout << "\nSearch Vehicle " << std::endl;
            std::cout << "1. Search a Bike" << std::endl;
            std::cout << "2. Search a Car" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> searchChoice;

            std::string vehicleNumber;

            if (searchChoice == 1) {
                std::cout << "Enter Bike Number: ";
                std::cin >> vehicleNumber;
                searchBike(vehicleNumber);
            }
            else if (searchChoice == 2) {
                std::cout << "Enter Car Number: ";
                std::cin >> vehicleNumber;
                searchCar(vehicleNumber);
            }
            else {
                std::cout << "Invalid Choice!" << std::endl;
            }
        }
        break;
        case 8:
        {
            int sortChoice;
            std::cout << "\nSort Vehicle" << std::endl;
            std::cout << "1. Sort Bikes" << std::endl;
            std::cout << "2. Sort Cars" << std::endl;
            std::cout << "Enter your choice: ";
            std::cin >> sortChoice;

            switch (sortChoice) {
            case 1:
                sortbike();
                break;
            case 2:
                sortcar();
                break;
            default:
                std::cout << "Invalid choice! Please enter 1 or 2." << std::endl;
            }
            break;
        }

        case 9:
            cout << "Exiting Application..." << endl;
            return;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
}
