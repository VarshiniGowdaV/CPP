#include <iostream>
#include "PremiumSavingsAccount.h"
#include "savingsaccount.h"
#include "bankaccount.h"
using namespace std;
int main() {
    PremiumSavingsAccount myAccount(24,2000,2.333,3000);
     myAccount.displayAccount();
     myAccount.displaySavingsAccount();
     myAccount.displayPremiumAccount();

    return 0;
}
