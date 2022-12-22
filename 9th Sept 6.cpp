#include <iostream>   
using namespace std;
class employee
{
	string name;
	int id;
	protected : 
	double salary;
	public:
		void set_e()
		{
			cout<<"Enter the name of the employee : ";
			fflush(stdin);
			getline(cin,name);
			cout <<"Enter the id of "<<name<<" : ";
			cin>>id;
		}
		void display_e()
		{
			cout<<"Name : "<<name<<endl<<"ID : "<<id<<endl<<"Salary : Rs."<<salary<<endl;
		}
};
class regular : public employee
{
	double DA;
	double HRA;
	double base;
	public:
		void set_r()
		{
			set_e();
		    cout<<"Enter the basic salary of the regular employee : ";
		    cin>>base;
		}
		void calculate_r()
		{
			DA = 0.80 * base;
			HRA = 0.10 * base;
		    salary = base + DA + HRA;	
		}
		void display_r()
		{
			display_e();
		}
};
class part_time : public employee
{
	double hour;
	double pph;
	public:
		void set_p()
		{
			set_e();
			cout<<"Enter the number of hours for the part time employee : ";
			cin>>hour;
			cout<<"Enter the pay per hour : ";
			cin >> pph;
		}
		void calculate_p()
		{
			salary = hour * pph;
		}
		void display_p()
		{
			display_e();
		}
};
int main()
{
	regular r;
	part_time p;
	r.set_r();
	r.calculate_r();
	p.set_p();
	p.calculate_p();
	r.display_r();
	p.display_p();
	return 0;
}
