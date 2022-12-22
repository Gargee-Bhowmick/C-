#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	int a[n];
	int i;
	cout<<"Enter the elements in the array : "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	try{
	cout<<"Enter the index that you want to access: ";
	cin>>i;
	if(i>=n)
	throw 1;
	cout<<"The array element at that index is : "<<a[i];
}
catch(int x)
{
	printf("Array index out of bounds!!");
}
return 0;
}
