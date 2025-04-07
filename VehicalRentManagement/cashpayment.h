#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

#include "Payment.h"
#include <iostream>

class CashPayment : public Payment {
private:
    double m_amount;

public:
    CashPayment(double amount);
    CashPayment();
    ~CashPayment();

    double getAmount() const;
    void setAmount(double amount);

    void processPayment(double amount) override;
    void displayPayment() const;
};

#endif // CASHPAYMENT_H
