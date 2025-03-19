#include "bike.h"
#include "car.h"
#include "custamerdetails.h"
#include "filehandling.h"
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;
FileHandling::FileHandling()
{
    cout<<"Filehandling constructor called"<<endl;
}
FileHandling::~FileHandling()
{
    cout<<"Filehandling destructot called"<<endl;
}
void FileHandling::writeBikeData(std::vector<Bike> bikelist)
{
    ofstream file("bike.csv", ios::app);
    if (!file)
    {
        cout << "Error opening bike file for writing!" << endl;
        return;
    }

    for (auto bike : bikelist)
    {
        file <<bike.getVechicalNumber()<< "," <<bike.getVechicalName() <<","<<
            bike.getModal() << "," <<bike.getType() <<"," << bike.getCast() << ","
             << bike.getPayment() <<","<<bike.getDuration()<<","<<bike.getStatus()<< "\n";
    }

    file.close();
    cout << "Bike data written successfully." << endl;
}

vector<Bike*> readBikeData()
{
    vector<Bike*> bikeList;
    ifstream file("bike.csv");
    if (!file) {
        cout << "Error opening bike file for reading!" << endl;
        return bikeList;
    }

    string vehicle_name, model, type, status;
    int vehicle_number, cost, payment, duration;

    while (getline(file, vehicle_name, ',') &&
           getline(file, model, ',') &&
           getline(file, type, ',') &&
           file >> vehicle_number && file.ignore() &&
           file >> cost && file.ignore() &&
           file >> payment && file.ignore() &&
           file >> duration && file.ignore() &&
           getline(file, status)) {

        bikeList.push_back(new Bike(vehicle_number, vehicle_name, model, type, cost, payment, duration, status));
    }

    file.close();
    return bikeList;
}
void FileHandling::writeCarData(std::vector<Car> carList)
{
    ofstream file("car.csv",ios::app);
    if(!file)
    {
        cout<<"Error opening Car file for writing!"<<endl;
        return;
    }
    for(auto car:carList)
    {
        file <<car.getVechicalNumber()<< "," <<car.getVechicalName() <<","<<
            car.getModal() << "," <<car.getType() <<"," << car.getCast() << ","
             << car.getPayment() <<","<<car.getDuration()<<","<<car.getStatus()<< "\n";
    }
    file.close();
    cout<<"Car data written successfully."<<endl;
}

vector<Car *> FileHandling::readCarData()
{
    vector<Car*>carList;
    ifstream file("car.csv");
    if(!file)
    {
        cout<<"Error opening car file for reading!"<<endl;
        return carList;
    }
    string vehicle_name, model, type, status;
    int vehicle_number, cost, payment, duration;

    while (getline(file, vehicle_name, ',') &&
           getline(file, model, ',') &&
           getline(file, type, ',') &&
           file >> vehicle_number && file.ignore() &&
           file >> cost && file.ignore() &&
           file >> payment && file.ignore() &&
           file >> duration && file.ignore() &&
           getline(file, status)) {

        carList.push_back(new Car(vehicle_number, vehicle_name, model, type, cost, payment, duration, status));
    }

    file.close();
    return carList;
}
void FileHandling:: writeCustomerDetails(std::vector<CustomerDetails*> customerList)
{
    ofstream file("customers.csv", ios::app);
    if (!file)
    {
        cout << "Error opening customer file for writing!" << endl;
        return;
    }
    for (const auto &customer : customerList)
    {
        file << customer.getCustomerName() << ","
             << customer.getIdProof() << ","
             << customer.getAge() << ","
             << customer.getPhoneNumber() << "\n";
    }
    file.close();
    cout << "Customer data written successfully." << endl;
}
};
vector<CustomerDetails*> readCustamerData()
{
    vector<CustomerDetails*>customerList;
    ifstream file("customer.csv");
    if (!file)
    {
        cout<<"Error opening bike file for reading!"<<endl;
        return customerList;
    }
    string customername,idproof,phnum;
    int age;
    while(getline(file,customername,',')&& getline(file,idproof,',')&& file>>age && file.ignore() && getline(file,phnum,','))
    {
        customerList.push_back(new CustomerDetails(customername,idproof,age,phnum));
    }
    file.close();
    return customerList;
}
