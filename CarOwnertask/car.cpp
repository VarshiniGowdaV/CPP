#include "car.h"

Car::Car()
{
    cout << "Car constructor called" << endl;
}

Car::Car(string carname,string carnumber, string brand)

{
    m_carname=carname;
    m_carnumber=carnumber;
    m_brand=brand;
    cout << "Car parameterized constructor called" << endl;
}

Car::~Car()
{
    cout << "Car destructor called" << endl;
}

string Car::getcarname()
{
    return m_carname;
}

string Car::getcarnumber()
{
    return m_carnumber;
}

string Car::getbrand()
{
    return m_brand;
}

Driver* Car::getassigneddriver()
{
    return m_assignedDriver;
}

void Car::setcardetail(string carname,string carnumber, string brand)
{
    m_carname = carname;
    m_carnumber = carnumber;
    m_brand = brand;
}

void Car::Driverforcar(Driver* d)
{
    m_assignedDriver = d;
    cout << "Set driver function called" << endl;
    if (m_assignedDriver)
    {
        cout << "Driver name: " << m_assignedDriver->getdrivername() << endl;
    }
    cout << "Car number: " << getcarnumber() << endl;
    cout << "Car name: " << getcarname() << endl;
    cout << "Car brand: " << getbrand() << endl;
}
