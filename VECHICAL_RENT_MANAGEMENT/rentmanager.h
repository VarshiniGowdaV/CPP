#ifndef RENTMANAGER_H
#define RENTMANAGER_H
#include "bike.h"
#include "car.h"
#include "custamerdetails.h"
#include <list>
using namespace std;
class RentManager
{
    list<Bike> bike;
    list<Car> car;
    list<CustamerDetails> custamerdetails;
public:
    RentManager();
    ~RentManager();

    void addCar();
    void addBike();
    void BookCar();
    void BookBike();
    void ReturnBike();
    void ReturnCar();
    void DisplayRent();
};

#endif // RENTMANAGER_H
