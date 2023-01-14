#include <iostream>
using namespace std;

/* You can also use it this way

    struct Singer
    {
        int age;
        char firstChar;
        long double salary;
    };

*/

// but it is a bit more easy the way below
typedef struct Singer
{
    int age;
    char firstChar;
    long double salary;
} sing;
 
int main()
{

    struct Singer Miley;
        Miley.age = 30;
        Miley.firstChar = 'M';
        Miley.salary = 300000000l;

    struct Singer Dua_Lipa;

        Dua_Lipa.age = 25;
        Dua_Lipa.firstChar = 'D';
        Dua_Lipa.salary = 20000000l;

    sing Selena_Gomez;
        Selena_Gomez.age = 29;
        Selena_Gomez.firstChar = 'S';
        Selena_Gomez.salary = 250000000l;

    cout << "Miley's age is " << Miley.age << endl;
    cout << "Miley's first char is " << Miley.firstChar << endl;
    cout << "Miley's salary is " << Miley.salary << endl;

    cout << "-----------------Dua Lipa's Data--------------------------" << endl;

    cout << "Age " << Dua_Lipa.age << endl;
    cout << "First Char " << Dua_Lipa.firstChar << endl;
    cout << "salary " << Dua_Lipa.salary << endl;

    cout << "-----------------Selena Gomez's Data--------------------------" << endl;

    cout << "Age " << Selena_Gomez.age << endl;
    cout << "First Char " << Selena_Gomez.firstChar << endl;
    cout << "salary " << Selena_Gomez.salary << endl;

    return 0;
}