#include "owner.h"

Owner::Owner(string ownername, string ownernumber)
{
    m_ownername=ownername;
    m_ownernumber=ownernumber;
}
Owner::Owner()
{
    cout<<"Owner constructor called"<<endl;
}
Owner::~Owner()
{
    cout<<"owner destructor called"<<endl;
}
string Owner::getownernumber()
{
    return m_ownernumber;
}
string Owner::getownername()
{
    return m_ownername;
}
Driver * Car::getassigneddriver()
{
    return m_assignedDriver;
}
void Owner::setownerdetails(string ownername, string ownernumber)
{
    m_ownername=ownername;
    m_ownernumber=ownernumber;
}
void Owner::assignDrivertocar(Car *car, Driver *driver)
{
    if(car && driver)
    {
        car->assignedDriver(driver);
        cout<<"Driver  " <<driver->getdrivername() <<"  assigned to car "<<car->getcarname()<<endl;
    }
    else
    {
        cout<<"Invalid car or driver\n";
    }
}
void Car::assignedDriver(Driver *driver)
{
    m_assignedDriver =driver;
}
