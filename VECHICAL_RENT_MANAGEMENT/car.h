#ifndef CAR_H
#define CAR_H
#include "vechical.h"
#include <iostream>
#include "bike.h"
using namespace std;
class Car:public Vechical
{
private:
    bool booked;
    bool isBooked=false;
    CustomerDetails custamer;

public:
    Car(int vechical_number, string vechical_name, string modal, string type, int cast, int payment, int duration, string status);
    ~Car();
    Car();

    //int getVechicalNum();
    void inputCarDetails();
    void displayDetails()const override;

    void bookCar();
    void returnCar();

    bool isbookedCar()const;
    void setBookedCar(bool status);
    void customerDisplay() ;
};

#endif // CAR_H
