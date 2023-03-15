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

    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
        << account1.getBalance();
    cout << "\n\naccount2: " << account2.getName() << " balance is $"
        << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
}
