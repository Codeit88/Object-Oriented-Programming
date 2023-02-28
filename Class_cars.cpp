#include<iostream>
using namespace std;
const int size=20;
class cars{
	int number;
	int price;
	public:
		cars(int a,int b);
		cars(const cars &c);
		void disp();
}; 
cars::cars(int a,int b){
	number=a;
	price=b;
}
cars::cars(const cars &c){
	price=c.price;
	number=c.number;
}
void cars::disp(){
	cout<<price<<endl;
	cout<<number;
}
int main(){
cars a(3455,123);
cars b(a);
b.disp();
return 0;
}

