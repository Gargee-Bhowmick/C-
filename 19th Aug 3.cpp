#include <iostream>
using namespace std;
void print3(char c,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<c<<" ";
	}
}
void print1(char c,int n=80)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<c<<" ";
	}
}
void print2(int n , char c = '*')
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<c<<" ";
	}
}
int main()
{
    int m,n;
	char c;
	cout<<"Specify whether you want to enter the ncharacter or number or both by entering 1, 2, or 3 respectively"<<endl;
	cin>>m;
	if(m==3)
	{
	cout<<"Enter the character which you want to print"<<endl;
	cin>>c;
	cout<<"Enter how many times do you want to print the character"<<endl;
	cin>>n;
	print3(c , n);
    }
    else if(m==2)
    {
    		cout<<"Enter how many times do you want to print the character"<<endl;
	        cin>>n;
	        print2 (n);
	}
	else if (m==1)
	{
	cout<<"Enter the character which you want to print"<<endl;
	cin>>c;
	print1(c);
	}
	return 0;
	
}
