#include <iostream>
using namespace std;
class number 
{
	static int c;
	int k;
	public:
	void zero()
	{
		k=0;
		}	
	void count()
	{
		++c;
		++k;
		cout<<"\nvalue of c ="<<c<<"Address of c ="<<&c;
		cout <<"\nvalue of k = "<<k<<"Address of k ="<<&k;
	}
};
int number::c=0;
int main()
{
	number A,B,C;
	A.zero();
	B.zero();
	C.zero();
	A.count();
	B.count();
	C.count();
	return 0;
}
