#include <iostream>
using namespace std;
class dist{
	public:
		float feet;
		float inches;
	public : 
	void set()
	{
		cout<<"Enter the value of feet : ";
		cin>>feet;
		cout<<"Enter the value in inches : ";
		cin>>inches;
	}
	void get()
	{
		cout<<"The feet value : "<<feet<<endl<<"The inches value : "<<inches<<endl;
	}
	dist operator+(int x)
	{
		dist d;
		d.feet = feet+x;
		d.inches =inches + x;
		return d;
	}
};
int main()
{
	dist D1 , D2;
	D1.set();
	int x;
	cout<<"Enter the integer you want to add : ";
	cin>>x;
	D2 = D1+x;
	D2.get();
	return 0;
}
