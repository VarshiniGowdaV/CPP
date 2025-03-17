#ifndef RENTMANAGER_H
#define RENTMANAGER_H
#include "bike.h"
#include "car.h"
#include "custamerdetails.h"
#include <vector>
#include "filehandling.h"
using namespace std;
class RentManager
{
private:
    std::vector<Bike> bikelist;
    std::vector<Car> carlist;
    vector<CustomerDetails> custamerdetails;
    FileHandling file;
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
