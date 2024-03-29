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
    cout << "\naccount2: " << account2.getName() << " balance is $"
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

Reading a Deposit Amount from the User and Making a Deposit
Line 19 prompts the user to enter a deposit amount for account1. Line 20 declares local
variable depositAmount to store each deposit amount entered by the user. We did not initialize 
depositAmount, because as you’ll learn momentarily, variable depositAmount’s value will be 
input by the user’s input.

Line 21 reads the deposit amount from the user and places the value into local variable
depositAmount. Line 22 displays the deposit amount. Line 23 calls object account1’s
deposit member function with the depositAmount as the member function’s argument.
When the member function is called, the argument’s value is assigned to the parameter
depositAmount of member function deposit (line 20 of Fig. 3.8); then member function
deposit adds that value to the balance. Lines 26–29 (Fig. 3.9) output the names and 
balances of both Accounts again to show that only account1’s balance has changed. 
Line 31 prompts the user to enter a deposit amount for account2. Line 32 obtains the
input from the user. Line 33 displays the depositAmount. Line 34 calls object account2’s
deposit member function with depositAmount as the member function’s argument; then
member function deposit adds that value to the balance. Finally, lines 37–40 output the
names and balances of both Accounts again to show that only account2’s balance has
changed.

Duplicated Code in the main Function
The six statements at lines 14–15, 16–17, 26–27, 28–29, 37–38 and 39–40 are almost
identical. Each outputs an Account’s name and balance, and differs only in the Account
object’s name—account1 or account2. Duplicate code like this can create code maintenance 
problems when that code needs to be updated. For example, if six copies of the same
code all have the same error to fix or the same update to be made, you must make that
change six times, without making errors. Exercise 3.13 asks you to modify Fig. 3.9 to 
include function displayAccount that takes as a parameter an Account object and outputs
the object’s name and balance. You’ll then replace main’s duplicated statements with six
calls to displayAccount.
*/