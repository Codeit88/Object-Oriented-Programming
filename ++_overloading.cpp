#include<iostream>
using namespace std;
const int size=100;
class MyString{
	private:
		char*str;
		int length;
		public:
			MyString(){
				str=new char[size];
				str=NULL;
				length=0;
			}
			MyString(int c,char ar[]){
				str=new char[size];
				length=c;
				for(int i=0;ar[i]!='\0';i++){
					str[i]=ar[i];
				}
			}
			void operator ++(){
				for(int i=0;str[i]!='\0';i++){
					if(str[i]!=' '&&(str[i]>='A'||str[i]<='Z')){
						str[i]=str[i]-32;
					}
				}
			}
			void operator<<(int length){
				for(int i=0;str[i]!='\0';i++){
					cout<<str[i]<<" ";
				}
			}
            void operator>>(int size){
            	char ar[size];
            	cin.getline(ar,size);
			}
			void operator=(const MyString c){
				str=new char[size];
				for(int i=0;str[i]!='\0';i++){
					str[i]=c.str[i];
				}
			}
			void operator[](char a){
				int j;
				cout<<"Enter the index : ";
				cin>>j;
				str=new char[size];
				for(int i=0;str[i]!='\0';i++){
					if(j>i){
				cout<<"Invalid";
				break;
					}
					else{
						str[j]=a;
					}
				}
			}
			
	};
int main(){
	char v;
MyString s1(100,"i am sami khokhjer");
MyString s2,s3;
++s1;
s1<<(size);
cout<<endl;
cout<<"Enter new string : ";
s2>>(size);
cout<<"Copied string : ";
s3=(s2);
s3<<(size);
//s3[](v);
return 0;
}

