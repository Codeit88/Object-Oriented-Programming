#include<iostream>
using namespace std;
class Prac{
int a,b,sum1;
public:
Prac(int c,int d){
	a=c;
	b=d;
}
	int sum(){
		sum1=a+b;
		return sum1;
	}
	void disp(){
		cout<<"Sum is : "<<sum1;
	}	
};
int main(){
Prac f1(13,55);
f1.sum();
f1.disp();
return 0;
}

