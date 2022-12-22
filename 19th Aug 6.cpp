#include <iostream>
using namespace std;
void increment (int *i)
{
	++*i;
}
int main()
{
	int a;
	cout << "Enter the number " << endl;
	cin >> a;
	increment(&a);
	cout << "The incremented value is " << a << endl;
}
