#include "rentalbike.h"

RentalBike::RentalBike(string vehicalNumber,string brand,string model,float rentPrice,string status)
{
    m_vehicalNumber=vehicalNumber;
    m_brand=brand;
    m_model=model;
    m_rentPrice=rentPrice;
    m_status=status;
}
RentalBike::RentalBike()
{
    cout<<"RentalBike constructor called"<<endl;
}
RentalBike::~RentalBike()
{
    cout<<"RentalBike destructor called"<<endl;
}
string RentalBike::getstatus()
{
    return m_status;
}
void RentalBike::setrentstatus(string status)
{
    m_status=status;
}
