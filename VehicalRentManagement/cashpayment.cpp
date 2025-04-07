#include "cashpayment.h"
#include <iostream>
using namespace std;

CashPayment::CashPayment(double amount) {
    m_amount = amount;
}

CashPayment::CashPayment() {
    cout << "CashPayment constructor called" << endl;
}

CashPayment::~CashPayment() {
    cout << "CashPayment destructor called" << endl;
}

double CashPayment::getAmount() const
{
    return m_amount;
}

void CashPayment::setAmount(double amount) {
    m_amount = amount;
}

void CashPayment::displayPayment() const
{
    cout << "Cash Payment Amount: ₹" << m_amount << endl;
}

void CashPayment::processPayment(double amount) {
    m_amount = amount;
    cout << "Cash payment of ₹" << m_amount << " processed successfully." << endl;
}
