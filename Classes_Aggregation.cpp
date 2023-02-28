#include<iostream>
using namespace std;
class Per{
	int x;
	public:
		Per(){
		}
		Per(int a){
			x=a;
		}
		void disp(){
			cout<<x;
		}
		~Per(){
			cout<<" Per des called \n";
		}
};
class Man{
	int y;
	Per obj;
	public:
		Man(int z,Per q):obj(q){
			y=z;
		}
		~Man(){
			cout<<" Man des called \n";
		}
};
int main(){
Per p;
{
	Man A(2,p);
}
cout<<"aja";
cout<<endl;
return 0;
}

