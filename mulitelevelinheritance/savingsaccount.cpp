#include "savingsaccount.h"

savingsaccount::savingsaccount(int accountNumber,double balance,double interestRate)
    :bankaccount(accountNumber,balance)
{
    m_accountNumber = accountNumber;
    m_balance = balance;
    m_interestRate = interestRate;
    cout<<"savingsaccount contructor called"<<endl;
}
savingsaccount::~savingsaccount()
{
    cout<<"savingsaccout distructor called"<<endl;
}
void savingsaccount::displaySavingsAccount()
{

}
