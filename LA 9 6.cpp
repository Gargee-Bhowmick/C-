#include <iostream>
using namespace std;
class dist{
	public:
		float feet;
	public : 
	void set()
	{
		cout<<"Enter the value of distance : ";
		cin>>feet;
	}
	dist operator== (dist D2)
	{
       if(feet == D2.feet)
       {
       	cout<<"Both distances are the same\n";
	   }
	   else 
	   {
	   	cout<<"Both the distances are not the same \n";
	   }
	}
};
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
		time operator>(time t)
		{
			time b;
	      if(hh>t.hh)
	      {
	      	b.hh = hh;
	      	b.mm = mm;
	      	b.ss = ss;
		  }
		  else if(hh==t.hh) 
		  {
		  	if(mm>t.mm)
		  	{
		  	b.hh = hh;
	      	b.mm = mm;
	      	b.ss = ss;
			  }
			  else if(mm==t.mm)
			  {
			  	if(ss>t.ss)
			  	{
			  		b.hh = hh;
	      	       b.mm = mm;
	      	       b.ss = ss;
				  }
				  else
				  {
				  	b.hh=t.hh;
		  	b.mm=t.mm;
		  	b.ss=t.ss;
				  }
			  }
			  else
			  {
			  	b.hh=t.hh;
		  	b.mm=t.mm;
		  	b.ss=t.ss;
			  }
		  }
		  else
		  {
		  	b.hh=t.hh;
		  	b.mm=t.mm;
		  	b.ss=t.ss;
		  }
		  return b;
		}
		void display()
		{
			cout<<"\nThe larger time is "<<hh<< " : "<<mm<<" : "<<ss<<endl;
		}
};
int main()
{
	dist D1 , D2;
	D1.set();
	D2.set();
    D1==D2;
    time t1 , t2 , t3;
    t1.set();
    t2.set();
    t3 = t1>t2;
    t3.display();
	return 0;
}
