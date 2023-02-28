#include<iostream>
using namespace std;
class Per {
	int x;
public:
	Per() {
	}
	Per(int a) {
		x = a;
	}
	void disp() {
		cout << x;
	}
	~Per() {
		cout << " Per des called \n";
	}
};
class Man {
	int y;
	Per obj;
public:
	Man() {
	}
	Man(int z, Per q) :obj(q) {
		y = z;
	}
	~Man() {
		cout << " Man \n";
	}
};
int main() {
	Man ();
	cout <<  "  AJa ";
	//m.~Man();
	return 0;
}

