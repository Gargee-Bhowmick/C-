#include <iostream>
using namespace std;
template <class t1 , class t2>
class d{
	public:
     d(t1 a , t2 b)
{
	cout<<"The values are : "<<a<<" "<<b<<endl;
}
};
int main()
{
	int a ; float b ; char c;
	cout << "Enter the char , integer and float values respectively : ";
	cin>>c>>a>>b;
	d <int , float> ob1(a , b);
	d <float , char> ob2(b , c);
	d <int , char>(a , c);
	return 0;
}
