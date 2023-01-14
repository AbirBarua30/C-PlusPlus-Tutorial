#include <iostream>
using namespace std;

int multiply(int x, int y);

int a;

int b;

void swap(){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter the First number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    cout<<"The answer is: "<<multiply(x, y)<<endl;
    return 0;
}

int multiply(int x, int y)
{
    int z = x * y;
    return z;
}