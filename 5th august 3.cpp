#include <iostream>
using namespace std;
class sqcb
{
	float a;
  public:
  	void set(float x)
  	{
  		a=x;
	}
	inline float square ()
	{
		return a * a ;
	}
	inline float cube ()
	{
		return a * a * a ;
	}
	void input ()
	{
		float z;
		cout << "Enter the number whose square and cube is to be found out " << endl;
		cin >> z;
		set(z);
	}
	void display()
	{
		cout << "The square is " << square() << endl << "The cube is " << cube() << endl;
	}
};
int main()
{ 
   sqcb ob;
   ob.input();
   ob.display();
	return 0;
}
