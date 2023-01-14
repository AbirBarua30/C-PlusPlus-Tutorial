#include <iostream>
using namespace std;

// Function prototyping

// int sum(int a, int b); // Acceptable
// int sum(int a, b); // Not-Acceptable
int sum(int, int); // Acceptable
void greet();
int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the Second number: ";
    cin >> num2;

    cout << "The sum is " << sum(num1, num2) << "." << endl;
    greet();
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void greet(){
    cout<<"\nHello there, Good Morning";
}

/*
    In the program "num1" and "num2" are actual parameters and "a" and "b" are formal parameters and are going to take the values from actual parameters. 
*/