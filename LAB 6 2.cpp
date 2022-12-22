#include <iostream>
using namespace std;
class time
{
	int hour;
	int minute;
	public:
		time()
		{
			cout<<"Non - parameterised Costructor was called "<<endl;
			hour = 10;
			minute = 20;
		}
		time(int h, int m = 00)
		{
			cout<<"Parameterised constructor has been called"<<endl;
			hour = h;
			minute = m;
		}
		time(time &t)
		{
			cout<<"Copy constructor has been called"<<endl;
			hour = t.hour;
			minute = t.minute;
		}
		void display()
		{
			cout <<"The time is :- "<<hour<<" : "<<minute<<endl;
		}
};
int main()
{
	time t1;
	t1.display();
	time t2(11,30);
	t2.display();
	time t3(8);
	t3.display();
	time t4(t2);
	t4.display();
	return 0;
}




















