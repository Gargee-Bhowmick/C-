#include <iostream>
using namespace std;
template <class t>
void display(t d)
{
	try{
		throw d;
		cout<<"The element is : "<<d;
	}
	catch(int a)
	{
		cout<<"Exception caught: int type\n";
	}
	catch(float b)
	{
		cout<<"Exception caught: float type\n";
	}
	catch(char c)
	{
		cout<<"Exception caught: char type\n";
	}
}
int main()
{
	int a , b;
	float c;
	char d;
	try{
		cout<<"Enter two integers, one floating point and a character : \n";
		cin>>a>>b>>c>>d;
		display(a);
		display(c);
		display(d);
		if(b==0)
		throw 1;
		cout<<"Division : "<<a/b<<endl;
	}
	catch(...)
	{
		cout<<"Exception caught!!\n";
	}
	return 0;
}
