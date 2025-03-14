#include "car.h"
#include <iostream>
using namespace std;
Car::Car()
{
    cout<<"Car constructor called"<<endl;
}
Car::~Car()
{
    cout<<"Car Destructor called"<<endl;
}
int Car::getCarNumber()
{
    return m_vechical_number;
}
string Car::getCarName()
{
    return m_vechical_name;
}
string Car::getCarModal()
{
    return m_modal;
}
string Car::getCarType()
{
    return m_type;
}
int Car::getCarCast()
{
    return m_cast;
}
int Car::getCarPayment()
{
    return m_payment;
}
int Car::getCarDuration()
{
    return m_duration;
}
string Car::getCarStatus()
{
    return m_status;
}
void Car::setCarDetails(string Modal, string type, int cast, int payment, int duraction, string status)
{
    m_modal=Modal;
    m_type=type;
    m_cast=cast;
    m_payment=payment;
    m_duration=duraction;
    m_status=status;
}
