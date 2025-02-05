#include "premiumsavingsaccount.h"
#include <iostream>
PremiumSavingsAccount::PremiumSavingsAccount(int accountNumber, double balance, double interestRate, double bonus)
    :savingsaccount(accountNumber,balance,interestRate)
{
    m_accountNumber = accountNumber;
    m_balance = balance;
    m_interestRate = interestRate;
    m_bonus = bonus;
    cout<<"premiumsavingaccount contructor called"<<endl;
}
PremiumSavingsAccount::~PremiumSavingsAccount()
{
    cout<<"premiumsavingaccount distructor called"<<endl;
}
void PremiumSavingsAccount::displayPremiumAccount()
{

}
