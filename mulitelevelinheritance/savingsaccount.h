#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "bankaccount.h"
class savingsaccount:public bankaccount
{
public:

    double m_interestRate;
    savingsaccount(int accountNumber,double balance,double interestRate);
    ~savingsaccount();
    void displaySavingsAccount();
};

#endif // SAVINGSACCOUNT_H
