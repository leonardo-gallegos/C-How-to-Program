// Fig. 3.5: AccountTest.cpp
// Using the Account constructor to initialize the name data
// member at the time each Account object is created
#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    // Create two Account objects
    Account account1{"Jane Green"};
    Account account2{"John Blue"};

    // display initial value of name for each Account
    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;
}

/*
The AccountTest program (Fig. 3.5) initializes two different Account objects using the
constructor. Line 11
    Account account1{"Jane Green"};
creates the Account object account1. When you create an object, C++ implicitly calls the
class’s constructor to initialize that object. If the constructor has parameters, you place the
corresponding arguments in braces, { and }, to the right of the object’s variable name. In
line 11, the argument "Jane Green" initializes the new object’s name data member. Line 12
    Account account1{"Jane Green"};
repeats this process, passing the argument "John Blue" to initialize name for account2.
Lines 15–16 use each object’s getName member function to obtain the names and show
that they were indeed initialized when the objects were created. The output shows different
names, confirming that each Account maintains its own copy of data member name
*/