// Payment.cpp
#include "Payment.h"
#include <iostream>
#include <iostream>
using namespace std;
Payment::Payment(string payment_method, double amount)
{
    m_payment_method=payment_method;
    m_amount=amount;
}
Payment::Payment()
{
    std::cout << "Payment default constructor called." << std::endl;
}

Payment::~Payment()
{
    std::cout << "Payment destructor called." << std::endl;
}
string Payment::getPaymentMethod()
{
    return m_payment_method;
}
double Payment::getAmount()
{
    return m_amount;
}
void Payment::setPaymentMethout(string PaymentMethod)
{
    m_payment_method=PaymentMethod;
}
void Payment::setAmount(double amount)
{
    m_amount=amount;
}
void Payment::displayPaymentDetails()
{
    cout << "Payment Method: " << m_payment_method << endl;
    cout << "Amount: $" << m_amount << endl;
}
