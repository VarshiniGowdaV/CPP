#include "customer.h"

Customer::Customer(string customer_name,string idproof,int age,string phnum)
{
    m_customer_name=customer_name;
    m_idproof=idproof;
    m_age=age;
    m_phnum=phnum;
}
Customer::Customer()
{
    cout<<"Customer constructor called"<<endl;
}
Customer::~Customer()
{
    cout<<"Customer destructor called"<<endl;
}
string Customer::getCustomerName()
{
    return m_customer_name;
}
string Customer::getidProof()
{
    return m_idproof;
}
int Customer::getAge()
{
    return m_age;
}
string Customer::getPhnum()
{
    return m_phnum;
}
