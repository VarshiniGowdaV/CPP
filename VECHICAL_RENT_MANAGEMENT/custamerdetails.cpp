#include "custamerdetails.h"
#include <iostream>
using namespace std;
CustamerDetails::CustamerDetails()
{
    cout<<"Custamer Details default constructor called"<<endl;
}
CustamerDetails::CustamerDetails(string custamer_name, string idproof, int age, string phnum)
{
    m_custamer_name=custamer_name;
    m_idproof=idproof;
    m_age = age;
    m_phnum = phnum;
}
CustamerDetails::~CustamerDetails()
{
    cout<<"Custamer Details destructor called"<<endl;
}
string CustamerDetails::getCustamerName()
{
    return m_custamer_name;
}
string CustamerDetails::getIdProof()
{
    return m_idproof;
}
int CustamerDetails::getAge()
{
    return m_age;
}
string CustamerDetails::getphnum()
{
    return m_phnum;
}
void CustamerDetails::setcustamerdetails(string custamername, string idproof, int age, string phnum)
{
    m_custamer_name=custamername;
    m_idproof=idproof;
    m_age=age;
    m_phnum=phnum;
}
void CustamerDetails::display()
{
    cout<<"Custamer Name: "<<m_custamer_name<<endl;
    cout<<"Idproof: "<<m_idproof<<endl;
    cout<<"Age: "<<m_age<<endl;
    cout<<"Phonenumber: "<<m_phnum<<endl;

    if(vechicalDetails)
    {
        cout<<"Vehicle Details: "<<endl;
        vechicalDetails->display();
    }
    else
    {
        cout<<"No vechicle assigned."<<endl;
    }
}
