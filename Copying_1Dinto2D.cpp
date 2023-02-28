#include<iostream>
using namespace std;
int main(){
char ar[50] = { 's','a','m','i',' ','i','s',' ','a',' ','g','o','o','d','b','o','y' };
char br[5][5];int k=0;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		br[i][j]=ar[k];k++;
	}
}
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cout<<br[i][j];
	}
	cout<<endl;
}
return 0;
}

