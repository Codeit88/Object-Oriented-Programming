#include<iostream>
using namespace std;
const int size1 = 100;
class MyString {
private:
	char* str;
	int length;
public:
	MyString();
	MyString(int c,const char ar[]);
	void operator =(MyString&b);
    void operator++(); 
	friend istream& operator>>(istream& ip, MyString& c);
	friend ostream& operator<<(ostream& op, MyString& c);
	bool operator==(MyString &obj);
	char operator[](int pos);
	char* operator=(MyString a){
		MyString b;
		for(int i=0;str[i]!='\0';i++){
			b.str[i]=str[i]+a.str[i];
		}
		return b.str;
	}
};
MyString::MyString() {
	str = new char[size1];
	str = NULL;
	length = 0;
}
MyString::MyString(int c,const char ar[]) {
	str = new char[size1];
	length = c;
	for (int i = 0;ar[i] != '\0';i++) {
		str[i] = ar[i];
	}
}
void MyString::operator++() {
	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}
}
void MyString::operator=(MyString&b) {
delete[]str;
str=new char[size1];
	for (int i = 0;b.str[i] != '\0';i++) {
		str[i] = b.str[i];
	}
}
char MyString::operator[](int pos) {
	char t;
	cout << "Enter the word to replace with: ";
	cin >> t;
	str[pos] = t;
	return str[pos];
}
bool MyString::operator==(MyString &obj)
    {
        for (int i = 0; obj.str[i] != '\0'; i++)
        {
            if (str[i] != obj.str[i])
            {
                return false;
            }
        }
        return true;
}
ostream& operator<<(ostream& op, MyString& c) {
	op << c.str;
	return op;
}
istream& operator>>(istream& ip, MyString& c) {
	ip.getline(c.str,20);
	return ip;
}
int main() {
	char *a;
	a=new char[20];
	MyString s1(20,a);
	/*cout << endl;
	++s1;
	cout << s1;
	MyString s2;
	s2=s1;
	cout << s2;
	cout << endl;
	int pos;
	cout << "Enter an index to modify: ";
	cin >> pos;
	if (pos < 0) {
		cout << "Invalid entry!";
		return 0;
	}
	else
		cout << s1[pos] << endl;
	//cout<<endl;
	cout << s1;
	cout << endl;
	if (s1 == s2) {
		cout << "Objects are Equal.";
	}
	else {
		cout << "Objects are not equal.";
	}*/
	cin>>s1;
	cout<<s1;
	return 0;
}

