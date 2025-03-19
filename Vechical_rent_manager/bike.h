#ifndef BIKE_H
#define BIKE_H
#include "vechical.h"
#include "customerdetails.h"
class Bike:public Vechical
{
public:
    Bike(string vechicalnumber,string vechicalname,string model,float rentprice,string duration,string status);
    ~Bike();
    Bike();
    void setstatus(string status);
};

#endif // BIKE_H
