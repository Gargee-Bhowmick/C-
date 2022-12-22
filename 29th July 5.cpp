#include <iostream>
#include <string>
using namespace std;
class distance
{
	public:
	float feet;
	float inches;
	public:
	distance add(distance);
}C1,C2,C3; 
distance distance::add(distance C2)
{
       distance temp;
       temp.feet = C1.feet + C2.feet;
       temp.inches = C1.inches + C2.inches;
       return temp;
}
int main()
{
	cout<<"Enter the first distance in feet"<<endl;
	cin>>C1.feet;
	C1.inches=C1.feet*12;
	cout<<"Enter the second distance in feet"<<endl;
	cin>>C2.feet;
	C2.inches=C2.feet*12;
	C3=C1.add(C2);
	cout<<"The resultant distance is : "<<C3.feet<<" feet or"<<C3.inches<<" inches"<<endl;
	return 0;
}
