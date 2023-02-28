#include<iostream>
using namespace std;
class test{
	int x,y,z;
	public:
		void display(int x,int y,int z){
			cout<<x<<" "<<y<<" "<<z;
		}
};
int main(){
test t1,t2,t3;
t1.display(3,5,6);
t2.display(2,8,0);
t3.display(1,2,5);
return 0;
}

