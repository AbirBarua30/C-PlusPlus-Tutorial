// This file will contain an example of reference variable in c++

#include <iostream>

using namespace std;

long double touche = 6.75l;
float b = 5.6f;

void dua()
{
    string name;
    cout << "Hello there good afternoon! What is your name mate?" << endl;
    cin >> name;

    cout << "Nice to meet you " << name << ".";
}

int main(int argc, char const *argv[])
{
    int abir = 200;

    int &miley = abir; // reference variable
    miley = 140;
    cout << "This is the miley variable. " << miley << endl;
    cout << abir << endl;

    dua();
    return 0;
}
