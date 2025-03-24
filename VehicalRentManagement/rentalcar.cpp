#include "rentalcar.h"

RentalCar::RentalCar(string vehicalNumber,string brand,string model,float rentPrice,string status)
{
    m_vehicalNumber=vehicalNumber;
    m_brand=brand;
    m_model=model;
    m_rentPrice=rentPrice;
    m_status=status;
}
RentalCar::RentalCar()
{
    cout<<"RentalCar constructor called"<<endl;
}
RentalCar::~RentalCar()
{
    cout<<"RentalCar destructor called"<<endl;
}
string RentalCar::getstatus()
{
    return m_status;
}
void RentalCar::setrentstatus(string status)
{
    m_status=status;
}
