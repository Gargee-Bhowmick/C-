 #include <iostream>
using namespace std;
	void volume(float a)
	{
		cout << "Volume of sphere = " << (4.0/3.0) * 3.142 * a * a * a << " cube units" <<endl;
	}
	void volume (float a , float b )
	{
		cout << "Volume of cylinder = " << 3.142 * a * a * b << " cube units"<< endl;
	}
	void volume (float a , float b , float c)
	{
		cout << "Volume of cuboid = " << a * b * c << " cube units" << endl; 
	}
void input()
{
	float a , b , c , d , e , f ;
	cout << "Enter the radius of sphere" << endl;
	cin >> a;
	cout << "Enter the radius and height of cylinder" << endl;
	cin >> b >> c ;
	cout << "Enter the length, breadth and height of cuboid" << endl;
	cin >> d >> e >> f ;
	volume(a);
	volume(b , c);
	volume(d , e , f);
}
int main()
{
	input ();
	return 0;
}
