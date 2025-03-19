#include "vechical.h"

Vechical::Vechical(string vechicalnumber,string vechicalname,string model,float rentprice,string duration,string status )
{
    m_vechical_number=vechicalnumber;
    m_vechical_name=vechicalname;
    m_model=model;
    m_rentPrice=rentprice;
    m_duration=duration;
    m_status=status;
}
Vechical::Vechical()
{
    cout<<"Vechical constructor called"<<endl;
}
Vechical::~Vechical()
{
    cout<<"Vechical destructor called"<<endl;
}
string Vechical::getvechicalnumber() const
{
    return m_vechical_number;
}
string Vechical::getvechicalname() const
{
    return m_vechical_name;
}
string Vechical::getmodel()const
{
    return m_model;
}
float Vechical::getrentprice()const
{
    return m_rentPrice;
}
string Vechical::getduration() const
{
    return m_duration;
}
string Vechical::getstatus()const
{
    return m_status;
}
void Vechical::setDetails(string vechicalnumber, string vechicalname, string model, float rentprice, string duration, string status)
{
    m_vechical_number=vechicalnumber;
    m_vechical_name=vechicalname;
    m_model=model;
    m_rentPrice=rentprice;
    m_duration=duration;
    m_status=status;
}
