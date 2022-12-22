/*2.Write a program in c++ to create a class template which stores array with size.
*Include the member functions as follows.
*To perform the related operations:-
*The first bit to search an element in an array.
*To find sum of elements in the array.
*To find the largest element in the array.*/
#include <iostream>
using namespace std;
template <class t>
class test{
	t *a;
	int n;
	public:
		void set( int o)
		{
			cout<<"\nEnter the elements in the array :  ";
			int i;
			n=o;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void search ( t b )
		{
			int i;
            for(i=0;i<n;i++)
            {
            	if(a[i]==b)
            	{
            		cout<<"\nSearch found";
            		return;
				}
			}
		    cout<<"\nSearch not found";
		}
		void sum()
        {
	        int i;
	        t b;
            for (i = 0; i < n ; i++)
            b = b + a[i];
            cout<<"\nThe sum is : "<<b<<endl;
        }
        void largest()
        {
        	int i;
        	t m = a[0];
        	for(i=0;i<n;i++)
        	{
        		if(a[i]>m)
        		m=a[i];
			}
			cout<<"\nThe largest element is : "<<m;
		}
};
int main()
{
	int c;
	test <int> b(n);
	test <float> f(n);
	test <char> g(n);
	test <double> h(n);
	while(c)
	{
	cout<<"\nEnter 1 for integer , 2 for floating point , 3 for character and 4 for double or 0 to end calculation : ";
	cin>>c;
	cout<<"\nEnter the size of the array : ";
	int n;
	cin>>n;
	switch (c)
	{
		case 0:
			cout<<"\nCalculation has ended";
			break;
		case 1:
			b.set();
			cout<<"\nEnter the integer you want to search for : ";
			int k;
			cin>>k;
			b.search(k);
			b.sum();
			b.largest();
			break;
		case 2:
			f.set();
			cout<<"\nEnter the floating point number you want to search for : ";
			float d;
			cin>>d;
			f.search(d);
			f.sum();
			f.largest();
			break;
		case 3:
			g.set();
			cout<<"\nEnter the character you want to search for : ";
			char e;
			cin>>e;
			g.search(e);
			g.sum();
			g.largest();
			break;
		case 4:
			h.set();
			cout<<"\nEnter the double number you want to search for : ";
			double l;
			cin>>l;
			h.search(l);
			h.sum();
			h.largest();
			break;
		default:
			cout<<"\nPlease enter a valid number\n";
	}
    }
	return 0;
}
