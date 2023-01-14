// This file includes what is a pointer and how to use it

// A pointer in simple words is a variable that stores the address of other variables

#include <iostream>

using namespace std;

int main()
{
    int Miley = 15;
    bool Dua = true;
    // char Bats = 'b';
    // All the variables down there are pointers

    int *a = &Miley;
    bool *b = &Dua;
    // char *c = &Bats;

    //& is "address of operator" or reference operator

    // The address of variables on my memory

    cout << "Miley: " << a << endl;
    cout << "Dua: " << b << endl;
    // cout<<"bats: "<<c<<endl;

    // "*" is a value at operator. It is used to know the value at a specific address.

    // example

    cout << "The value of a (That's miley) is: " << *a << endl;

    // Pointer to Pointer

    int **pint = &a;

    cout << "The address of pointer a in my memory is: " << pint << endl;                            // This will print the address of "a";
    cout << "The Value of pointer a in my memory is: " << *pint << endl;                             // This will print the value at the address of "a".
    cout << "The Value of (the address of pointer a) pointer a in my memory is: " << **pint << endl; // This will proint the actual value of miley (since a is a pointer to Miley: see the code above)

    return 0;
}