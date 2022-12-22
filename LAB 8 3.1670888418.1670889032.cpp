#include <iostream>
using namespace std;
  
class A {
public:
	A()
	{
		cout << "\nConstructor of A was called";
	}
	~A()
	{
		cout<<"\nDestructor of A was called";
	}
    void show()
    {
        cout << "\nThis is the function of A\n";
    }
};
  
class B : virtual public A {
	public : 
	B()
	{
		cout << "\nConstructor of B was called";
	}
	~B()
	{
		cout<<"\nDestructor of B was called";
	}
};
  
class C : virtual public A {
	public :
	C()
	{
		cout << "\nConstructor of C was called";
	}
	~C()
	{
		cout<<"\nDestructor of C was called";
	}
};
  
class D : public B, public C {
	public : 
	D()
	{
		cout << "\nConstructor of D was called";
	}
	~D()
	{
		cout<<"\nDestructor of D was called";
	}
};
  
int main()
{
    D object;
    object.show();
}
