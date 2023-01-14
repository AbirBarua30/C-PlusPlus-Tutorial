#include <iostream>

using namespace std;

int main(){

    int position[] = {23, 45, 56,73, 88, 200};
    int* p = position;

    // cout<<"the value at *p[0] is "<< *p<<endl;
    // cout<<"the value at *p[1j] is "<< *(p+1)<<endl;
    // cout<<"the value at *p[2] is "<< *(p+2)<<endl;
    // cout<<"the value at *p[3] is "<< *(p+3)<<endl;

    p++;
    cout<<*p;
    ++p;
    cout<<*p;
    cout<<*(p++);
    cout<<*p;

return 0;
}