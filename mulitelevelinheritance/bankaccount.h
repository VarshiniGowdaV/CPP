#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
using namespace std;
class bankaccount
{
public:
    int m_accountNumber;
    double m_balance;
    bankaccount(int accountNumber,double balance);
    ~bankaccount();
    void displayAccount();

};

#endif // BANKACCOUNT_H
