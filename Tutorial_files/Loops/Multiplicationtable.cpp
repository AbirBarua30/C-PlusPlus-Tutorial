// #include <iostream>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int num;
//     cout << "Enter the number: ";
//     cin >> num;
//     int i = 1;

//     // Multiplication using for loop

//     for (int i = 1; i <= 15; i++)
//     {
//         cout << num * i << endl;
//     }

//     cout << endl;
//     cout << endl;

//     // Multiplication using While loop

//     while (i <= 15)
//     {
//         cout << num * i << endl;
//         i++;
//     }
//     cout << endl;
//     cout << endl;

//     // Multiplication using do-while loop

//     do
//     {
//         cout << num * i << endl;
//         i++;
//     } while (i <= 15);

//     return 0;
// }

#include <iostream>

using namespace std;

int num, i = 1;

void forplus()
{

    for (int i = 0; i <= 10; i++)
    {
        cout << num * i << endl;
    }
}

void whileplus()
{
    while (i <= 10)
    {
        cout << num * i << endl;
        i++;
    }
}

void dowhileplus()
{
    do
    {
        cout << num * i << endl;
        i++;
    } while (i <= 10);
}

int main(int argc, char const *argv[])
{

    cout << "Enter the number: ";
    cin >> num;
    forplus();
    whileplus();
    dowhileplus();
    return 0;
}