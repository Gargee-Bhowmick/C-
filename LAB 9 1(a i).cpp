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
	dist operator+ (dist D2)
	{
		dist D3;
		D3.feet = feet + D2.feet;
		D3.inches = inches + D2.inches;
		return D3;
	}
};
int main()
{
	dist D1 , D2, D3;
	D1.set();
	D2.set();
	D3 = D1 + D2;
	D3.get();
	return 0;
}
