#include<iostream>
using namespace std;
template<class T>
class Alpha {
	T x, y;
public:
	Alpha(T b,T a) {
		x = b;y = a;
     }
	void disp() {
		cout << x << endl;
		cout << y << endl;
	}
};

int main(){
	Alpha<float>c1(2.3, 3.2);
	c1.disp();
	return 0;
}
