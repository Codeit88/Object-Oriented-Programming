#include<iostream>
using namespace std;
const int sizename = 31;
const int sizedept = 41;
class Employee {
private:
	int ID;
	char* Name;
	char* DeptName;
public:
	Employee() {
		ID = 0;
		Name = NULL;
		DeptName = NULL;
	}
	Employee(int id, char name[], char deptname[]) {
		ID = id;
		Name = new char[sizename];
		DeptName = new char[sizedept];
		for (int i = 0;i < sizename;i++) {
			Name[i] = name[i];
		}
		for (int i = 0;i < sizedept;i++) {
			DeptName[i] = deptname[i];
		}
	}
	Employee(int id, char name[]) {
		ID = id;
		Name = new char[sizename];
		//DeptName = new char[sizedept];
		for (int i = 0;i < sizename;i++) {
			Name[i] = name[i];
		}
		DeptName = NULL;
	}
	void setid(int id) {
		ID = id;
	}
	void setname(char name[]) {
		Name = new char[sizename];
		for (int i = 0;name[i]!='\0';i++) {
			Name[i] = name[i];
		}
	}
	void setdeptname(char deptname[]) {
		DeptName = new char[sizedept];
		for (int i = 0;DeptName[i]!='\0';i++) {
			DeptName[i] = deptname[i];
		}
	}
	int getid() {
		return ID;
	}
	char* getname() {
		return Name;
	}
	char* getdeptname() {
		return DeptName;
	}
	void Display(int did,char *pt,char *vt) {
		did = getid();
		cout << "The Employee id is: " << did << endl;
		 pt = getname();
		cout << "Name is : ";
		for (int i = 0;pt[i]!='\0';i++) {
			cout << pt[i];
		}
		cout << endl;
		 vt = getdeptname();
		cout << "Department name is : ";
		for (int i = 0;vt[i]!='\0';i++) {
			cout << vt[i];
		}
		cout << endl;
	}
};
int main() {
	int idemp;
	char name[sizename];
	char dept[sizedept];
	Employee ob1;
	cout << "Enter the employee id: ";
	cin >> idemp;
	ob1.setid(idemp);
	cout << "Enter the name : ";
	cin.getline(name, sizename);cin.ignore();
	ob1.setname(name);
	cout << "Enter the deptname : ";
	cin.getline(dept, sizedept);cin.ignore();
	ob1.setdeptname(dept);
	cout<<endl;
	ob1.Display(idemp,name,dept);
	return 0;
}

