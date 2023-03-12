// Fig. 3.8: Account.h
// Account class with name and balance data members, and a
// constructor and deposit fucntion that each perform validation.
#include <string>

class Account {
public:
    // Account constructor with two parameters
    Account(std::string accountName, int initialBalance)
        : name{accountName} { // assign accountName to data member name

        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its defalut initial value of 0
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
    
private:
    std::string name;
    int balance{0};
};