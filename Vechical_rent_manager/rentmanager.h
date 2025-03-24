#ifndef RENTMANAGER_H
#define RENTMANAGER_H
#include <iostream>
#include <string>
#include <vector>
#include "customerdetails.h"
#include "car.h"
#include "bike.h"
#include "filehandling.h"
#include <unordered_map>
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
    void displayBike();
    void displayCar();
    void updateBikePrice();
    void updateCarPrice();
    void deleteBike();
    void deleteCar();
    void searchBike(const string& vechicalNumber);
    void searchCar(const string& vechicalNumber);
    void sortbike();
    void sortcar();
    void alldetails();
};

#endif // RENTMANAGER_H
