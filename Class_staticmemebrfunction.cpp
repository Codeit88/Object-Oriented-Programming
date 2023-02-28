#include<iostream>
using namespace std;
class Sti{
	static int count;int z;
	public:
		static void add(){
			cout<<count;
		}
};
 int Sti :: count=100;
int main(){
	Sti a;
a.add();
return 0;
}

