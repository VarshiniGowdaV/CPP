#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include "cashpayment.h"
#include "onlinepayment.h"
using namespace std;
class Customer
{
private:
    string m_customer_name;
    string m_idproof;
    int m_age;
    string m_phnum;
    Payment* m_payment;
public:
    Customer(std::string customer_name, std::string idproof, int age, std::string phnum, Payment* payment);
    Customer();
    ~Customer();

    string getCustomerName();
    string getidProof();
    int getAge();
    string getPhnum();

    void setCustomerDetails(string customer_name,string idproof,int age,string phnum);
    void showCustomerWithPayment();
};

#endif // CUSTOMER_H
