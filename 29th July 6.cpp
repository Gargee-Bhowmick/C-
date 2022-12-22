#include <iostream>
#include <string>
using namespace std;
class employee{
	public:
	int id;
	string name;
	int age;
	float basic_salary;
};
int main()
{
	int n,i;
	cout<<"Enter the number of employees whose information is to be displayed"<<endl;
	cin>>n;
	employee em[n];
	for(i=0;i<n;i++)
	{
		cout<<endl<<endl<<"Enter the id of employee "<<i+1<<endl;
		cin>>em[i].id;
		cout<<"Enter the name"<<endl;
		fflush(stdin);
		getline(cin,em[i].name);
		cout<<endl<<"Enter age"<<endl;
		cin>>em[i].age;
		cout<<"Enter the basic salary"<<endl;
		cin>>em[i].basic_salary;
	}
    cout<<"\n\n\nThe details of the employees are as follows:\n\n";
    cout<<"\tID\t\tName\t\t\tAge\t\tBasic Salary\t\tGross Salary\n";
    for(i=0;i<n;i++)
    {
    	cout<<i+1<<")\t"<<em[i].id<<"\t\t"<<em[i].name<<"\t\t"<<em[i].age<<"\t\t"<<em[i].basic_salary<<"\t\t"<<em[i].basic_salary+(0.80*em[i].basic_salary)+(0.10*em[i].basic_salary)<<endl;
	}
	return 0;
}
