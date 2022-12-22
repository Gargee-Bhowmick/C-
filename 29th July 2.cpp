#include <iostream>
#include <string>
using namespace std;
class student{
	public:
    string name;
	long int roll_number;
	int total_marks;
};
int main()
{
	student std;
	cout<<"Enter the name of the student"<<endl;
	getline(cin,std.name);
	cout<<"Enter the roll number of "<<std.name<<endl;
	cin>>std.roll_number;
	cout<<"Enter the total marks of "<<std.name<<endl;
	cin>>std.total_marks;
	cout<<"The details are as follows: "<<endl<<"Name: "<<std.name<<endl<<"Roll number: "<<std.roll_number<<endl<<"Total marks: "<<std.total_marks<<endl;
	return 0;
}
