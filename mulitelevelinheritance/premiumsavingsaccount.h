#ifndef PREMIUMSAVINGSACCOUNT_H
#define PREMIUMSAVINGSACCOUNT_H
#include "savingsaccount.h"
class PremiumSavingsAccount:public savingsaccount
{
public:
    double m_bonus;
    PremiumSavingsAccount(int accountName,double balance,double interestRate,double bonus);
    ~PremiumSavingsAccount();
    void displayPremiumAccount();
};

#endif // PREMIUMSAVINGSACCOUNT_H
