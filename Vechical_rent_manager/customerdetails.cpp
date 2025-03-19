#include "customerdetails.h"
#include <iostream>
using namespace std;
CustomerDetails::CustomerDetails(string customer_name, string idproof, int age, string phnum)
{
    m_customer_name=customer_name;
    m_idproof=idproof;
    m_age=age;
    m_phnum=phnum;
}
CustomerDetails::CustomerDetails()
{
    cout<<"CustomerDetails constructor called"<<endl;
}
CustomerDetails::~CustomerDetails()
{
        cout << "Customer Details destructor called" << endl;
}
string CustomerDetails::getCustomerName()
{
    return m_customer_name;
}
string CustomerDetails::getIdProof()
{
    return m_idproof;
}
int CustomerDetails::getAge()
{
    return m_age;
}
string CustomerDetails::getPhoneNumber()
{
    return m_phnum;
}

void CustomerDetails::setcustomerDetails(string customer_name, string idproof, int age, string phnum)
{
    m_customer_name=customer_name;
    m_idproof =idproof;
    m_age= age;
    m_phnum=phnum;
}
