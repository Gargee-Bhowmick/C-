#include <iostream>
using namespace std;
template <class t>
void sum(t a[] , int n)
{
	int i;
	t b;
    for (i = 0; i < n ; i++)
    b = b + a[i];
    cout<<"\nThe sum is : "<<b<<endl;
}
int main()
{
	int a , b;
	printf("Enter the size of the first array : ");
	cin>>a;
	int x[a];
	printf("Enter the integer elements : \n");
	int i;
	for(i=0;i<a;i++)
	{
		cin>>x[i];
	}
	sum(x,a);
	printf("Enter the size of the second array : ");
	cin>>b;
	float y[b];
	printf("Enter the floating point elements: \n");
	for(i=0;i<b;i++)
	{
		cin>>y[i];
	}
	sum(y,b);
	return 0;
}
