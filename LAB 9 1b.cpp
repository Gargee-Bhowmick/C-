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
	void  operator-- ()
	{
         --feet;
         --inches;
	}
};
int main()
{
	dist D1;
	D1.set();
	--D1;
	D1.get();
	return 0;
}
