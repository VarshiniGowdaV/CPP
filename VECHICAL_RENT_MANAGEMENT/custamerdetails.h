#ifndef CUSTOMERDETAILS_H
#define CUSTOMERDETAILS_H

#include <iostream>
#include <string>

using namespace std;

class Vehicle;

class CustomerDetails {
private:
    string m_customer_name;
    string m_idproof;
    int m_age;
    string m_phnum;
    Vehicle* vehiclelist;


public:
    CustomerDetails();
    CustomerDetails( string customer_name,  string idproof, int age,  string phnum);
    ~CustomerDetails();


    string getCustomerName() const;
    string getIdProof() const;
    int getAge() const;
    string getPhoneNumber() const;


    void  setCustomerDetails(const string& customer_name, const string& idproof, int age, const string& phnum);

    void customerDisplay() const;

};

#endif // CUSTOMERDETAILS_H
