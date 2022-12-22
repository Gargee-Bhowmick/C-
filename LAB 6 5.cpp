#include <iostream>
using namespace std;
class My_Class{
 static int count;
 public:
 My_Class() 
 { //in constructor increase the count value
 
 cout << " Constructor has been called and object has been created "<<count+1<<" times" << endl;
 count++;
 } 
  static int objCount() 
 {
 return count;
 }
 };
int My_Class::count=0;
int main() 
{
cout<<"Initial value of static data member before creating any object (displayed with the help of static member function) : "<< My_Class::objCount()<<endl;
 My_Class my_obj1;
 My_Class my_obj2;
 My_Class my_obj3;
 int cnt;
 cnt = My_Class::objCount();//We have called the static member function with the help of class. It does not need an object to be created'
 cout << "Number of objects: (displayed with the help of static data members and static member functions): " << cnt;
 return 0;
}
