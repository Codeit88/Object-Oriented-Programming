#include<iostream>
using namespace std;
class Myvector {
	int* arr, cap, s1=0;
public:
	Myvector() {
		cap = 2;
		arr = new int[cap];
		for (int i = 0;i < cap;i++) {
			this->arr[i] = 0;
		}
	}
	Myvector(int cap) {
		this->cap = cap;
		this->arr = new int[this->cap];
		for (int i = 0;i < this->cap;i++) {
			this->arr[i] = 0;
		}
	}
	int getcap() {
		return cap;
	}
	Myvector(Myvector& m1) {
		this->cap=m1.cap;
		this->s1=m1.s1;
		arr = new int[cap];
		for (int i = 0;i < m1.cap;i++) {
			 this->arr[i]=m1.arr[i];
		}
	}
	Myvector operator+(Myvector ob) {
		Myvector temp;
		int siz = ob.cap + this->cap;
		temp.cap = siz;
		temp.arr = new int[siz];
		for (int i = 0; i < siz; i++) {
			if (i < this->cap) {
				temp.arr[i] = this->arr[i];
			}
			else
				temp.arr[i] = ob.arr[i];
		}
		return temp;
	}
	void operator + (int a) {
		if (this->s1 < this->cap) {
			arr[s1] = a;
			s1++;
		}
		else if (this->s1 == this->cap) {
			this->cap = this->cap*2;
			int* temp = new int[this->cap];
			for (int i = 0;i < cap;i++) {
				temp[i] =this->arr[i];
				if (i == this->s1) {
					temp[s1] = a;
					//this->s1++;
				}
			}
			for (int i = 0;i < this->cap;i++) {
				cout << " " << temp[i];
		}
		}
	}
	friend istream& operator>>(istream& ib, Myvector& m1) {
	cout << " Enter your desired element : \n";
	for (int i = 0;i < m1.cap;i++) {
		ib >> m1.arr[i];
		m1.s1++;
	}
		return ib;
	}
	friend ostream& operator<<(ostream&ob, Myvector&m1) {
		for (int i = 0;i<m1.cap;i++) {
			cout << " " << m1.arr[i];
		}
		return ob;
	}
	void operator-() {
		this->cap--;
		this->s1--;
	}
	int& operator[](int i) {
		if (i > this->cap) {
			cout << "Index out of bounds" << endl;
			// return first element.
			return arr[0];
		}

		return arr[i];
	}
	/*void disp() {
		for (int i = 0;i < this->cap;i++) {
			cout << " " << this->arr[i];
		}
	}*/
};
int main() {
	Myvector v1;
	cin >> v1;
	cout << v1<<"\n";
	cout << " Enter your next elem : ";
	v1 + 4;
	v1 + 8;
	return 0;
}
