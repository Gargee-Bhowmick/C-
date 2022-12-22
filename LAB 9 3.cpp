#include <iostream>
using namespace std;
class complex{
	public:
		float real;
		float imaginary;
	public : 
	void set()
	{
		cout<<"Enter the value of real part : ";
		cin>>real;
		cout<<"Enter the value in imaginary part : ";
		cin>>imaginary;
	}
	void get()
	{
		cout<<real<<" + "<<imaginary<<"i"<<endl;
	}
	complex operator+ (complex D2)
	{
		complex D3;
		D3.real = real + D2.real;
		D3.imaginary = imaginary + D2.imaginary;
		return D3;
	}
		void  operator++ ()
	{
         ++real;
         ++imaginary;
	}
		void  operator++ (int)
	{
         cout<<real++<<" + "<<imaginary++<<"i";
	}
};
int main()
{
	complex D1 , D2, D3;
	D1.set();
	D2.set();
	D3 = D1 + D2;
	D3.get();
	cout<<"Value after pre - increament of the result : ";
	++D3;
	D3.get();
	cout<<endl;
	cout <<"The value after post-increment of the result : ";
	D3++;
	return 0;
}
