#include "fileoperation.h"
#include <iostream>
#include <fstream>
Fileoperation::Fileoperation()
{
    cout<<"Fileoperation constructor called"<<endl;
}
Fileoperation::~Fileoperation()
{
    cout<<"Fileoperation destructor called"<<endl;
}
void Fileoperation::writeBikeData(std::list<RentalBike> bikelist)
{
    ofstream file("bike.csv",ios::app);
    for(auto i=bikelist.begin();i!=bikelist.end();i++)
    {
        file<<i->getvehicalNumber()<<" "<<i->getbrand()<<" "
             <<i->getmodel()<<" "<<i->getrentprice()<<" "
             <<i->getstatus()<<"\n";
    }
    file.close();
}
list<RentalBike> Fileoperation::readBikeData()
{
    list<RentalBike> bikelist;
    ifstream file("bike.csv");
    string vechical_number, brand, model, status, rentpriceStr;
    float rentprice;

    while (getline(file, vechical_number, ',') &&
           getline(file, brand, ',') &&
           getline(file, model, ',') &&
           file>>rentprice && file.ignore()&&
           getline(file, status))
    {

        bikelist.push_back(RentalBike(vechical_number, brand, model, rentprice, status));
    }

    file.close();
    return bikelist;
}
void Fileoperation::writeCarData(std::list<RentalCar> carlist)
{
    ofstream file("car.csv",ios::app);
    for(auto i=carlist.begin();i!=carlist.end();i++)
    {
        file<<i->getvehicalNumber()<<","<<i->getbrand()<<","
             <<i->getmodel()<<","<<i->getrentprice()<<","
             <<i->getstatus()<<"\n";
    }
    file.close();
}
list<RentalCar> Fileoperation::readCarData()
{
    list<RentalCar> carlist;
    ifstream file("car.csv");
    string vechical_number, brand, model, status, rentprice;
    float rentPrice;

    while (getline(file, vechical_number, ',') &&
           getline(file, brand, ',') &&
           getline(file, model, ',') &&
           file>>rentprice && file.ignore()&&
           getline(file, status))
    {

        carlist.push_back( RentalCar(vechical_number,brand, model, rentPrice, status));
    }

    file.close();
    return carlist;
}
void Fileoperation:: writeCustomerdatabike(std::list<Customer> customerlist)
{
    ofstream file("customerdatabike.csv",ios::app);
    for(auto i=customerlist.begin();i!=customerlist.end();i++)
    {
        file<<i->getCustomerName()<<","<<i->getidProof()<<","<<i->getAge()<<","<<i->getPhnum()<<"\n";
    }
    file.close();
}
list<Customer> Fileoperation::readcustomerdatacar()
{
    list<Customer*> customerlist;
    ifstream file("customerdatabike.csv");
    string customer_name,idproof,phnum;
    int age;
    while(getline(file,customer_name,',')&&
           getline(file,idproof,',')&&
           file>>age && file.ignore() &&
           getline(file,phnum,','))
    {
        customerlist.push_back(new Customer(customer_name,idproof,age,phnum));
    }
}
void Fileoperation:: writeCustomerdatacar(std::list<Customer> customerlist)
{
    ofstream file("customerdatacar.csv",ios::app);
    for(auto i=customerlist.begin();i!=customerlist.end();i++)
    {
        file<<i->getCustomerName()<<","<<i->getidProof()<<","<<i->getAge()<<","<<i->getPhnum()<<"\n";
    }
    file.close();
}
list<Customer> Fileoperation::readcustomerdatabike()
{
    list<Customer*> customerlist;
    ifstream file("customerdatacar.csv");
    string customer_name,idproof,phnum;
    int age;
    while(getline(file,customer_name,',')&&
           getline(file,idproof,',')&&
           file>>age && file.ignore() &&
           getline(file,phnum,','))
    {
        customerlist.push_back(new Customer(customer_name,idproof,age,phnum));
    }
}
