#include<iostream>
#include<string.h>
using namespace std;
class Show{
	string ar;
	public:
		Show(string a=" "){
			ar=a;
		}
		friend istream& operator>>(istream &input,Show &b);
				friend ostream& operator<<(ostream &output,Show &b);
};
istream& operator>>(istream &input,Show &b){
	input>>b.ar;
	return input;
}
ostream& operator<<(ostream &output,Show &b){
	output<<b.ar;
	return output;
}
int main(){
	Show f1;
	cin>>f1;
	cout<<f1;
return 0;
}

