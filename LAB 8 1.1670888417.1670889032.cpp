#include <iostream>
using namespace std;
class A
{
	protected :
		int a;
	public :
	A ()
	{
		cout<<"\nConstructor of A was called";
		a = 10;
	}
	~A()
	{
		cout<<"\nDestructor of A was called";
	}
};
class B
{
	protected:
		int b;
	public:
	B()
	{
		cout << "\nConstructor of B was called";
		b = 20;
	}
	~B()
	{
		cout<<"\nDestructor of B was called";
	}
};
class C : public A , public B
{
	protected:
		int c;
	public : 
	C()
	{
		cout << "\nConstructor of C was called";
		b = 30;
	}
	~C()
	{
		cout<<"\nDestructor of C was called";
	}
};
int main()
{
	C c;
	return 0;
}
