#include<iostream>
using namespace std;
class Gamma;
class Beta;
class Alpha{
int A;
public:
	void setA(int a){
		A=a;
	}
	int getA(){
		return A;
	}
	friend Alpha add(Alpha a,Gamma b,Beta c);
};
class Gamma{
int B;
public:
	void setB(int b){
		B=b;
	}
	int getb(){
		return B;
	}	
		friend Alpha add(Alpha a1,Gamma b1,Beta c1);
};
class Beta{
int C;
public:
	void setC(int c){
		C=c;
	}
	int getc(){
		return C;
	}	
		friend Alpha add(Alpha a1,Gamma b1,Beta c1);
};
Alpha add(Alpha a1,Gamma b1,Beta c1){
	int result=0;
	result=a1.A+b1.B+c1.C;
	Alpha z;
	z.setA(result);
	return z;
}
int main(){
class Alpha _a;
class Gamma _b;
class Beta _c;
_a.setA(10);
_a.setA(50);
_b.setB(100);
_c.setC(100);
_a=add(_a,_b,_c);
int t=_a.getA();
cout<<t;
return 0;
}

