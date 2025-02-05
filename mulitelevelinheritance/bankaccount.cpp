#include "bankaccount.h"

bankaccount::bankaccount(int accountNumber,double balance)
{
    m_accountNumber = accountNumber;
    m_balance = balance;
    cout<<"bankaccount constructor called"<<endl;
}
bankaccount::~bankaccount()
{
    cout<<"bankaccount distructor called"<<endl;
}
void bankaccount::displayAccount()
{

}
