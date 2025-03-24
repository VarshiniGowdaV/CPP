#include "rentalvehicledetails.h"

RentalVehicleDetails::RentalVehicleDetails(string vehicalNumber,string brand,string model,float rentPrice,string status)
{
    m_vehicalNumber=vehicalNumber;
    m_brand=brand;
    m_model=model;
    m_rentPrice=rentPrice;
    m_status=status;
}
RentalVehicleDetails::RentalVehicleDetails()
{
    cout<<"Rentalvehicledetails constructor called"<<endl;
}
RentalVehicleDetails::~RentalVehicleDetails()
{
    cout<<"Rentalvehicledetails destructor called"<<endl;
}
string RentalVehicleDetails::getvehicalNumber()
{
    return m_vehicalNumber;
}
string RentalVehicleDetails::getbrand()
{
    return m_brand;
}
string RentalVehicleDetails::getmodel()
{
    return m_model;
}
float RentalVehicleDetails::getrentprice()
{
    return m_rentPrice;
}
string RentalVehicleDetails::getstatus()
{
    return m_status;
}
void RentalVehicleDetails::setvechicalNumber(string vehicalNumber)
{
    m_vehicalNumber=vehicalNumber;
}
void RentalVehicleDetails::setbrand(string brand)
{
    m_brand=brand;
}
void RentalVehicleDetails::setmodel(string model)
{
    m_model=model;
}
void RentalVehicleDetails::setrentprice(float rentprice)
{
    m_rentPrice=rentprice;
}
void RentalVehicleDetails::setrentstatus(string status)
{
    m_status=status;
}
