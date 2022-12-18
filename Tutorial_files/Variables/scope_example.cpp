#include <iostream>

using namespace std;
int global = 800; // This is a global Variable because it is declared outside any function.
void sum()
{
    int a = 100, b = 500; // This is a local variable because it is declared in the function sum.
}
int main(int argc, char const *argv[])
{
    // We can access global variable everywhere in the codebase, so we are going to print it;
    //  but if we try to output the variable "a" the compiler is going to throw an error.
    cout << global;
    // cout<<a;
    return 0;
}
