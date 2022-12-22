#include <iostream>
using namespace std;
class complex
{
	int real;
	int imaginary;
	public:
		complex()
		{
			cout<<"Non - parameterised Costructor was called "<<endl;
			real = 0;
			imaginary = 0;
		}
		complex(int i, int j)
		{
			cout<<"Parameterised constructor has been called"<<endl;
			real =  i;
			imaginary = j;
		}
		complex (complex &ob){
			cout<<"Copy constructor has been called"<<endl;
			real = ob.real;
			imaginary = ob.imaginary;
		}
		void display()
		{
			cout<<"The complex number is : "<<real<< " + "<<imaginary<<"i"<<endl;
		}
		~complex()
		{
			cout<<"Destructor has been called"<<endl;
		}
};
int main()
{
	complex c1;
	c1.display();
	complex c2(20,30);
	c2.display();
	complex c3(c2);
	c3.display();
}
