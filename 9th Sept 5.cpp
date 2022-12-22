#include <iostream>
using namespace std;
class shape
{
  protected: 
  float area;
};
class circle : public shape
{
	float radius;
	public: 
	void set_c()
	{
		cout<<"Enter the radius of the circle : ";
		cin>> radius;
	}
	void display_c()
	{
		area = 3.14 * radius * radius;
		cout << "The area of the circle is : "<<area<<endl;
	}
};
class triangle : public shape
{
	float base;
	float height;
	public: 
	void set_t()
	{
		cout<<"Enter the base and height of the triangle : ";
		cin>> base >>height;
	}
	void display_t()
	{
		area = 0.5 * base * height;
		cout << "The area of the triangle is : "<<area<<endl;
	}
	
};
class rectangle : public shape
{
	float length;
	float breadth;
	public: 
	void set_r()
	{
		cout<<"Enter the length and breadth of the rectange : ";
		cin>>length>>breadth;
	}
	void display_r()
	{
		area = length * breadth;
		cout << "The area of the rectangle is : "<<area<<endl;
	}	
};
int main()
{
	circle a;
	triangle b;
	rectangle c;
	a.set_c();
	b.set_t();
	c.set_r();
	a.display_c();
	b.display_t();
	c.display_r();
	return 0;
}
