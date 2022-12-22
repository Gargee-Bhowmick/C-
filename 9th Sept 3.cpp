#include <iostream>
#include <string.h>
using namespace std;
class student
{
	string name;
	int roll_no;
	int age;
	
	public:
		
		void set_s()
		{
			printf("Enter the name of the student : ");
			fflush(stdin);
			getline(cin,name);
			printf("Enter the roll number : ");
			cin >> roll_no;
			printf("Age : ");
			cin>>age;
		}
		
		void display_s()
		{
			cout<<"Name : "<<name<<"\nRoll Number : "<<roll_no<<"\nAge : "<<age<<endl;
		}
};
class test : public student
{
	protected:
   	float * p;
   	public:
   	void set_m()
   	{
   		set_s();
   		p = new float(5);
   		int i;
   		cout<<"Enter the five subject's marks(out of 100) :\n";
   		for(i=0;i<5;i++)
   		{
   			cin>>p[i];
		   }
	   }
	   void display_m()
	   {
	   	display_s();
	   	cout<<"The marks are : ";
	   	int i;
	   	for(i=0;i<5;i++)
	   	{
	   		cout<<p[i]<<" ";
		   }
	   }
};
class result : public test
{
	float total ;
	float percentage;
	public:
		void calculate()
		{
			set_m();
			total = 0.0;
			int i;
			for(i=0;i<5;i++)
			{
				total = total + p[i];
			}
			percentage = (total/500.0)*100.0;
		}
		void display_r()
		{
			display_m();
			cout << "\nTotal marks : "<<total<<endl<<"Total percentage : "<<percentage<<" %";
		}
};
int main()
{
	result ob;
	ob.calculate();
	ob.display_r();
	return 0;
}
