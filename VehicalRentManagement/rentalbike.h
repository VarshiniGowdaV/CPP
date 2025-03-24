#ifndef RENTALBIKE_H
#define RENTALBIKE_H
#include "rentalvehicledetails.h"
class RentalBike:public RentalVehicleDetails
{
public:
    RentalBike(string vechicalNumber,string brand,string model,float rentPrice,string status);
    RentalBike();
    ~RentalBike();
    string getstatus();
     void setrentstatus(string status);
};

#endif // RENTALBIKE_H
