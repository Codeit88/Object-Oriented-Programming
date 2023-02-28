#include<iostream>
using namespace std;
class Employee{
	private:
	int *id;
	int idlen;
	int salary;
	public:
		Employee(){
			id=new int[5];
			id=NULL;
			idlen=0;
			salary=0;
		}
		Employee(int ar[],int b,int c){
			id=new int[b];
			for(int i=0;i<b;i++){
				id[i]=ar[i];
			}
			idlen=b;
			salary=c;
		}
		Employee(Employee &c){
			id=new int[idlen];
			for(int i=0;i<idlen;i++){
				id[i]=c.id[i];
			}
			idlen=c.idlen;
			salary=c.salary;
		}
		Employee operator*(int c){
			Employee temp;
				for(int i=0;i<temp.idlen;i++){
					temp.id[i]=id[i]*c;
				}
				temp.idlen=idlen*c;
				temp.salary=salary*c;
				for(int i=0;i<idlen;i++){
					cout<<" "<<id[i]*c;
				}
				cout<<endl;
					cout<<" Idlen is : "<<temp.idlen<<endl;
					cout<<" Salary is : "<<temp.salary<<endl;
				return temp;
		}
		void disp(){
			cout<<" Id is : ";
		for(int i=0;i<idlen;i++){
				cout<<" "<<id[i];
			}
	        cout<<endl;
			cout<<" Salary is : "<<salary<<endl;
			cout<<" ID length is : "<<idlen<<endl;
		}
		Employee operator+(Employee d){
			Employee temp;
			for(int i=0;i<5;i++){
                 temp.id[i]=id[i]+d.id[i];				
			}
			temp.salary=salary+d.salary;
			return temp;
		}
	friend ostream &operator<<(ostream &op,Employee &a);
	friend istream &operator>>(istream ip,Employee a);
};
ostream &operator<<(ostream &op,Employee &a){
	for(int i=0;i<5;i++){
	op<<a.id[i]<<" ";
	}
	op<<endl;
	op<<a.salary;
	return op;
}
int main(){
	int id1[]={3,4,5,7,9};
	int id2[]={2,5,1};
Employee ali(id1,5,10000);
Employee omar(ali);
Employee anum(id2,3,10000);
Employee saira,er;
cout<< "ali:"<<endl<<ali<<"omar:"<<endl<<omar;
cout<<"saira:" <<endl<<(saira=ali*10)<<endl;
er=anum+ali;
cout<<er;
return 0;
}

