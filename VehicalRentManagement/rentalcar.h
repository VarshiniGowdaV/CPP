#ifndef RENTALCAR_H
#define RENTALCAR_H
#include "rentalvehicledetails.h"
class RentalCar:public RentalVehicleDetails
{
public:
    RentalCar(string vechicalNumber,string brand,string model,float rentPrice,string status);
    RentalCar();
    ~RentalCar();
     string getstatus();
     void setrentstatus(string status);
};

#endif // RENTALCAR_H
