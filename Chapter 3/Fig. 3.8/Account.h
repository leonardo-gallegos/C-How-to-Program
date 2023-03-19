// Fig. 3.8: Account.h
// Account class with name and balance data members, and a
// constructor and deposit function that each perform validation.
#include <string>

class Account {
public:
    // Account constructor with two parameters
    Account(std::string accountName, int initialBalance)
        : name{accountName} { // assign accountName to data member name

        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        if (initialBalance > 0) { // if the initialBalance is valid
            balance = initialBalance; // assign it to data member balance
        }
    }

    // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance = balance + depositAmount; // add it to the balance
        }
    }

    // function returns the account balance
    int getBalance() const {
        return balance;
    }

    // function that sets the name
    void setName(std::string accountName) {
        name = accountName;
    }

    // function that returns the name
    std::string getName() const {
        return name;
    }

private:
    std::string name; // account name data member
    int balance{0}; // data member with default initial value
}; // end class Account

/*
Account’s Member Functions Can All Use balance
The statements in lines 15, 22 and 28 use the variable balance even though it was not 
declared in any of the member functions. We can use balance in these member functions
because it’s a data member in the same class definition.
*/