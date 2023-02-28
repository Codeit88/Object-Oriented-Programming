#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	public:
     string name;
	 int roll_no;		
};
int main()
{
 Student s;
 s.name="Sami";
 s.roll_no=123;
 cout<<s.name<<" "<<s.roll_no;
 return 0;
}


