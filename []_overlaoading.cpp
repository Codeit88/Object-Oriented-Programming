#include<iostream>
using namespace std;
class Alpha{
	int ar[3];
	public:
		Alpha(int a,int b,int c){
			ar[0]=a;
			ar[1]=b;
			ar[2]=c;
		}
	 int operator [](int position){
	 	return ar[position];
	 }
};
int main(){
Alpha f1(32,33,34);
cout<<f1[1];
return 0;
}

