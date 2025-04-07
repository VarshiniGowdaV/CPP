#ifndef ONLINEPAYMENT_H
#define ONLINEPAYMENT_H

#include "Payment.h"
#include <iostream>
#include <string>

class OnlinePayment : public Payment {
private:
    std::string m_upi_id;
    std::string m_transaction_id;

public:
    OnlinePayment(std::string upi_id, std::string transaction_id);
    OnlinePayment();
    ~OnlinePayment();

    std::string getUpiId() const;
    std::string getTransactionId() const;

    void setUpiId(const std::string& upi_id);
    void setTransactionId(const std::string& transaction_id);

    void processPayment(double amount) override;
    void displayPaymentDetails() const;
};

#endif // ONLINEPAYMENT_H
