#include<iostream>
using namespace std;
class Deep{
	int x;
	int *p;
	public:
		Deep(){
			//p=new int;
		}
		Deep(int a,int z){
			x=a;
			p=new int;
			*p=z;
		}
		Deep(Deep &a){
			x=a.x;
			p=new int;
			*p=*(a.p);
		}
		void get(){
			cout<<x<<endl;
			cout<<*p<<endl;
		}
		~Deep(){
		}
};
int main(){
	Deep d(3,4);
	Deep d2(d);
	d2.get();
return 0;
}

