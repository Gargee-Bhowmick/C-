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
   	int * p;
   	public:
   	void set_m()
   	{
   		set_s();
   		p = new int(5);
   		int i;
   		cout<<"Enter the marks :\n";
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
int main()
{
	test ob;
	ob.set_m();
	ob.display_m();
	return 0;
}
