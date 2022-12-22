#include <iostream>
using namespace std;
template <class t>
void sort(t a[] , int n)
{
	int i, j;
	t b;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
                {
                	b = a[j];
                	a[j]=a[j+1];
                	a[j+1]=b;
				}
}
int main()
{
	int a , b;
	printf("Enter the size of the first array : ");
	cin>>a;
	int x[a];
	printf("Enter the integer elements in unsorted order : \n");
	int i;
	for(i=0;i<a;i++)
	{
		cin>>x[i];
	}
	printf("Enter the size of the second array : ");
	cin>>b;
	float y[b];
	printf("Enter the floating point elements in unsorted order : \n");
	for(i=0;i<b;i++)
	{
		cin>>y[i];
	}
	sort(x,a);
	sort(y,b);
	cout<<"The first array after sorting is as follows : \n";
	for(i=0;i<a;i++)
	{
		cout<<x[i]<<" < ";
	}
	cout<<"\nThe second array after sorting is as follows : \n";
	for(i=0;i<b;i++)
	{
		cout<<y[i]<<" < ";
	}
	return 0;
}
