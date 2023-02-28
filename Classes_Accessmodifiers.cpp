#include<iostream>
using namespace std;
class Base{
	int x;
	public :
		Base ():x(0){
		}
		void setval(int a){
			x=a;
		}
		void disp(){
			cout<<x;
		}
};
int main(){
Base *d=new Base;
d->setval(4);
d->disp();
return 0;
}

