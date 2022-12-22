#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		unordered_map<int , int> m;
		unordered_map<int , int>::iterator it;
		int i;
		int a;
		for(i=0;i<n;i++)
		{
		  	cin>>a;
		  	m[a]=0;
		}
		for(it = m.begin();it != m.end();++it)
		{
		  	cin>>it->second;
		}
        for(i=0;i<n;i++)
        {
        	
		}
		printf("%d\n",m-p);
	}
	return 0;
}
