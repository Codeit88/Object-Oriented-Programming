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
	 void operator =(Alpha b){
	 	A=b.A;
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
Alpha f2=f1;
f1.disp();cout<<endl;
//f2.disp();
return 0;
}

