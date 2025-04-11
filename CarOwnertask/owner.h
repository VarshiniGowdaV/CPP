#ifndef OWNER_H
#define OWNER_H
#include "car.h"
#include "driver.h"
#include <iostream>
using namespace std;
class Car;
class Owner
{
private:
    string m_ownername;
    string m_ownernumber;
    Car *m_car;
public:
    Owner(string ownername,string ownernumber);
    Owner();
    ~Owner();

    string getownername();
    string getownernumber();

    void  setownerdetails(string ownername,string ownernumber);
    void assignDrivertocar(Driver * driver);
};

#endif // OWNER_H
