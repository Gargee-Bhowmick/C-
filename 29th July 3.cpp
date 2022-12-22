 #include <iostream>
#include <string>
using namespace std;
class student{
	public:
    string name;
	long int roll_number;
	float marks[5];
};
int main()
{
	student std;
	int i;
	float sum=0.0;
	cout<<"Enter the name of the student"<<endl;
	getline(cin,std.name);
	cout<<"Enter the roll number of "<<std.name<<endl;
	cin>>std.roll_number;
	cout<<"Enter the marks of "<<std.name<<endl;
	for(i=0;i<5;i++)
	{
		cin>>std.marks[i];
		sum = sum+ std.marks[i];
	}
	cout<<"The details are as follows: "<<endl<<"Name: "<<std.name<<endl<<"Roll number: "<<std.roll_number<<endl<<"Total marks: "<<sum<<endl<<"Percentage: "<<(sum/500.00)*100<<"%"<<endl;
	return 0;
}
