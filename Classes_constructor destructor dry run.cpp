#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A():a(0){
cout<<" A is called first "<<endl;	
		}
		A(int b):a(b){
			cout<<" This is a second constructor "<<endl;
		}
		~A(){
			cout<<"A is destructed "<<endl;
		}
		int setA(int f){
			a=f;
			cout<<" A is setted as "<<a<<endl;
			return a;
		}
};
class B:public A{
	int c,f;
	public:
		B():c(0){
cout<<" B is called first "<<endl;	
		}
		B(int d):c(d){
			cout<<" This is a second constructor for b "<<endl;
		}
		
		B(int d,int h):c(d),f(h){
			cout<<" Tdsadsafdsa "<<endl;
		}
		void di(){
			cout<<" Kuch nh vro";
		}
		void fh(){
			cout<<" Inheritance is beginning \n";
			A::setA(13);
		}
		~B(){
			cout<<" B is destructed "<<endl;
		}
};
int main(){
B b1(12,13);
//B b2(11);
b1.di();
return 0;
}

