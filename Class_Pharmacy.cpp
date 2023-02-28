#include<iostream>
using namespace std;
class Date {
protected:
	double day, month, year,alldays;
public:
	Date(){}
	void set(double day, double month, double year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	double dayscounter(Date&a) {
		double alldays = a.day + (a.month*30) + (a.year*365);
		return alldays;
	}
	Date& operator-(Date &a) {
		Date temp;
		temp.day = day - a.day;
		temp.month = month - a.month;
		temp.year = year - a.year;
		return temp;
	}
	void display() {
		cout << day << " : " << month << " : " << year << endl;
	}
};
class Item {
protected:
	char* name;float price;
public:
	Item() {
		name = NULL;
	}
	Item(const char name[],float price) {
		this->price = price;
		this->name = NULL;
		this->name = new char[20];
		for (int i = 0;i < 20;i++) {
			this->name[i] = name[i];
		}
	}
	virtual void disp(){};
};
class Permenant :public Item,Date {
	Date ob;double loss;
public:
	Permenant(){}
	Permenant(const char name[], float price, double day, double month, double year){
		ob.set(day, month, year);
		this->price = price;
		this->name = NULL;
		this->name = new char[20];
		for (int i = 0;i < 20;i++) {
			this->name[i] = name[i];
		}
		this->day = day;
		this->month = month;
		this->year = year;
	}
	double daysin() {
		Date a;
		a.set(26, 6, 2022);
		Date c = a - ob;
		loss= dayscounter(c);
		return loss;
	}
	void disp() {
		double final = daysin();
		cout << " Item Price is : " << price << endl;
		cout << " Item name is : ";
		for (int i = 0;name[i]!='\0';i++) {
			cout << name[i];
		}
		cout << endl;
		cout << " Date of entry is : ";
		cout << day << " : " << month << " : " << year << endl;
		cout << " Passed days are : " << final << endl;
		cout<<" Discounted Price for item is : "<<price-((final - day) * 0.2)<<endl;
	}
};
class Perishable:public Item,Date {
	double quantity;Date ob;
public:
	Perishable(){}
	Perishable(const char name[], float price, double day, double month,double year, double quantity) {
		ob.set(day, month, year);
		this->price = price;
		this->name = NULL;
		this->name = new char[20];
		for (int i = 0;i < 20;i++) {
			this->name[i] = name[i];
		}
		this->day = day;
		this->month = month;
		this->year = year;
		this->quantity = quantity;
	}
	void checkexpiry() {
		double exp = dayscounter(ob);
		Date a;
		a.set(26, 6, 2022);
		double exp2 = dayscounter(a);
		if (exp > exp2) {
			cout << " Price is " << price << endl;
		}
		else
			cout << " Price is '0' due to expiry \n";
	}
	void disp() {
		checkexpiry();
		cout << " Item name is : ";
		for (int i = 0;name[i] != '\0';i++) {
			cout << name[i];
		}
		cout << endl;
	}
};
class Bulkitems:public Item,Date {
	char* descrip;Date ob;double loss;
public:
	Bulkitems(){}
	Bulkitems(const char name[],float price, double day, double month, double year,const char descrip[], bool) {
		this->price = price;
		this->descrip = NULL;
		this->descrip = new char[30];
		this->name = NULL;
		this->name = new char[20];
		for (int i = 0;i < 20;i++) {
			this->name[i] = name[i];
		}
		for (int i = 0;i < 30;i++) {
			this->descrip[i] = descrip[i];
		}
		this->day = day;
		this->month = month;
		this->year = year;
	}
	double daysin() {
		Date a;
		a.set(26, 6, 2022);
		Date c = a - ob;
		loss = dayscounter(c);
		return loss;
	}
	void disp() {
		double final = daysin();
		cout << " Item Price is : " << price << endl;
		cout << " Item name is : ";
		for (int i = 0;name[i] != '\0';i++) {
			cout << name[i];
		}
		cout << endl;
		for (int i = 0;descrip[i] != '\0';i++) {
			cout << descrip[i];
		}
		cout << endl;
		cout << " Date of entry is : ";
		cout << day << " : " << month << " : " << year << endl;
		cout << " Passed days are : " << final << endl;
		cout << " It is part of set ." << endl;
	}
};
class Pharmacy :public Permenant,Perishable,Bulkitems{
	Item** itemlist = new Item * [4];
public:
	Pharmacy(){}
	void AddItem(Item* a) {
		for (int i = 0;i < 4;i++) {
			itemlist[i] = a;
		}
	}
	void DisplayItems() {
		for (int i = 0;i < 4;i++) {
			itemlist[i]->disp();
		}
	}
};
int main() {
	Item* iptr = new Permenant("Gluc", 5000, 15, 11, 2020);
	iptr->disp();
	Pharmacy ph;
	ph.AddItem(iptr);
	cout << "......................................................\n";
	iptr = new Perishable("Panadol", 20, 16, 01, 2021, 500);
	iptr->disp();
	ph.AddItem(iptr);
	cout << ".......................................................\n";
	iptr = new Bulkitems("Gloves", 500, 12, 10, 2020, "Glove box for doctors", true);
	iptr->disp();
	ph.AddItem(iptr);
	cout << ".......................................................\n";
	ph.DisplayItems();
	return 0;
}
