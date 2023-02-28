#include<iostream>
using namespace std;
class Try{
	int x,y;
	public:
		
		void setx(int a){
			x=a;
		}
		void sety(int b){
			y=b;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
};
int main(){
Try t;int a,b;
t.setx(5);
t.sety(10);
a=t.getx();
b=t.gety();
cout<<a<<" "<<b;
return 0;
}

