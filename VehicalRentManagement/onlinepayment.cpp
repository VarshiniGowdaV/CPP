#include "onlinepayment.h"

OnlinePayment::OnlinePayment(string upi_id,string transaction_id)
{
    m_upi_id=upi_id;
    m_transaction_id=transaction_id;
}
OnlinePayment::OnlinePayment()
{
    cout<<"OnlinePayment constructor called"<<endl;
}
OnlinePayment::~OnlinePayment()
{
    cout<<"OnlinePayment destructor called"<<endl;
}
string OnlinePayment::getupiid()
{
    return m_upi_id;
}
string OnlinePayment::gettransactionid()
{
    return m_transaction_id;
}
void OnlinePayment::setupiid(string upi_id)
{
    m_upi_id=upi_id;
}
void OnlinePayment::settransactionid(string transaction_id)
{
    m_transaction_id=transaction_id;
}
void OnlinePayment::processPayment(double amount)
{
    if(m_upi_id.empty())
    {
        cout<<"Error:payment cannot be processed."<<endl;
        return;
    }
    cout<<"Processing payment of Rs. "<<amount<<"using UPI ID: "<<m_upi_id<<endl;
    cout<<"Transaction Successful. Transaction ID: "<<m_transaction_id<<endl;
}
void OnlinePayment::displayPaymentDetails()
{
    cout<<"UPI ID: "<<m_upi_id<<endl;
    cout<<"Transaction ID: "<<m_transaction_id<<endl;
}
