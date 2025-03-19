#include "filehandling.h"
#include <iostream>
#include <fstream>
using namespace std;
Filehandling::Filehandling()
{
    cout<<"Filehandling constructor called"<<endl;
}
Filehandling::~Filehandling()
{
    cout<<"Filehandling destructot called"<<endl;
}
void Filehandling::writeBikeData(std::vector<Bike> bikelist)
{
    ofstream file("bike.csv",ios::app);
    for(auto i=bikelist.begin();i!=bikelist.end();i++)
    {
        file<<i->getvechicalnumber()<<","<<i->getvechicalname()<<","
             <<i->getmodel()<<","<<i->getrentprice()<<","
             <<i->getduration()<<","<<i->getstatus()<<"\n";
    }
    file.close();
}
vector<Bike> Filehandling::readBikeData()
{
    vector<Bike> bikelist;
    ifstream file("bike.csv");
    string vechical_number, vechical_name, model, duration, status, rentpriceStr;
    float rentprice;

    while (getline(file, vechical_number, ',') &&
           getline(file, vechical_name, ',') &&
           getline(file, model, ',') &&
           file>>rentprice && file.ignore()&&
           getline(file, status))
    {

        bikelist.push_back(Bike(vechical_number, vechical_name, model, rentprice, duration, status));
    }

    file.close();
    return bikelist;
}
void Filehandling::writeCarData(std::vector<Car> carlist)
{
    ofstream file("car.csv",ios::app);
    for(auto i=carlist.begin();i!=carlist.end();i++)
    {
        file<<i->getvechicalnumber()<<","<<i->getvechicalname()<<","
             <<i->getmodel()<<","<<i->getrentprice()<<","
             <<i->getduration()<<","<<i->getstatus()<<"\n";
    }
    file.close();
}
vector<Car> Filehandling::readCarData()
{
    vector<Car> carlist;
    ifstream file("car.csv");
    string vechical_number, vechical_name, model, duration, status, rentprice;
    float rentPrice;

    while (getline(file, vechical_number, ',') &&
           getline(file, vechical_name, ',') &&
           getline(file, model, ',') &&
           file>>rentprice && file.ignore()&&
           getline(file, status))
    {

        carlist.push_back( Car(vechical_number, vechical_name, model, rentPrice, duration, status));
    }

    file.close();
    return carlist;
}
void Filehandling::writeCustamerDetails(std::vector<CustomerDetails> customerList)
{
    ofstream file("customer.csv",ios::app);
    for(auto i=customerList.begin();i!=customerList.end();i++)
    {
        file<<i->getCustomerName()<<","<<i->getIdProof()<<","<<i->getAge()<<","<<i->getPhoneNumber()<<"\n";
    }
    file.close();
}
vector<CustomerDetails> Filehandling::readCustamerData()
{
    vector<CustomerDetails*> customerList;
    ifstream file("customer.csv");
    string customer_name,idproof,phnum;
    int age;
    while(getline(file,customer_name,',')&&
           getline(file,idproof,',')&&
           file>>age && file.ignore() &&
           getline(file,phnum,','))
    {
        customerList.push_back(new CustomerDetails(customer_name,idproof,age,phnum));
    }
}
