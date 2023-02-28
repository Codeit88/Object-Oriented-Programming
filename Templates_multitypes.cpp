#include<iostream>
using namespace std;
template<typename T,typename Y>
Y sum(T a, Y b) {
	return a + b;
}
int main(){
	int a;
	float b,c;
	cout << " A and B : \n";
	cin >> a >> b;
	c = sum(a, b);
	cout << c;
	return 0;
}
