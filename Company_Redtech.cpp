#include<iostream>
using namespace std;
class TrackingDevices{
	long y;
public:
	void sety(long y) {
		this->y = y;
	}
	long gety() {
		return y;
	}
};
class LED {
	float size;
	char* model;
	int apps;long y;
public:
	void sety(long z) {
		y = z;
	}
	long gety() {
		return y;
	}
};
class Tabs{
	float size;
	char* model;long y;
public:
	void sety(long z) {
		y = z;
	}
	long gety() {
		return y;
	}
};
class Phones{
	char* model;
	int cam;long y;
public:
	void sety(long z) {
		y = z;
	}
	long gety() {
		return y;
	}
};
class SmartRing :public Phones, public TrackingDevices {
};
template<class T>
void itemsort(T& a, T& b, T& c) {
	T ar[3];
	ar[0] = a;
	ar[1] = b;
	ar[2] = c;
	for (int i = 0;i < 3;i++) {
		{
			for(int j=i+1;j<3;j++)
			if (ar[i] > ar[j]) {
				long temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
	for (int i = 0;i < 3;i++) {
		cout << ar[i] << endl;
	}
}
int main()
{
	long a, b, c;
	TrackingDevices t;
	Phones p;
	Tabs y;
	t.sety(2020);
	a = t.gety();
	cout <<a<<endl;
	y.sety(2010);
	b= y.gety();
	cout << b << endl;
	p.sety(2030);
	c=p.gety();
	cout << c << endl;
	cout << endl;
	itemsort(a,b,c);
	return 0;
}
