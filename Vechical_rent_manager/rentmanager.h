#ifndef RENTMANAGER_H
#define RENTMANAGER_H
#include <iostream>
#include <string>
#include <vector>
#include "customerdetails.h"
#include "car.h"
#include "bike.h"
#include "filehandling.h"
class Rentmanager
{
private:
    std::vector<Bike> bikelist;
    std::vector<Car> carlist;
    vector<CustomerDetails> custamerdetails;
    Filehandling file;
public:
    Rentmanager();
    ~Rentmanager();

    void addCar();
    void addBike();
    void BookCar();
    void BookBike();
    void ReturnBike();
    void ReturnCar();
    void displayOfBike();
    void displayofCar();
    void updateBikePrice();
    void updateCarPrice();
    void deleteBike();
    void deleteCar();
    void alldetails();
};

#endif // RENTMANAGER_H
