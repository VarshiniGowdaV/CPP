#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H

class CashPayment
{
private :
    double m_amount;
public:
    CashPayment(double amount);
    CashPayment();
    ~CashPayment();

    double getamount();
    void setamount(double amount);

    void displayPayment();
};

#endif // CASHPAYMENT_H
