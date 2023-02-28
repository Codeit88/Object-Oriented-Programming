#include<iostream>
using namespace std;
class Test{
	private:
int x,y,a,b;
	public:
	void test(){
	x=y=0;
		}
		void test(int a,int b){
		x=a;
		y=b;
				}
	void disp(){
	cout<<a<<endl;
	cout<<b<<endl;
			}
};
int main(){
Test t1,t2;
t1.test(3,5);
t1.disp();
t2.test(100,32);
t2.disp();
 return 0;
}


