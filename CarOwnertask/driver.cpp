#include "driver.h"
#include <iostream>
using namespace std;
Driver::Driver()
{
    cout<<"Driver constructor called"<<endl;
}
Driver::Driver(string drivername, string drivernumber, string address)
{
    m_drivername=drivername;
    m_drivernumber=drivernumber;
    m_address=address;
    cout<<"Driver parameter constructor called"<<endl;
}
Driver::~Driver()
{
    cout<<"Driver destructor called"<<endl;
}
string Driver::getdrivernumber()
{
    return m_drivernumber;
}
string Driver::getdrivername()
{
    return m_drivername;
}
string Driver::getaddress()
{
    return m_address;
}
void Driver::setDriverdetails(string drivername, string drivernumber, string address)
{
    m_drivername=drivername;
    m_drivernumber=drivernumber;
    m_address=address;
}
