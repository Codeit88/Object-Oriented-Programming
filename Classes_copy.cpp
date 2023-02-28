#include<iostream>
using namespace std;
class Copy {
	int x, y;
public:
	Copy() :x(0), y(0) {
	}
	Copy(int a, int b) :x(a), y(b) {
	}
	void disp() {
		cout << x << endl;
		cout << y << endl;
	}
	//Copy add(Copy&a){
	//Copy temp;
	//	a.x=temp.x;
	  //  a.y=temp.y; 
	//return temp;
	//}
};
int main() {
	Copy f3;
	/*f3.add(f1);
	f3.disp();*/
	return 0;
}

