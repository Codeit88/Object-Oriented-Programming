#include<iostream>
using namespace std;
class Stat{
	int x;
	static int count;
	public:
		Stat(int b):x(b){
			count++;
		}
		void disp(){
			cout<<" count is : "<<count<<endl;
			cout<<x;
		}
};
int Stat :: count;
int main(){
Stat s(3),s2(4),s3(6),s4(7);
s.disp();cout<<endl;
s2.disp();cout<<endl;
s3.disp();cout<<endl;
s4.disp();
return 0;
}

