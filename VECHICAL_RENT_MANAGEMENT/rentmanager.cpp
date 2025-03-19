#include "rentmanager.h"
#include <iostream>
#include "vechical.h"
#include "custamerdetails.h"
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
    carlist.push_back(newCar);
    file.writeCarData(carlist);
    file.writeCustamerDetails(custamerdetails);
    file.readCarData();
    //file.readCustamerData();
    cout<<"Car added Successfully!"<<endl;
}
void RentManager::addBike()
{
    Bike newBike;
    newBike.inputBikeDetails();
    bikelist.push_back(newBike);
    file.writeBikeData(bikelist);
    file.writeCustamerDetails(custamerdetails);
    cout<<"Bike added Successfully!"<<endl;
}
void RentManager::BookBike()
{
    int bikeID;
    cout << "Enter Bike ID to book: ";
    cin >> bikeID;

    for (auto &bike : bikelist)
    {
        if (bike.getVechicalNumber() == bikeID && !bike.isBookedBike())
        {
            bike.bookBike();
            cout << "Bike booked successfully!" << endl;

            string name, idProof, phnum;
            int age;

            cout << "Enter Customer Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter ID Proof: ";
            getline(cin, idProof);

            cout << "Enter Age: ";
            cin >> age;

            cout << "Enter Phone Number: ";
            cin >> phnum;

            CustomerDetails customer;
            customer.setCustomerDetails(name, idProof, age, phnum);

          custamerdetails.push_back(customer);
            cout << "Customer details saved successfully!" << endl;
            return;
        }
    }
    cout << "Bike not available!" << endl;
}


void RentManager::BookCar()
{
    int carID;
    cout << "Enter Car ID to book: ";
    cin >> carID;

    for (auto &car : carlist)
    {
        if (car.getVechicalNumber() == carID && !car.isbookedCar())
        {
           car.bookCar();
            cout<<"Car booked successfully!"<<endl;

           string name,idproof,phnum;
            int age ;

           cout<<"Enter customer name: ";
            cin.ignore();
           getline(cin,name);

           cout<<"Enter ID proof: ";
           getline(cin,idproof);

           cout<<"Enter Age: ";
           cin>>age;

           cout<<"Enter phone number: ";
           cin>>phnum;

           CustomerDetails customer;
           customer.setCustomerDetails(name,idproof,age,phnum);

           custamerdetails.push_back(customer);
           cout<<"Customer details saved successfully!"<<endl;
           return;

        }
    }
    cout << "Car not available!" << endl;
}

void RentManager::ReturnBike(int vehicle_number)
{
    for (Bike &bike : bikelist)
    {
        if (bike.getVechicalNumber() == vehicle_number)
        {
            if (bike.isBookedBike())
            {
                CustomerDetails customer = bike.getCustomerDetails();
                std::cout << "Bike returned by: " << customer.getCustomerName()
                          << ", Contact: " << customer.getPhoneNumber() << std::endl;

                bike.returnBike();

                std::cout << "Bike with Vehicle Number " << vehicle_number
                          << " has been returned successfully." << std::endl;
            }
            else
            {
                std::cout << "Bike with Vehicle Number " << vehicle_number
                          << " is already available." << std::endl;
            }
            return;
        }
    }
    std::cout << "Bike with Vehicle Number " << vehicle_number << " not found in the system." << std::endl;
}



void RentManager::ReturnCar(int vehicle_number)
{
    for (auto& car : carlist)
    {
        if (car.getVechicalNumber() == vehicle_number)
        {
            if (car.isbookedCar())
            {
                CustomerDetails customer = car.getCustomerDetails();
                std::cout<<"Bike returned by: "<<customer.getCustomerName()
                          <<",phone number: "<<customer.getPhoneNumber()<<std::endl;
                car.returnCar();
                cout << "Car with vehicle number " << vehicle_number << " has been returned successfully." << endl;
            }
            else
            {
                cout << "Car with vehicle number " << vehicle_number << " is already available." << endl;
            }
            return;
        }
    }
    cout << "Car with vehicle number " << vehicle_number<< " not found in the system." << endl;
}
void RentManager::DisplayRent()
{
    cout<<"List of Cars: "<<endl;
    for(const auto &car : carlist)
    {
        car.displayDetails();
    }
    cout<<"List of Bikes: "<<endl;
    for(const auto &bike : bikelist)
    {
        bike.displayDetails();
    }
}
