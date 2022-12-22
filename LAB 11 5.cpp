#include <iostream>
using namespace std;
int main()
{
	int a , b;
	try{
		cout<<"Enter two numbers : \n";
		cin>>a>>b;
		if(b==0)
		throw 1;
		cout<<"Division : "<<a/b;
	}
	catch(int a)
	{
		cout<<"Divisor 0. Hence, division not possible.";
	}
	return 0;
}
