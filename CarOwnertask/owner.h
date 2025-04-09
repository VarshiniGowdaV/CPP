#ifndef OWNER_H
#define OWNER_H
#include "car.h"
#include "driver.h"
#include <iostream>
using namespace std;
class Owner
{
private:
    string m_ownername;
    string m_ownernumber;
public:
    Owner(string ownername,string ownernumber);
    Owner();
    ~Owner();

    string getownername();
    string getownernumber();

    void  setownerdetails(string ownername,string ownernumber);
    void assignDrivertocar(Car *car,Driver * driver);
};

#endif // OWNER_H
