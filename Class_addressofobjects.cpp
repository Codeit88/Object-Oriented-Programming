#include<iostream>
using namespace std;
class Init {
	int x, y;
public:
	Init() :x(0), y(0) {

	}
	Init(int a, int b) {
		x = a;
		y = b;
	}
	void disp() {
		cout << x << endl;
		cout << y << endl;
	}
	void add(Init &a) {
		cout << &a;
	}
	void addint(Init &a){
		cout<<&a.x;
		cout<<&a.y;
	}
};
int main() {
	Init i,j;
	i.addint(i);
	cout << endl;
	i.addint(j);
	return 0;
}
