#include<iostream>
using namespace std;
/*class Vector{
	char *vtr;int dimension;
	public:
		Vector(){
		vtr=new char[100];
		vtr=NULL;
		dimension=0;
	}
	Vector(int dimension,char ar[]){
		for(int i=0;ar[i]!='\0';i++){
			vtr[i]=ar[i];
		}
	}
	void disp(){
		for(int i=0;vtr[i]!='\0';i++){
			cout<<vtr[i]<<" ";
		}
	}	
};*/
int main(){
	int dim;
cout<<"Enter the dimensions of your vector :";
cin>>dim;
char *str;
str=new char[dim];
cin.getline(str,dim);
//Vector v1(dim,str);
//v1.disp();
return 0;
}

