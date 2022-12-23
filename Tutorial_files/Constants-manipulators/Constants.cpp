#include <iostream>
// #include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    // Below is a basic example of changing values of variables;

    int a = 100;
    cout << "The value of a was " << a << endl;
    a = 200;
    cout << "The value of a is " << a << endl;

    // So normally we can change values of variables but if you don't want the value to be changed you can use constants.

    const int b = 45;
    const float c = 45.6f;
    const char f = 'd';

    cout << b << endl;
    cout << c << endl;
    cout << f << endl;
    cout << sizeof(c);

    return 0;
}
