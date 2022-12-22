#include <iostream>
using namespace std;
void swapReference (int &x , int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
int main()
{
	int a , b ;
	cout << "Enter two numbers "<< endl;
	cin >> a >> b;
	cout << " Swapped values before swap by reference are : " << a << " and " << b << endl;
	swapReference(a , b);
	cout << " Swapped values after swap by reference are : " << a << " and " << b << endl;	
	return 0;
}
