#include<iostream>
using namespace std;
class Student;
class Name{
	char*fname,*sname,*tname;
	public:
		Name(){
			fname=new char[50];
			sname=new char[50];
			tname=new char[50];
			fname=NULL;
			sname=NULL;
			tname=NULL;
		}
		Name(char *ar,char *br,char *cr) {
			fname=new char[50];
			sname=new char[50];
			tname=new char[50];
			for(int i=0;ar[i]!='\0';i++){
				fname[i]=ar[i];
			}
			for(int i=0;br[i]!='\0';i++){
				sname[i]=br[i];
			}
			for(int i=0;cr[i]!='\0';i++){
				tname[i]=cr[i];
			}
		}
		void dispname(){
			for(int i=0;fname[i]!='\0';i++){
				cout<<fname[i];
			}
			cout<<" ";
			for(int i=0;sname[i]!='\0';i++){
				cout<<sname[i];
			}
			cout<<" ";
			for(int i=0;tname[i]!='\0';i++){
				cout<<tname[i];
			}
		}
};
class Student{
	char *dept;
	float CGPA;
	Name obj;
	public:
		Student(float gpa,char *d,Name obj1):CGPA(gpa),dept(d),obj(obj1){
		}
		void showdata(){
			cout<<"Name is : ";obj.dispname();cout<<endl;
			cout<<"Department is : ";
			for(int i=0;dept[i]!='\0';i++){
				cout<<dept[i];
			}
			cout<<endl;
			cout<<"CGPA is : "<<CGPA;
		}
};
int main(){
Name n1("Abdullah","Sarwar","Khanzada");
Student s1(3.96,"Computer Science",n1);
s1.showdata();
return 0;
}

