#include <iostream>
#include <string>
using namespace std;
class data{
	public:
	string name;
};
int main()
{
	data c;
	cout<<"Please enter your name :"<<endl;
	getline(cin,c.name);
	cout<<"--------------------"<<endl;
	cout<<"Hello "<<c.name<<" !"<<endl;
	cout<<"--------------------"<<endl;
	return 0;
}
