#include<iostream>
using namespace std;
class Alpha{
	int A;
	public:
		Alpha(int a){
			A=a;
		}
		int getA(){
			return A;
		}
	 void operator ++(){
	 	++A;
	 }
	 void disp(){
	 	cout<<A;
	 }
};
int main(){
	int a;
	cout<<"Enter the number: ";
	cin>>a;
Alpha f1(a);
++f1;
f1.disp();
return 0;
}

