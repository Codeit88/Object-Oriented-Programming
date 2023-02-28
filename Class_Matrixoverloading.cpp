#include<iostream>
using namespace std;
class Matrix{
	int **pt;
	int row,col;
	public:
		Matrix(){
			pt=NULL;
			row=0;
			col=0;
		}
		Matrix(int r,int c,int **a){
			row=r;
			col=c;
			pt=new int*[row];
			for(int i=0;i<row;i++){
				pt[i]=new int[col];
			}
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
					pt[i][j]=a[i][j];
				}
			}
		}
		friend ostream &operator<<(ostream&op,Matrix&mat);
		friend istream &operator>>(istream&ip,Matrix&mat);
		Matrix operator+(Matrix &a){
			Matrix temp;
			temp.row=row;
			temp.col=col;
			for(int i=0;i<row;i++){
				for(int j=0;j<col;j++){
				temp.pt[i][j]=pt[i][j]+a.pt[i][j];
				}
			}
			return temp;
		}
};
ostream &operator<<(ostream&op,Matrix&mat){
	for(int i=0;i<mat.row;i++){
		for(int j=0;j<mat.col;j++){
			op<<" "<<mat.pt[i][j];
		}
		op<<endl;
	}
	return op;
}
istream &operator>>(istream&ip,Matrix&mat){
	for(int i=0;i<mat.row;i++){
		for(int j=0;j<mat.col;j++){
			ip>>mat.pt[i][j];
		}
	}
	return ip;
}

int main(){
int row1,col1,row2,col2;
cout<<" Enter the rows1 : ";
cin>>row1;
cout<<" Enter the cols1 : ";
cin>>col1;
cout<<" Enter the rows2 : ";
cin>>row2;
cout<<" Enter the cols2 : ";
cin>>col2;
int **p=new int*[row1];
for(int i=0;i<row1;i++)
{
	p[i]=new int[col1];
}
int **s=new int*[row2];
for(int i=0;i<row2;i++)
{
	s[i]=new int[col2];
}
Matrix a(row1,col1,p),b(row2,col2,s),c;
cout<<" Enter the matrix entries : \n";
cin>>a;
cout<<endl;
cin>>b;
c=a+b;
cout<<c;
return 0;
}

