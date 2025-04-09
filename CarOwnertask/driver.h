#ifndef DRIVER_H
#define DRIVER_H
#include <iostream>
using namespace std;
class Driver
{
private:
    string m_drivername;
    string m_drivernumber;
    string m_address;
public:
    Driver(string drivername,string drivernumber,string address);
    Driver();
    ~Driver();

    string getdrivername();
    string getdrivernumber();
    string getaddress();

    void  setDriverdetails(string drivername,string drivernumber,string address);
};

#endif // DRIVER_H
