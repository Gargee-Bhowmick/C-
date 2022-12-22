#include <iostream>
using namespace std;
class number
{
	static int c;
	public:
		void count()
		{
			++c;
			cout<<"\n c="<<c;
		}
};
int number::c=0;
int main()
{
	number a,b,c;
	a.count();
	b.count();
	c.count();
	return 0;
}
