 #include <iostream>
using namespace std;
class s
{
	public:
void swapValue(int x , int y)
{
	int t;
	t = x;
	x = y;
	y = t;
	cout << "The swapped values using swap by value are : " << x << " and " <<  y  << endl;
}
void swapReference (int &x , int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
void swapAddress (int *x , int *y)
{
	int t;
	t = *x ;
	*x = *y;
	*y = t;
}
};
int main()
{
	s obj;
	int a , b ;
	cout << "Enter two numbers "<< endl;
	cin >> a >> b;
	obj.swapValue(a , b);
	obj.swapReference(a , b);
	cout << " Swapped values using swap by reference are : " << a << " and " << b << endl;
	obj.swapAddress(&a , &b);
	cout << " Swapped values using swap by address are : " << a << " and " << b << endl;	
	return 0;
}
