#include<iostream>
using namespace std;
class A {
	int a;
public:
	A() {
	}
    void aja() {
		cout<<this;
	}
};
int main() {
	A B, C;B.aja();cout << endl;C.aja();
	return 0;
}
