#include<iostream>
using namespace std;
template<class T>
class Vector {
	T* ar;
	int cap, s1;
public:
	Vector() {
		this->cap = 2;
		this->s1 = 0;
		ar = new T[this->cap];
		for (int i = 0;i < this->cap;i++) {
			*(ar + i) = 0;
		}
	}
	Vector(int a) {
		this->cap = a;
		this->s1 = 0;
		ar = new T[this->cap];
		for (int i = 0;i < this->cap;i++) {
			*(ar + i) = 0;
		}
	}
	Vector operator+(int a) {
		if (this->s1 < this->cap) {
			ar[this->s1] = a;
			this->s1++;
		}
		else if (this->s1 == this->cap) {
			Vector temp;
			temp.cap = this->cap * 2;
			temp.ar = new T[temp.cap];
			for (int i = 0;i < temp.cap;i++) {
				if (i < this->s1)
				{
					temp.ar[i] = this->ar[i];
					temp.s1++;
				}
				else if (i == this->s1) {
					temp.ar[s1] = a;
					temp.s1++;
				}
				else
					temp.ar[i] = 0;
			}
			delete[]this->ar;
			return temp;
			//cout << temp<<endl;
			this->s1 = temp.s1;
			this->cap = temp.cap;
		}
		return *this;
	}
	Vector operator+(const Vector& v) {
		Vector temp;
		temp.cap = this->cap + v.cap;
		temp.ar = new T[temp.cap];
		for (int i = 0;i < this->cap;i++) {
			temp.ar[i] = this->ar[i];
			temp.ar[i + this->cap] = v.ar[i];
		}
		return temp;
	}
	friend istream& operator>>(istream& ip, Vector& v) {
		cout << " Enter your elements : \n";
		for (int i = 0;i < v.cap;i++) {
			ip >> v.ar[i];
			v.s1++;
		}
		return ip;
	}
	friend ostream& operator<<(ostream& op, Vector v) {
		cout << " Your elements are : \n";
		for (int i = 0;i < v.cap;i++) {
			op << " " << v.ar[i];
		}
		return op;
	}
};
int main() {
	Vector <float>v1(2), v2, v3, v4, v5(3), v6;
	cin >> v1;
	cout << v1 << endl;
	v2 = v1 + 4;
	cout << v2 << endl;
	v3 = v2 + 5;
	cout << v3 << endl;
	v4 = v3 + 8;
	cout << v4 << endl;
	cout << " Enter your merging array elements : \n";
	cin >> v5;
	v6 = v4 + v5;
	cout << v6 << endl;
	return 0;
}
