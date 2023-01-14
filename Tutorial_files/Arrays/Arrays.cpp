#include <iostream>
#include <iomanip>
using namespace std;

 
int main()
{
    // First way to declare arrays
    // int items[] = {23, 54, 500, 657, 2000};

    // cout << items[0] << endl;
    // cout << items[1] << endl;
    // cout << items[2] << endl;
    // cout << items[3] << endl;
    // cout << items[4] << endl;

    // // second way

    // int list[5];

    // list[0] = 200;
    // list[1] = 300;
    // list[2] = 400;
    // list[3] = 500;
    // list[4] = 600;

    // cout << setw(4) << list[0] << endl;
    // cout << setw(4) << list[1] << endl;
    // cout << setw(4) << list[2] << endl;
    // cout << setw(4) << list[3] << endl;
    // cout << setw(4) << list[4] << endl;

    /*--------------Changing values in arrays--------------*/

    int position[] = {1, 2, 3, 4};
    // cout << position[0] << endl;
    // cout << position[1] << endl;
    // cout << position[2] << endl;
    // cout << position[3] << endl;

    // How to change the value

    position[3] = 10;
    // cout << "This is after we change the value in the array:" << endl;
    // cout << position[3] << endl;

    // How to print the values in an array using loop:

    for (int i = 0; i < 4; i++)
    {
        cout<<"The value of position "<<i<<" is: "<<position[i]<<endl;
    }
    
    
    return 0;
}