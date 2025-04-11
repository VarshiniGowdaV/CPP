#include "owner.h"

Owner::Owner() : m_car(nullptr)
{
    cout << "Owner constructor called" << endl;
}

Owner::Owner( string ownername,  string ownernumber)
{
    m_ownername=ownername;
    m_ownernumber=ownernumber;
    cout << "Owner parameterized constructor called" << endl;
}

Owner::~Owner()
{
    cout << "Owner destructor called" << endl;
}

string Owner::getownername()
{
    return m_ownername;
}

string Owner::getownernumber()
{
    return m_ownernumber;
}

void Owner::setownerdetails(string ownername,  string ownernumber)
{
    m_ownername = ownername;
    m_ownernumber = ownernumber;
}

void Owner::assignDrivertocar(Driver* driver)
{
    cout << "AssignDriverToCar function called" << endl;
    if (m_car)
    {
        m_car->Driverforcar(driver);
    }
    else
    {
        cout << "No car assigned to owner!" << endl;
    }
}
