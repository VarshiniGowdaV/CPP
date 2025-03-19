#include "bike.h"

Bike::Bike()
{
    cout<<"Bike constructor called"<<endl;
}

Bike::Bike(string vechicalnumber, string vechicalname, string model, float rentprice, string duration, string status)
{
    m_vechical_number=vechicalnumber;
    m_vechical_name=vechicalname;
    m_model=model;
    m_rentPrice=rentprice;
    m_duration=duration;
    m_status=status;
}
Bike::~Bike()
{
    cout<<"Bike destructor called"<<endl;
}
void Bike::setstatus(string status)
{
    m_status=status;
}
