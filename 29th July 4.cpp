#include <iostream>
#include <string>
using namespace std;
class complex{
	public:
    int real[10];
    int imaginary[10];
};
int main()
{
	complex c;
	int i=0;
	cout<<"Enter the 10 imaginary numbers"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<"Enter the real part of number "<<i+1<<endl;
		cin>>c.real[i];
		cout<<"Enter the imaginary part of number "<<i+1<<endl;
		cin>>c.imaginary[i];
	}
	cout<<"The imaginary numbers are as follows:"<<endl;
	for(i=0;i<10;i++)
	{
		cout<<c.real[i]<<" + "<<c.imaginary[i]<<"i"<<endl;
	}
	return 0;
}
