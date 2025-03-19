#ifndef CUSTOMERDETAILS_H
#define CUSTOMERDETAILS_H
#include <iostream>
using namespace std;
class CustomerDetails
{
private:
    string m_customer_name;
    string m_idproof;
    int m_age;
    string m_phnum;
public:
    CustomerDetails(string customer_name,  string idproof, int age,  string phnum);
    CustomerDetails();
    ~CustomerDetails();

    string getCustomerName();
    string getIdProof() ;
    int getAge() ;
    string getPhoneNumber();

    void setcustomerDetails(string customer_name,  string idproof, int age,  string phnum);
};

#endif // CUSTOMERDETAILS_H


