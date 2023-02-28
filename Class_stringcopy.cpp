#include<iostream>
using namespace std;
const int size=100;
class MyString{
	private:
		char*str;
		int length;
		public:
			MyString();
			MyString(int c,char ar[]);
            Mystring(const MyString&d);
			void disp();
	};
MyString::MyString(){
				str=new char[size];
				str=NULL;
				length=0;
			}
MyString::MyString(int c,char ar[]){
				str=new char[size];
				length=c;
				for(int i=0;ar[i]!='\0';i++){
					str[i]=ar[i];
				}
			}
/// MyString::Mystring(const MyString&d){
   //         	length=d.length;
     //       	str=new char[size];
       //     	for(int i=0;d.str[i]!='\0';i++){
          //  		str[i]=d.str[i];
		//		}
		//	}
void MyString::disp(){
				cout<<length<<endl;
				for(int i=0;str[i]!='\0';i++){
					cout<<str[i];
				}
			}
int main(){
MyString s1(100,"jdhnn");
s1.disp();
MyString s2;
s2=s1;
MyString s3(s2);
s2.disp();
//MyString s3=s2;
//s3.disp();
return 0;
}

