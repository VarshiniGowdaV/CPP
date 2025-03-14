#ifndef CAR_H
#define CAR_H
#include "vechical.h"
#include <iostream>
using namespace std;
class Car:public Vechical
{
public:
    Car();
    ~Car();

    int getCarNumber();
    string getCarName();
    string getCarModal();
    string getCarType();
    int getCarCast();
    int getCarPayment();
    int getCarDuration();
    string getCarStatus();

    void setCarDetails(string Modal,string type,int cast,int payment,int duraction,string status);
};

#endif // CAR_H
