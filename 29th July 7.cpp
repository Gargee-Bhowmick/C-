#include <iostream>
#include <cmath>
using namespace std;
class coordinates{
	public:
	float x;
	float y;
};
int main()
{
	coordinates a,b;
	cout<<"Enter the x and y coordinates of the first point"<<endl;
	cin>>a.x>>a.y;
	cout<<"Enter the x and y coordinates respectively of the second point"<<endl;
	cin>>b.x>>b.y;
	cout<<"The distance between the points is : "<< sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
	return 0;
}
