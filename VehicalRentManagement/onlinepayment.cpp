#include "onlinepayment.h"
#include <iostream>
#include <string>

using namespace std;
OnlinePayment::OnlinePayment(std::string upi_id,std::string transaction_id)
{
    m_upi_id = upi_id;
    m_transaction_id = transaction_id;
}

OnlinePayment::OnlinePayment()
{
    cout << "OnlinePayment constructor called" << endl;
}

OnlinePayment::~OnlinePayment()
{
    cout << "OnlinePayment destructor called" << endl;
}

string OnlinePayment::getUpiId() const
{
    return m_upi_id;
}

string OnlinePayment::getTransactionId() const
{
    return m_transaction_id;
}

void OnlinePayment::setUpiId(const string& upi_id)
{
    m_upi_id = upi_id;
}

void OnlinePayment::setTransactionId(const string& transaction_id)
{
    m_transaction_id = transaction_id;
}

void OnlinePayment::processPayment(double amount)
{
    if (m_upi_id.empty())
    {
        cout << "Error: payment cannot be processed." << endl;
        return;
    }
    cout << "Processing online payment of ₹" << amount
         << " via UPI ID: " << m_upi_id << endl;
    cout << "Transaction ID: " << m_transaction_id << " has been recorded." << endl;
}

void OnlinePayment::displayPaymentDetails() const
{
    cout << "UPI ID: " << m_upi_id << endl;
    cout << "Transaction ID: " << m_transaction_id << endl;
}
