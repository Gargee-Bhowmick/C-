#include <iostream>
using namespace std;
template <class t1 , class t2>
void display(t1 a , t2 b)
{
	cout<<"The values are : "<<a<<" "<<b<<endl;
}
int main()
{
	int a ; float b ; char c;
	cout << "Enter the char , integer and float values respectively : ";
	cin>>c>>a>>b;
	display(a , b);
	display(b , c);
	display(a , c);
	return 0;
}
