#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;
class Customer
{
private:
    string m_customer_name;
    string m_idproof;
    int m_age;
    string m_phnum;
public:
    Customer(string customer_name,string idproof,int age,string phnum);
    Customer();
    ~Customer();

    string getCustomerName();
    string getidProof();
    int getAge();
    string getPhnum();

    void setCustomerDetails(string customer_name,string idproof,int age,string phnum);
};

#endif // CUSTOMER_H
