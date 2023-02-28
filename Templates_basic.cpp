#include<iostream>
using namespace std;
template<typename T>
T sum(T a, T b) {
	return a + b;
}
int main(){
	int a,b,c;
	cout << " A and B : \n";
	cin >> a >> b;
	c = sum(a, b);
	cout << c;
	return 0;
}
