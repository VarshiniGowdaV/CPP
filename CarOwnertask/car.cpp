#include "car.h"

Car::Car()
{
    cout<<"car constructor called"<<endl;
}
Car::Car(string carname, string carnumber, string brand)
{
    m_carname=carname;
    m_carnumber=carnumber;
    m_brand=brand;
}
Car::~Car()
{
    cout<<"Car destructor called"<<endl;
}
string Car::getcarnumber()
{
    return m_carnumber;
}
string Car::getcarname()
{
    return m_carname;
}
string Car::getbrand()
{
    return m_brand;
}
void Car::setcardetail(string carname, string carnumber, string brand)
{
    m_carname=carname;
    m_carnumber=carnumber;
    m_brand=brand;
}
