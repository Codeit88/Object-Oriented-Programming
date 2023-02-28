#include<iostream>
using namespace std;
class Parent {
public:
	virtual void print() = 0;
};
class A :public Parent{
public:
	A(){}
	void print() {
		cout << " ja be a\n";
	}
};
class B :public Parent {
public:
	B(){}
	void print() {
		cout << "ja be b\n";
	}
};
class C :public Parent {
public:
	C(){}
	void print() {
		cout << "ja be c\n";
	}
};
int main() {
	Parent* p[3];
	p[0] = new A();
	p[1] = new B();
	p[2] = new C();
	p[0]->print();
	p[1]->print();
	p[2]->print();
	return 0;
}

