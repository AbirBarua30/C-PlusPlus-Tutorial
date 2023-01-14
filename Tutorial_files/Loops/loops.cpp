#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    // Example of for loop:-

    /*
        Syntax of for-loop

        for (initialization; condition; updation){
            loop-body(code here);
        }
    */

    // for (int i = 0; i < 100; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }
    
    //Example of infinite for loop:-
	
	
	for (int i = 1; i<=20; i++){
		cout<<setw(4)<<i<<endl;
	}

    // 
    

    //While loop;
    // Syntax:
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    /*int miley = 0;
    while (miley <= 100)
    {
        cout<<miley<<endl;
        miley++;
    }*/
    
    return 0;
}
