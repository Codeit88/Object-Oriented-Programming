#include<iostream>
using namespace std;
const int size=100;
class Name{
	private:
	char *ar;
  int length;
	public:
		Name(){
			ar=new char[size];
			ar=NULL;
			length=0;
		}
		Name(int a,char br[]){
			length=a;
			ar=new char[100];
			for(int i=0;br[i]!='\0';i++){
				ar[i]=br[i];
			}
		}
		void Disp(){
			for(int i=0;ar[i]!='\0';i++){
				cout<<ar[i];
			}
		}
};
int main(){
Name n1(1000,"Ali Khan jajajaja sasa ");
n1.Disp();
return 0;
}

