#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include "rentalbike.h"
#include "rentalcar.h"
#include "customer.h"
#include "admin.h"
#include "user.h"
#include <list>
#include <fstream>
class Fileoperation
{
public:
    Fileoperation();
    ~Fileoperation();

    void writeCarData(std::list<RentalCar>carlist);
    void writeBikeData(std::list<RentalBike>bikelist);

    std::list<RentalCar> readCarData();
    std::list<RentalBike> readBikeData();

    void writeCustomerdatabike(std::list<Customer> customerlist);
    std::list<Customer> readcustomerdatabike();

    void writeCustomerdatacar(std::list<Customer>customerlist);
    std::list<Customer> readcustomerdatacar();

    void writeAdminData(list<Admin> adminlist);
    list<Admin> readAdminData();

    void wirteUserData(list<User> userlist);
    list<User> readUserData();
};

#endif // FILEOPERATION_H
