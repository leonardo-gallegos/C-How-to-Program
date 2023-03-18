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
    cout << "\naccount2: " << account2.getName() << " balance is $"
        << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
        << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
        << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
        << account1.getBalance();
    cout << "\nAccount2: " << account2.getName() << " balance is $"
        << account2.getBalance() << endl;
}

/*
The main function in Fig. 3.9 creates two Account objects (lines 10–11) and attempts to
initialize them with a valid balance of 50 and an invalid balance of -7, respectively—for
the purpose of our examples, we assume that balances must be greater than or equal to zero. 
Lines 14–17 output the account names and balances, which are obtained by calling
each Account’s getName and getBalance member functions.

Displaying the Account Objects’ Initial Balances 
When member function getBalance is called for account1 from line 15, the value of
account1’s balance is returned from line 28 of Fig. 3.8 and displayed by the output statement 
in lines 14–15 (Fig. 3.9). Similarly, when member function getBalance is called for
account2 from line 17, the value of the account2’s balance is returned from line 28 of
Fig. 3.8 and displayed by the output statement (Fig. 3.9, lines 16–17). The balance of
account2 is initially 0, because the constructor rejected the attempt to start account2 with
a negative balance, so the data member balance retains its default initial value.
*/
