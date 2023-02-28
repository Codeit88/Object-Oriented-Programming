#include<iostream>
using namespace std;
class Car_race{
	char* model;
	int id;           //unique id for each car
	static int total; //total cars;
public:
	Car_race() {
		model = new char[10];
		id = 0;
	}
	void addcar(const char ar[], int id) {
		this->id = id;
		model = new char[10];
		for (int i = 0;i<10;i++) {
			model[i] = ar[i];
		}
		total++;
	}
	static int getcars() {
		cout << " Total cars " << total << endl;
		return total;
	}
	static void delcar() {
		total--;
	}
	void disp() {\
		cout << " Car name is : ";
		for (int i = 0;i<10;i++) {
			cout << model[i];
		}
		cout << " , Id is "<<id<<endl;
	}
	~Car_race() {}
};
int Car_race::total = 0;
int main() {
	Car_race c1, c2, c3;
	c1.addcar("Mustang", 140);
	c2.addcar("Ford", 130);
	c3.addcar("Ferrari", 150);
	Car_race::getcars();
	c1.disp();
	c2.disp();
	c3.disp();
	top:cout << " Press 'A' to delete a car :\n";
	for(int i = 0;i < 3;i++) {
		char in;
		cin >> in;
		if (in == 'a' || in == 'A') {
			Car_race::delcar();
			Car_race::getcars();
			goto top;
		}
		else if (in != 'a' && in != 'A')
			cout<<" Cars left are : "<<Car_race::getcars()<<endl;
	}
	return 0;
}
