 // Fig. 3.9: AccountTest.cpp
 // Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    // display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $"
        << account1.getBalance();
    cout << "account2: " << account2.getName() << " balance is $"
        << account2.getBalance();
}
