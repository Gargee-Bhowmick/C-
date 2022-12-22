#include <iostream>
using namespace std;
	inline void area(float a)
	{
		cout << "Area of circle = " << 3.142 * a * a << " sq. units" <<endl;
	}
	inline void area (int a , int b )
	{
		cout << "Area of rectangle = " << a * b << " sq. units"<< endl;
	}
	inline void area (float a , float b)
	{
		cout << "Area of triangle = " << (1.0/2.0) * a * b << " sq. units" << endl; 
	}
void input()
{
	float a , b , c ;
	int e , f ;
	cout << "Enter the radius of circle" << endl;
	cin >> a;
	cout << "Enter the length and breadth of rectangle" << endl;
	cin >> e >> f ;
	cout << "Enter the base and height of triangle" << endl;
	cin >> b >> c ;
	area(a);
	area(e , f);
	area(b , c);
}
int main()
{
 input();
	return 0;
}
