#ifndef RENTMANAGER_H
#define RENTMANAGER_H
#include "bike.h"
#include "car.h"
#include "custamerdetails.h"
#include <vector>
using namespace std;
class RentManager
{
    std::vector<Bike> bikes;
    std::vector<Car> cars;
    list<CustamerDetails> custamerdetails;
public:
    RentManager();
    ~RentManager();

    void addCar();
    void addBike();
    void BookCar();
    void BookBike();
    void ReturnBike(int vechical_number);
    void ReturnCar(int vehicle_num);
    void DisplayRent();
};

#endif // RENTMANAGER_H
