#include<iostream>
using namespace std;
template<class T>
class Int {
	int a;
public:
	Int(int a) {
		this->a = a;
	}
	Int inc() {
		return  a++;
	}
	void disp() {
		cout << a;
	}
};
template<>
class Int <char>{
	char a;
public:
	Int(char a) {
		this->a = a;
	}
	Int inc() {
		return  a++;
	}
	void disp() {
		cout << a;
	}
};
int main()
{
	Int<int>a(4);
	a.inc();
	a.disp();
	return 0;
}
