#include<iostream>
using namespace std;
class Test
{
	private:
		int x,y;
		public:
			void test()
			{
				x=y=0;
			}
			void disp()
			{
				cout<<x<<endl;
				cout<<y<<endl;
			}
};
int main()
{
Test t1;
t1.disp();
 return 0;
}


