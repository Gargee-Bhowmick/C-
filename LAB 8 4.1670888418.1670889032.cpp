#include <iostream>
#include <string.h>
using namespace std;
class student
{
	string name;
	int roll_no;
	int age;
	public:
		
		student(string s , int r , int a)
		{
			name = s;
			roll_no = r;
			age = a;
		}
		
		void display_s()
		{
			cout<<"Name : "<<name<<"\nRoll Number : "<<roll_no<<"\nAge : "<<age<<endl;
		}
};
class sports
{
  protected: 
  float sports_activity;
  public:
  sports(float x)
  {
  	sports_activity = x;
	  }	
	void display()
	{
		cout<<sports_activity<<endl;
	}
};
class test : public student
{
	protected:
   	float * p;
   	public:
   	test(float * e , string s , int r , int m) : student (s , r, m) 
   	{
           p = new float [5];
           int i;
           for(i=0 ; i<5; i++)
           {
           	p[i] = e[i];
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
class result : public test , public sports
{
	float total ;
	float percentage;
	public:
		result (float * e , string s , int r , int m , int a) : test(e , s , r , m ) , sports (a)
		{
			total = 0.0;
			int i;
			for(i=0;i<5;i++)
			{
				total = total + p[i];
			}
			total = total + sports_activity;
			percentage = (total/600.0)*100.0;
		}
		void display_r()
		{
			display_m();
			display();
			cout << "Total marks : "<<total<<endl<<"Total percentage : "<<percentage<<" %";
		}
};
int main()
{
	string s ;
	int r , m , a ;
	float * e;
	e = new float [5];
	cout<<"Enter the name of the student : ";
	fflush(stdin);
	getline(cin,s);
	cout<<"Enter the roll number , age : " ;
	cin >> r >> m ;
	cout << "Enter the marks in 5 subjects : \n" ;
	int i;
	for( i=0 ; i<5 ; i++)
	{
		cin >> e[i];
	}
	cout << "Enter the marks in sports : ";
	cin >> a;
    result ob(e , s , r , m , a);
	ob.display_r();
	delete[] e;
	return 0;
}
