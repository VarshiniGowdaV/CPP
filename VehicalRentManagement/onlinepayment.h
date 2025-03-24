#ifndef ONLINEPAYMENT_H
#define ONLINEPAYMENT_H
#include <iostream>
using namespace std;
class OnlinePayment
{
private:
    string m_upi_id;
    string m_transaction_id;
public:
    OnlinePayment(string upi_id,string transaction_id);
    OnlinePayment();
    ~OnlinePayment();

    string getupiid();
    string gettransactionid();

    void setupiid(string upi_id);
    void settransactionid(string transaction_id);

    void processPayment(double amount);
    void displayPaymentDetails();

};

#endif // ONLINEPAYMENT_H
