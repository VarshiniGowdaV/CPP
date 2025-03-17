#include "bike.h"
#include <iostream>
using namespace std;
Bike::Bike(int vechical_number, string vechical_name, string modal, string type, int cast, int payment, int duration, string status)
{
    m_vechical_number=vechical_number;
    m_vechical_name=vechical_name;
    m_modal=modal;
    m_type=type;
    m_cast=cast;
    m_payment=payment;
    m_duration=duration;
    m_status=status;
    booked = false;
}
Bike::Bike()
{
    cout<<"Bike constructor called "<<endl;
    booked = false;
}
Bike::~Bike()
{
    cout<<"Bike destructor called"<<endl;
}
void Bike::bookBike()
{
    if (!isbooked)
    {
        isbooked = true;
        cout << "Bike has been successfully booked." << endl;
    }
    else
    {
        cout << "Bike is already booked!" << endl;
    }
}

void Bike::returnBike()
{
    if (isbooked)
    {
        isbooked = false;
        cout << "Bike has been successfully returned." << endl;
    }
    else
    {
        cout << "Bike is already available!" << endl;
    }
}

bool Bike::isBookedBike() const
{
    return isbooked;
}

void Bike::setBookedBike(bool status)
{
    isbooked = status;
}


void Bike::inputBikeDetails()
{
    cout<<"Enter Bike Number: "<<endl;
    cin>>m_vechical_number;
    cout<<"Enter Bike Name: "<<endl;
    cin>>m_vechical_name;
    cout<<"Enter Bike Model: "<<endl;
    cin>>m_modal;
    cout<<"Enter Bike type: "<<endl;
    cin>>m_type;
    cout<<"Enter Bike cost: "<<endl;
    cin>>m_cast;
    cout<<"Enter Bike payment: "<<endl;
    cin>>m_payment;
    cout<<"Enter Bike Duration: "<<endl;
    cin>>m_duration;
    cout<<"Enter Bike Status: "<<endl;
    cin>>m_status;
    booked = false;
}
void Bike::displayDetails()const
{
    cout<<" Bike Number: "<<m_vechical_number<<endl;
    cout<<" Bike Name: "<<m_vechical_name<<endl;
    cout<<" Bike model: "<<m_modal<<endl;
    cout<<" Bike Type: "<<m_type<<endl;
    cout<<" Bike Cost: "<<m_cast<<endl;
    cout<<" Bike payment: "<<m_payment<<endl;
    cout<<" Bike Duration: "<<m_duration<<endl;
    cout<<" Bike Status: "<<(booked ? "Booked" : "Available") << endl;
}
