//continue statement skips the current iteration and jumps to the next iteration
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    for(int i = 0; i<=50; i++){

        if (i==5)
        {
            continue;
        }
        cout<<i<<endl;
        
    }
    return 0;
}
