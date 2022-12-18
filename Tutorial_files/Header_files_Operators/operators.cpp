// This file will include different operators in C++.
// Quick note:

/*
    you can use "\n" to start a new line or you can use "endl" both do the same.
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])

{
    int a = 4, b = 2;

    // Arithematic operators:-

    cout << "A+B is equal to " << a + b << endl; // "+" is for adition

    cout << "A-B is equal to " << a - b << endl; // "-" is for subtraction

    cout << "A*B is equal to " << a * b << endl; // "*" is for Multiplication

    cout << "A/B is equal to " << a / b << endl; // "/" is for division

    cout << "A%B is equal to " << a % b << endl; // "%" is for division but returns the remainder

    cout << "A++ is equal to " << a++ << endl; // Adds 1 to "a" and prints the initial value of "a".

    cout << "++A is equal to " << ++a << endl; // Adds 1 to "a" and prints the current value of "a"

    cout << "A-- is equal to " << a-- << endl; // same as "a++" just subtracts 1.

    cout << "--A is equal to " << --a << endl; // same as "++a" just subtracts 1.

    cout << endl;

    // Assignment Operators --> These Operators help us to assign values to variables.
    // Example below:-

    // int a = 10, b = 200, c = 800; 'a', 'b' and 'c' are the variables and '=' is the assignment operator

    // Comparison Operators

    // Keep in mind the code below will return 0 it's false and 1 if it's true.
    cout << "Below are the examples of Comparison operators:-" << endl;

    cout << "A==b is " << (a == b) << endl;

    cout << "A!=b is " << (a != b) << endl;

    cout << "A>b is " << (a > b) << endl;

    cout << "A<b is " << (a < b) << endl;

    cout << "A>=b is " << (a >= b) << endl;

    cout << "A<=b is " << (a <= b) << endl;

    return 0;
}
