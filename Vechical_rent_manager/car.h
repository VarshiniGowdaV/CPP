#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "vechical.h"
class Car:public Vechical
{
public:
    Car(string vechicalnumber,string vechicalname,string model,float rentprice,string duration,string status);
    Car();
    ~Car();
    void setstatus(string status) ;
};

#endif // CAR_H
