
//break statement breaks out of loop.
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 100; i++)
    {
        cout<<i<<endl;

        if (i==52)
        {
            break;
        }
        
    }
    
    return 0;
}
