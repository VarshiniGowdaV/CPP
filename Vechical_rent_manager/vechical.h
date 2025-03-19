#ifndef VECHICAL_H
#define VECHICAL_H
#include <iostream>
#include "customerdetails.h"
using namespace std;
class Vechical
{
protected:
    string m_vechical_number;
    string m_vechical_name;
    string m_model;
    float m_rentPrice;
    string m_duration;
    string m_status;

public:
    Vechical(string vechicalnumber,string vechicalname,string model,float rentprice,string duration,string status );
    Vechical();
    ~Vechical();


    string getvechicalnumber() const;
    string getvechicalname() const;
    string getmodel() const;
    float getrentprice() const;
    string getduration() const;
    string getstatus() const;

    void setDetails(string vechicalnumber,string vechicalname,string model,float rentprice,string duration,string status);
};

#endif // VECHICAL_H
