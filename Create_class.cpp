#include<iostream>
using namespace std;
class Studentname{
public:
	int a;
	void input(){
		cout<<"Enter data :\n";
		cin>>a;
	}
	void output(){
	 cout<<a;
	}
};
int main(){
Studentname s1;
s1.input();
s1.output();
 return 0;
}



