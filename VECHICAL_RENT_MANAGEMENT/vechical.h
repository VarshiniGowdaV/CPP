#ifndef VECHICAL_H
#define VECHICAL_H
#include <iostream>
#include "custamerdetails.h"
using namespace std;
class Vechical
{
protected:
    int m_vechical_number;
    string m_vechical_name;
    string m_modal;
    string m_type;
    int m_cast;
    int m_payment;
    int m_duration;
    string m_status;
    CustomerDetails custamer;

public:
    Vechical(int vechical_number,string vechical_name,string modal,string type,int cast,int payment,int duration ,string status);
    Vechical();
    ~Vechical();

    int getVechicalNumber();
    string getVechicalName();
    string getModal();
    string getType();
    int getCast();
    int getPayment();
    int getDuration();
    string getStatus();

    void setDetails(int vechical_number, string vechical_name, string modal, string type, int cast, int payment, int duration, string status);
    virtual void displayDetails() const=0;
    virtual CustomerDetails getCustomerDetails() const = 0;
};

#endif // VECHICAL_H
