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
Account Class’s Constructor Definition
Lines 8–11 of Fig. 3.4
    explicit Account(std::string accountName) 
        : name{accountName} { // member initializer
        // empty body
    }
define Account’s constructor. Normally, constructors are public.
A constructor’s parameter list specifies pieces of data required to initialize an object.
Line 8
    explicit Account(std::string accountName) 
indicates that the constructor has one string parameter called accountName. When you
create a new Account object, you must pass a person’s name to the constructor, which will
receive that name in the parameter accountName. The constructor will then use accountName 
to initialize the data member name. 
*/