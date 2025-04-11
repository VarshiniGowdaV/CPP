#ifndef CAR_H
#define CAR_H
#include "driver.h"
#include <iostream>
using namespace std;
class Car
{
private:
    string m_carname;
    string m_carnumber;
    string m_brand;
    Driver * m_assignedDriver;
public:

    Car();
    Car(string carname,string carnumber,string brand);
    ~Car();

    string getcarname();
    string getcarnumber();
    string getbrand();
    Driver * getassigneddriver();
    void setcardetail(string carname,string carnumber,string brand);

    void Driverforcar(Driver * d);
};

#endif // CAR_H
