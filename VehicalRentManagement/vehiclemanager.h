#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H
#include "rentalbike.h"
#include "rentalcar.h"
#include "rentalvehicledetails.h"
#include "customer.h"
#include "fileoperation.h"
#include <list>
class VehicleManager
{
private:
    std::list<RentalBike> bikelist;
    std::list<RentalCar> carlist;
    list<Customer> customerlist;
    Fileoperation file;
public:
    VehicleManager();
    ~VehicleManager();

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
    void searchBike();
    void searchCar();
    void sortbikeStatus();
    void sortcarbyStatus();
    void sortbikebyPrice();
    void sortcarbyPrice();
    void alldetails();
};

#endif // VEHICLEMANAGER_H
