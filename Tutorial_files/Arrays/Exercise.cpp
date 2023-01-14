#include <iostream>

using namespace std;

int main(){
    int i = 0;
    int pens[] = {5, 8, 4, 45};


    // while (i<4)
    // {
    //     cout<<pens[i]<<endl;
    //     i++;
    // }

    do
    {
        cout<<pens[i]<<endl;
        i++;
    } while (i<4);
    
    
return 0;
}