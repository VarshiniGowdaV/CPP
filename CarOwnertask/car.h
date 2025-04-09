#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class Driver;
class Car
{
private:
    string m_carname;
    string m_carnumber;
    string m_brand;
    Driver * m_assignedDriver;
public:
    Car(string carname,string carnumber,string brand);
    Car();
    ~Car();

    string getcarname();
    string getcarnumber();
    string getbrand();
    Driver * getassigneddriver();
    void setcardetail(string carname,string carnumber,string brand);
    void assignedDriver(Driver *driver);
};

#endif // CAR_H
