#include<iostream>
using namespace std;
template<class T>
class Temp {
	T* ar;
	int size1;
public:
	Temp() {
		size1 = 0;
		ar = new T[size1];
		ar = NULL;
	}
	Temp(const T* br, const int size1) {
		this->size1 = size1;
		ar = new T[size1];
		for (int i = 0;i < size1;i++) {
			ar[i] = br[i];
		}
	}
	T sum() {
		T total = 0;
		for (int i = 0;i < size1;i++) {
			total += ar[i];
		}
		return total;
	}
	bool checkpal(T ar[], int size) {
		for (int i = 0;i < size;i++) {
			if (ar[i] != ar[size - i - 1]) {
				return false;
			}
		}
		return true;
	}
};
template<>
class Temp<char> {
	char* ar;
	int size1;
public:
	Temp() {
		size1 = 0;
		ar = new char[size1];
		ar = NULL;
	}
	Temp(const char* br, const int size1) {
		this->size1 = size1;
		ar = new char[size1];
		for (int i = 0;i < size1;i++) {
			ar[i] = br[i];
		}
	}
	void sum() {
		char total = 0;
		for (int i = 0;i < size1;i++) {
			cout <<" "<< ar[i];
		}
	}
	bool checkpal(char ar[], int size) {
		for (int i = 0;i < size;i++) {
			if (ar[i] != ar[size - i - 1]) {
				return false;
			}
		}
		return true;
	}
};
int main() {
	char br[5] = { 'a','a','c','b','a' };
	double ar[5] = { 1.2,3.2,4.3,3.2,1.2 };
	Temp<double>a1(ar, 5);
	Temp<char>b1(br, 5);
	bool cond = a1.checkpal(ar, 5);
	if (cond == true) {
		cout << " Array is palindromic. \n";
	}
	else if (cond == false) {
		cout << " Array is not palindromic. \n ";
	}
	cout << " Sum of array is : " << a1.sum() << endl;
	bool cond1 = b1.checkpal(br, 5);
	if (cond1 == true) {
		cout << " Array is palindromic. \n";
	}
	else if (cond1 == false) {
		cout << " Array is not palindromic. \n ";
	}
	cout << " Sum of array is : ";
	b1.sum();
	return 0;
}
