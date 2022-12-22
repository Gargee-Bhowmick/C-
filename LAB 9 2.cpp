#include <iostream>
#include <conio.h>
using namespace std;
class insert
{
	private : 
	int a[10];
	public : 
	friend void operator>>(istream &in , insert &i)
	{
		int c;
		cout<<"Enter the elements : \n";
		for(c = 0 ; c<10 ; c++)
		{
			in >> i.a[c];
		}
	}
	friend void operator<<(ostream &out , insert &i)
	{
		int c;
		out<<"The elements are as follows : \n";
		for(c=0;c<10;c++)
		{
			out << i.a[c]<<endl;
		}
	}
};
int main()
{
	insert i;
	cin >> i;
	cout << i;
	getch();
	return 0;
}
