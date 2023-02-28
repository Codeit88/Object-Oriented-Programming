#include<iostream>
using namespace std;
class Par {
	int x;
public:
	Par() {
	}
	Par(int a) {
		x = a;
	}
	virtual void disp() {
		cout <<
			" 1st class " << x << endl;
	}
	virtual ~Par(){
		cout<<"des call ";
	}
};
class Chi :public Par {
	int c;
public:
	Chi(int d) {
		c = d;
	}
	void disp() {
		cout << " sec class" << endl;
	}
	~Chi(){
		cout<<" chi called";
	}
};
int main() {
	Par *a;
	Chi obj(3);
	a = &obj;
	a->disp();
	return 0;
}

