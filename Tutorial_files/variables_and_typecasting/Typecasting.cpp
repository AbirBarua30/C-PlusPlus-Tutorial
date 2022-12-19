// This file is going to contain examples of typecasting and how to do it.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a = 55;
	float b = 65.6;

	cout << "The value of a is " << a << endl;
	cout << "The value of b is " << (int)b << endl; // Here we converted the float into integer using typecasting. you can either use typecasting the way mentioned above or you can also use it like this:
	/*
		cout<<"The value of b is "<< int(b) << endl;
		this will also have the same effect.
	*/

	return 0;
}