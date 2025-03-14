#ifndef CUSTAMERDETAILS_H
#define CUSTAMERDETAILS_H
#include <iostream>
#include "vechical.h"
#include <list>
#include "bike.h"
using namespace std;
class CustamerDetails
{
private:
    string m_custamer_name;
    string m_idproof;
    int m_age;
    string m_phnum;
public:
    CustamerDetails(string custamer_name,string idproof,int age,string phnum);
    CustamerDetails();
    ~CustamerDetails();

    string getCustamerName();
    string getIdProof();
    int getAge();
    string getphnum();

    void setcustamerdetails(string custamername,string idproof,int age,string phnum );

    Vechical * vechicalDetails;
    list<Bike*> bikes;
    void display();
};

#endif // CUSTAMERDETAILS_H
