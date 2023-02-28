#include<iostream>
using namespace std;
class Build {
	char* name, * content = new char[100], * creationdate, * accesseddate;
public:
	Build() {
		name = new char[10];
		creationdate = new char[10];
		accesseddate = new char[10];
		content = new char[100];
		name = NULL;
		creationdate = NULL;
		accesseddate = NULL;
		content = NULL;
	}
	Build(const char ar[],const char cr[],const char dr[]){
		name = new char[10];
		creationdate = new char[10];
		accesseddate = new char[10];
		for (int i = 0;ar[i] != '\0';i++) {
			name[i]=ar[i];
		}
		for (int i = 0;cr[i] != '\0';i++) {
			creationdate[i]=cr[i];
		}
		for (int i = 0;ar[i] != '\0';i++) {
			accesseddate[i]=dr[i];
		}
	}

	void setcontent(char br[]) {
		for (int i = 0;br[i] != '\0';i++) {
			content[i] = br[i];
		}
	}
	char* getcont() {
		return content;
	}
	void dispcontent() {
		char* pt = getcont();
		cout << " Content is : ";

		for (int i = 0;pt[i] != '\0';i++) {
			cout << pt[i];
		}
	}
	void dispinfo() {
		cout << " Name is : ";
		for (int i = 0;name[i] != '\0';i++) {
			cout << name[i];
		}
		cout << endl;
		cout << " Creation date is : ";
		for (int i = 0;creationdate[i] != '\0';i++) {
			cout << creationdate[i];
		}
		cout << endl;
		cout << " Accessed date is : ";
		for (int i = 0;accesseddate[i] != '\0';i++) {
			cout << accesseddate[i];
		}
		cout << endl;
	}
};
class Folder {
	int fileno, subfold;
	Build b1;
public:
	Folder(int no, int b, Build c) {
		fileno = no;
		subfold = b;
		b1 = c;
	}
	void dispfol() {
		cout << " Number of file are : " << fileno << endl;
		cout << " Number of Subfolders are : " << subfold << endl;
		b1.dispinfo();
	}
};
class File{
	Build c;
	public:
		File(Build d):c(d){
		}
		void dispfile(){
			c.dispinfo();
		}
};
int main() {
	Build b1("Assignment", "12/23/22", "11/23/22");
	Folder f1(4, 5, b1);
	f1.dispfol();
	cout<<"...................................................\n";
	File f2(b1);
	f2.dispfile();
	return 0;
}

