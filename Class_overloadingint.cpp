#include<iostream>
using namespace std;
class Inte{
	int *rt;
	int len;
	public:
		Inte(){
		}
		Inte(int l,int *t){
			len=l;
			rt=new int[len];
			for(int i=0;i<len;i++){
				rt[i]=t[i];
			}
		}
		friend ostream& operator<<(ostream& op, Inte& c);
		friend istream& operator>>(istream& ip, Inte& c);
};
ostream& operator<<(ostream& op, Inte& c) {
	for(int i=0;i<c.len;i++)
	{
	op << c.rt[i];
}
return op;
}
istream& operator>>(istream& ip, Inte& c) {
	for(int i=0;i<c.len;i++)
	{
	ip >> c.rt[0];
}
return ip;
}
int main(){
int row;
cin>>row;
int *ar;
ar=new int[row];
Inte a(row,ar);
cin>>a;
cout<<a;
return 0;
}

