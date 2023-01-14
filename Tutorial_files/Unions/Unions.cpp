#include <iostream>
using namespace std;
typedef union actors
{
    double weight;
    char firstChar;
    float height;
}act;

int main(){
    union actors Tom_Cruise;
        // Tom_Cruise.firstChar = 'T';
        Tom_Cruise.height = 5.6f;

    // cout<<Tom_Cruise.firstChar<<endl;
    cout<<Tom_Cruise.height<<endl;

    act Paul_walker;
        Paul_walker.firstChar = 'p';
    cout<<Paul_walker.firstChar<<endl;
return 0;
}