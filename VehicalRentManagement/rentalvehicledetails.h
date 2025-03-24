#ifndef RENTALVEHICLEDETAILS_H
#define RENTALVEHICLEDETAILS_H
#include <iostream>
using namespace std;
class RentalVehicleDetails
{
protected:
    string m_vehicalNumber;
    string m_brand;
    string m_model;
    float m_rentPrice;
    string m_status;
public:
    RentalVehicleDetails(string vehicalNumber,string brand,string model,float rentPrice,string status);
    RentalVehicleDetails();
    ~RentalVehicleDetails();

    string getvehicalNumber();
    string getbrand();
    string getmodel();
    float getrentprice();
    string getstatus();

    void setvechicalNumber(string vehicalNumber);
    void setbrand(string brand);
    void setmodel(string model);
    void setrentprice(float rentprice);
    void setrentstatus(string status);
};

#endif // RENTALVEHICLEDETAILS_H
