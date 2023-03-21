// Fig. 3.4: Account.h
// Account class with a constructor that initializes the account name.
#include <string>

class Account {
public:
    // constructor initializes data member name with parameter accountName
    explicit Account(std::string accountName)
        : name{accountName} { // member initializer
        // empty body 
    }

    // function to set the account name
    void setName(std::string accountName) {
        name = accountName;
    }

    // function to retrieve the account name
    std::string getName() const {
        return name;
    }
private:
    std::string name; // account name data member
}; // end class Account

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