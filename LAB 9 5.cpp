#include <iostream>
using namespace std;
class time{
	private : 
	int hh;
	int mm;
	int ss;
	public:
		void set()
		{
			cout<<"Enter the time in hour minute and seconds format :";
			scanf("%d %d %d",&hh,&mm,&ss);
		}
		void operator==(time t)
		{
			if((hh==t.hh)&&(mm==t.mm)&&(ss==t.ss))
			{
				cout<<"Both the time stamps are equal";
			}
			else
			{
				cout<<"Both the time stamps are not the same";
			}
		}
		void operator=(time t)
		{
			hh=t.hh;
			mm = t.mm;
			ss = t.ss;
		}
		void display()
		{
			cout<<"\nThe time is "<<hh<< " : "<<mm<<" : "<<ss<<endl;
		}
};
int main()
{
	time t1,t2,t3;
	t1.set();
	t2.set();
	t1==t2;
	t3=t2;
	t3.display();
	return 0;
}
