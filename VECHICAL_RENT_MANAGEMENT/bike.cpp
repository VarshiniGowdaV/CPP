#include "bike.h"
#include <iostream>
using namespace std;
Bike::Bike()
{
    cout<<"Bike constructor called "<<endl;
}
Bike::~Bike()
{
    cout<<"Bike destructor called"<<endl;
}
int Bike::getBikeNumber()
{
    return m_vechical_number;
}
string Bike::getBikeName()
{
    return m_vechical_name;
}
string Bike::getBikeModal()
{
    return m_modal;
}
string Bike::getBikeType()
{
    return m_type;
}
int Bike::getBikeCast()
{
    return m_cast;
}
int Bike::getBikePayment()
{
    return m_payment;
}
int Bike::getBikeDuration()
{
    return m_duration;
}
string Bike::getBikeStatus()
{
    return m_status;
}
void Bike::setBikeDetails(string Modal, string type, int cast, int payment, int duraction, string status)
{
    m_modal=Modal;
    m_type=type;
    m_cast=cast;
    m_payment=payment;
    m_duration=duraction;
    m_status=status;
}
