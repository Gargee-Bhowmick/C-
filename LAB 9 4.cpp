#include <iostream>
#include <string.h>
using namespace std;
class st{
	private :
		char *s;
	public:
		st()
		{
			s = new char[100];
		}
		st(int x)
		{
			cin>>x;
			s = new char[x];
			cout<<"Enter the string ";
			cin>>s;
		}
		void display()
		{
			cout <<"The string is : "<<s;
		}
		st operator +(st t)
		{
			st b ;
			strcpy(b.s,s);
			strcat(b.s," ");
			strcat(b.s,t.s);
			return b;
		}
};
int main()
{
	st s1(40),s2(40),s3;
	s3 = s1 + s2;
	s3.display();
	return 0;
}
