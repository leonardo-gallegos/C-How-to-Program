// Fig. 2.5: fig02_05.cpp
// Adition program that displays the sum of two integers.
#include <iostream> // enables program to perform input and output

// function main begins program execution
int main() {
    // declaring and initializing variables
    int number1{0}; // first integer to add (initialized to 0)
    int number2{0}; // second integer to add (initialized to 0)
    int sum{0}; // sum of number1 and number 2 (initialized to 0)

    std::cout << "Enter first integer: "; // prompt user for data
    std::cin >> number1; // read first integer from user into number1

    std::cout << "Enter second integer: "; // prompt user for data
    std::cin >> number2; // read second integer from user into number2

    sum = number1 + number2; // add the numbers; store result in sum

    std::cout << "Sum is " << sum << std::endl; // display sum; end line
} // end function main
/*
Lines 8–10 also initialize each variable to 0 by placing a value in braces ({ and })
immediately following the variable’s name—this is known as list initialization, which
was introduced in C++11. Previously, these declarations would have been written as:
    int number1 = 0; // first integer to add (initialized to 0)
    int number2 = 0; // second integer to add (initialized to 0)
    int sum = 0; // sum of number1 and number2 (initialized to 0)

All variables must be declared with a name and a data type before they can be used in
a program. Several variables of the same type may be declared in one declaration—for
example, we could have declared and initialized all three variables in one declaration by
using a comma-separated list as follows:
    int number1{0}, number2{0}, sum{0};
This makes the program less readable and prevents us from providing comments that describe
each variable’s purpose. 
*/