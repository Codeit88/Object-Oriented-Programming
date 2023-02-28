#include<iostream>
using namespace std;
class Un{
	int x;
	public:
		Un(){
		}
		Un(int a){
		this->	x=a;
		}
		Un check(Un&b){
			if(b.x>x){
				cout<<"yes";
				return b; 
			}
			else
			{cout<<" no";
			return *this;
		}
		}
		void disp(){
			cout<<x;
		}
};
int main(){
Un A(4),B(3);
A.check(B);
return 0;
}

