#include<iostream>
using namespace std;
class Test{
	private:
int x,y;
	public:
	void set_a(int a)
	{
		x=a;
	}
	void set_b(int b)
	{
		y=b;
	}
	int get_a(int a)
	{
		return x;
	}
	int get_b(int b)
	{
		return y;
	}
	void disp(){
		cout<<x<<endl;
		cout<<y<<endl;
			}
};
int main(){
Test t1;
t1.set_a(3);
t1.set_b(7);
t1.disp();
 return 0;
}


