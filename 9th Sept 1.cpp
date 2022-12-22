#include <iostream>
using namespace std;
class A{  
	protected:
		int a;
	public: 
		void set_a()
		{
			a = 1;
		}
		void display_a()
		{
			cout<< "a = "<<a<<endl;
		}
};
class B {
	protected:
		int b;
	public: 
		void set_b()
		{
			b = 2;
		}
		void display_b()
		{
			cout<< "b = "<<b<<endl;
		}
};
class C: public A { //Single Inheritance //Hierarchal Inheritance
	protected:
		int c;
	public: 
		void set_c()
		{
			set_a();
			c = 3;
		}
		void display_c()
		{
			display_a();
			cout<< "c = "<<c<<endl;
		}
};
class D: public A { //Hierarchal Inheritance 
	protected:
		int d;
	public: 
		void set_d()
		{
			set_a();
			d = 4;
		}
		void display_d()
		{
			display_a();
			cout<< "d = "<<d<<endl;
		}
};
class E : public A , public B //Multiple Inheritance , Derived class E from two parent (non-derived) classes A and B
{
	protected : 
	    int e;
	public: 
		void set_e()
		{
			set_a();
			set_b();
			e = 5;
		}
		void display_e()
		{
			display_a();
			display_b();
			cout<< "e = "<<e<<endl;
		}
};
class F : public C { //Multilevel inheritance , derived class F from derived class C
	protected : 
	    int f;
	public: 
		void set_f()
		{
			set_c();
			f = 6;
		}
		void display_f()
		{
			display_c();
			cout<< "f = "<<f<<endl;
		}
};
class G : public C , public D{//Multipath inheritance , Derived class G, from two derived classes C and D , which are derived from the same base (non-derived) class A
	protected:
	    int g;
	public: 
		void set_g()
		{
			set_c();
			set_d();
			g = 7;
		}
		void display_g()
		{
			display_c();
			display_d();
			cout<< "g = "<<g<<endl;
		}
};
/*class H : virtual public A , public F {//Hybrid inheritance , consisting of Multiple inheritance and multilevel inheritance
	protected:
	    int h;
	public: 
		void set_h()
		{
			set_a();
			set_f();
			h = 8;
		}
		void display_h()
		{
			display_a();
			display_f();
			cout<< "h = "<<h<<endl;
		}
};*/
int main()
{
	C c1, c2;
	D d;
	E e;
	F f;
	G g;
	//H h;
	cout<<" This is an example of Single Inheritance :\n";
	c1.set_c();
	c1.display_c();
	cout<<"---------------------------------------------------------------------------------\n";
	cout << "These are examples of Hierarchal Inheritance : \n";
	c2.set_c();
	c2.display_c();
	cout<<endl<<endl;
	d.set_d();
	d.display_d();
	cout<<"---------------------------------------------------------------------------------\n";
	cout<<"This is an example of Multiple Inheritance: \n";
	e.set_e();
	e.display_e();
	cout<<"---------------------------------------------------------------------------------\n";
	cout<<"This is an example of Multilevel Inheritance: \n";
	f.set_f();
	f.display_f();
	cout<<"---------------------------------------------------------------------------------\n";
	cout<<"This is an example of Multipath Inheritance: \n";
	g.set_g();
	g.display_g();
	cout<<"---------------------------------------------------------------------------------\n";
	/*cout<<"This is an example of Hybrid Inheritance: \n";
	h.set_h();
	h.display_h();
	cout<<"---------------------------------------------------------------------------------\n";*/		
	return 0;
}
