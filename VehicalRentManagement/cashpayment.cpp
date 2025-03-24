#include "cashpayment.h"
#include <iostream>
using namespace std;
CashPayment::CashPayment(double amount)
{
    m_amount=amount;
}
CashPayment::CashPayment()
{
    cout<<"CashPayment constructor called"<<endl;
}
CashPayment::~CashPayment()
{
    cout<<"CashPayment destructor called"<<endl;
}
double CashPayment::getamount()
{
    return m_amount;
}
void CashPayment::setamount(double amount)
{
    m_amount=amount;
}
void CashPayment::displayPayment()
{
    cout<<"Cash Payment Amount: "<<m_amount<<endl;
}
