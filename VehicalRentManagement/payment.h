#ifndef PAYMENT_H
#define PAYMENT_H
#include <iostream>
using namespace std;
class Payment {
private:
    string m_payment_method;
    double m_amount;

public:
    Payment(string payment_method,double amount);
    Payment();
    ~Payment();

    string getPaymentMethod();
    double getAmount();
    void setPaymentMethout(string PaymentMethod);
    void setAmount(double amount);

    virtual void processPayment(double amount) = 0;
    //virtual ~Payment() {}
    void displayPaymentDetails();
};

#endif // PAYMENT_H
