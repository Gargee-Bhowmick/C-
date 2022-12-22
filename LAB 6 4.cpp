#include <iostream>
using namespace std;
class demo
{
	int a;
	public :
		demo()
		{
			a = 1;
			cout<<"Object was created and defult constructor was called"<<endl;
		}
		~demo()
		{
			cout <<"Destructor was called and object was destroyed"<<endl;
		}
};
int main()
{
	demo obj1;
	return 0;
}

