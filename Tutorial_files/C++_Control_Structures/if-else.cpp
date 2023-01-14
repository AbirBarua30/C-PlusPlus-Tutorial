#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout<<"Please enter your age: ";
    cin>>age;

    // if (age<18)
    // {
    //     cout<<"You're not allowed at the party"<<endl;
    // }
    // else if(age == 18){
    //     cout<<"You'll be allowed at the party but you won't have access to all the food items at the oarty\n";
    // }
    // else{
    //     cout<<"You're allowed at the party an dwill have full access to all the food items.\n";
    // }
    

    //switch statement
    switch (age)
    {
    case 18:
        cout<<"Asshole!";
        break;
    case 19:
        cout<<"Fuck you!";
        break;
    case 20:
        cout<<"Get the fuck out of here, you fucking cunt";
        break;
    default:
    cout<<"You Motherfucker!!";
        break;
    }
    return 0;


}
