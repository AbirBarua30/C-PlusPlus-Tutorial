//This file contains examples of basic input and output in c++

/*
    "<<" this operator is called insertion operator.
    ">>" this operator is called extraction operator.
*/

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num1,num2;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the Second number: ";
    cin>>num2;

    cout<<"The sum of the values is "<<num1+num2;
    return 0;
}
