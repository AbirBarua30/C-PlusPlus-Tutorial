#include <iostream>
using namespace std;
int c = 200; // This is a global Variable
int main()
{
    // int a, b, c; //These are local variables.
    // cout<<"First Value: ";
    // cin>>a;
    // cout<<"Second Value: ";
    // cin>>b;
    // c = a+b;
    // cout<<c<<endl;//This will print the local variable c.
    // cout<<::c;// To print the global variable's value you can use the "::" scope operator.

    float a = 34.5f;
    long double b = 34.5l;

    cout << "The value of a is: " << a << endl
         << "The value of b is: " << b << endl;

    cout << "The size of the value is: " << sizeof(34.5) << endl;
    cout << "The size of the value is: " << sizeof(34.5f) << endl;
    cout << "The size of the value is: " << sizeof(34.5F) << endl;
    cout << "The size of the value is: " << sizeof(34.5l) << endl;
    cout << "The size of the value is: " << sizeof(34.5L) << endl;
}

/*
    !Important:- Keep in mind that if there is decimal value in your program the compiler will understand it as double by default, so to change this use "f" at the end of the value to make it a floating value and "l" to make it a long double value.
    */