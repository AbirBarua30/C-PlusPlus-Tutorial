// This file is going to containg some examples of manipulators......

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    // First example fo manipulator..

    // cout << "Hello there good morning!" << endl
    //      << "How are you doing mate?" << endl;
    // // endl is a manipulator and you know what it does by now..

    // cout << setw(5) << "I" << endl;

    // cout << setw(5) << "am" << endl;

    // cout << setw(5) << "Abir" << endl;

    // cout << setw(5) << "Barua" << endl
    //      << endl;

    // cout << "I" << endl;

    // cout << "am" << endl;

    // cout << "Abir" << endl;

    // cout << "Barua" << endl;


    /* ............Operator precedence..............*/

    const int a = 45, b = 55;
    int c = ((((a*5)+b)-10)+22);    

    cout<<c<<endl;

    return 0;
}
