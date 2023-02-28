/*1. An array of Objects of class Students less than 40.
2. Section name
3. Class teacher.
Having functions editSection(), addStudent(), updateStudent(), printList().
In main function, you’ll have a pointer of class section. You’ll ask the user for number
of sections he wants to create, and then create as many objects as user wants.
Now, provide a menu to perform these functionalities:
1. Edit Section Attributes
2. Add Student in a section
3. Update Student of a section
4. Print List of Students of a section 5. Print List of Sections You can access functions of class student directly from main(). Only call the function of class student. Delete all the memory at the end*/
#include<iostream>
using namespace std;
class Student{
	char *name;
	char *gender;
	char *CNIC;
	float CGPA;
	public:
		Student(){
			name=new char[10];
			gender=new char[10];
			CNIC=new char[20];
			CGPA=0;
			name=NULL;
			gender=NULL;
			CNIC=NULL;
		}
		Student(char ar[],char br[],char cr[],float y){
			for(int i=0;name[i]!='\0';i++){
				name[i]=ar[i];
			}
			for(int i=0;gender[i]!='\0';i++){
				gender[i]=br[i];
			}
			for(int i=0;CNIC[i]!='\0';i++){
				CNIC[i]=cr[i];
			}
			CGPA=y;
		}
		void dispinfo(){
			cout<<" Student name is : ";
			for(int i=0;name[i]!='\0';i++){
				cout<<name[i];
			}
			cout<<endl;
			cout<<" Gender is : ";
			for(int i=0;gender[i]!='\0';i++){
				cout<<gender[i];
			}
			cout<<endl;
			cout<<" CNIC is : ";
			for(int i=0;CNIC[i]!='\0';i++){
				cout<<CNIC[i];
			}
			cout<<endl;
			cout<<" CGPA is : "<<CGPA<<endl;
		}
};
class Section{
	Student *st;
	char *sec;
	char *teacher;
	public:
		Section(){
			st=new Student[40];
			st=NULL;
			sec=new char[10];
			teacher=new char[10];
			sec=NULL;
			teacher=NULL;
		}
		Section(Student *a,char y[],char bs[]){
			st=new Student[40];
			st=a;
         
			for(int i=0;sec[i]!='\0';i++){
				sec[i]=y[i];
			}
			for(int i=0;bs[i]!='\0';i++){
				teacher[i]=bs[i];
			}
			
}
Student* getar(){
	return st;
}
	void disp(){
		Student pt=getar();
		pt.dispinfo();
		cout<<endl;
		cout<<" Section is : "<<sec<<endl;
		cout<<" Teacher is : ";
		for(int i=0;teacher[i]!='\0';i++){
			cout<<teacher[i];
		}
	}
};
int main(){
	char a=2;
Student s1("Sami khokher","Male","3520239739837",3.02);
Section n(s1,"a","Tufail shah");
n.disp();
return 0;
}

