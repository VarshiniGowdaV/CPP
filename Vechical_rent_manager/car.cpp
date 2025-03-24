#include "car.h"

Car::Car()
{
    cout<<"Car constructor called"<<endl;
}
Car::Car(string vechicalnumber, string vechicalname, string model, float rentprice, string duration, string status)
{
    m_vechical_number=vechicalnumber;
    m_vechical_name=vechicalname;
    m_model=model;
    m_rentPrice=rentprice;
    //m_duration=duration;
    m_status=status;
}
Car::~Car()
{
    cout<<"Car destructor called"<<endl;
}

void Car::setstatus(string status)
{
    m_status=status;
}
