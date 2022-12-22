#include <iostream>
#include <string.h>
using namespace std;
class concatenate{
	
 string str;
 int length;
 
 public:
 concatenate (string s)
 {
 str=s;
 }
 
 string conc_string(string s)
 {
 string s3;
 s3 = str + s;
 cout<<"\nThe concatenated string is = "<<s3;
 return s3;
 }
};
int main()
{
	string s, s1;
	cout<<"Enter the first string to concatenate "<<endl;
	cin>>s;
	cout<<"Enter the second string to concatenate"<<endl;
	cin>>s1;
    concatenate strng(s);
    strng.conc_string(s1);
 return 0;
}
