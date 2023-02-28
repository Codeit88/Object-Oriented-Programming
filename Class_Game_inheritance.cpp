#include<iostream>
using namespace std;
const int size1=100;
class MyString {
private:
	char* str;
	int length;
public:
MyString() {
	str = new char[size1];
	str = NULL;
	length = 0;
}
MyString(int c,const char ar[]) {
	str = new char[size1];
	length = c;
	for (int i = 0;ar[i] != '\0';i++) {
		str[i] = ar[i];
	}
}
};
class Gun{
	char *title;
	int ID,bullno,bullcap,bulldam;
	float bullspeed;
public:
	Gun(){
		ID=bullno=bullcap=bulldam=bullspeed=0;
		title=new char[10];
		title=NULL;
	}
	Gun(int id,int no,int dam,int cap,float speed,const char ar[]){
		ID=id;
		bullno=no;
		bulldam=dam;
		bullcap=cap;
		bullspeed=speed;
		title=new char[10];
		for(int i=0;ar[i]!='\0';i++){
			title[i]=ar[i];
		}
	}
	int fire(){
		int bu=bullcap-6;
		return bu;
	}
	int damage(int i){
	    int dam=bulldam*i;
	    return dam;
	}
	int death(){
		int dam=dam*bullno;
		while(dam!=100){
			bullno++;
		}
		return bullno;
	}
	void die(Gun ob){
		ob.death();
		ob.bullno=bullcap-ob.death();
	}
	void reload(){
	 while(bullno!=bullcap){
	 	bullno++;
	 }
	 if(bullno==bullcap){
	 	cout<<" No more Bullets ! "<<endl;
	 }
	}
	void dispgun(){
		for(int i=0;title[i]!='\0';i++){
			cout<<title[i];
		}
	}
	void disp(){
		cout<<" Name is : ";
		for(int i=0;title[i]!='\0';i++){
			cout<<title[i];
		}
		cout<<endl;
		cout<<" ID is : "<<ID<<endl;
		cout<<" Bullets number : "<<bullno<<endl;
		cout<<" Bullet Capacity : "<<bullcap<<endl;
		cout<<" Bullet Damage is : "<<bulldam<<endl;
		cout<<" FireSpeed is : "<<bullspeed<<" km/s "<<endl;
	}
};

class Inventory{
	int guncount;
	Gun gun[5];
	bool guntstatus[5];
	public: 
	Inventory(int count,Gun temp[5]){
		guncount=count;
		for(int i=0;i<5;i++){
			gun[i]=temp[i];
		}
	}
	void dispinv(){
		cout<<" Gun count is : "<<guncount<<endl;
		cout<<" Inventory guns are :- ";cout<<endl;
		cout<<"......................................................."<<endl;
		for(int i=0;i<5;i++){
			gun[i].disp();cout<<endl;
		}
	}
};
class Player{
	char *pname;
	int phealth;
	int activegun;
	Gun obj[6];
	public:
		Player(){
			pname=new char[10];
			phealth=0;
			activegun=0;
			pname=NULL;
		}
		Player(const char a[],int health,int active,Gun temp[6]){
			activegun=active;
			phealth=health;
			pname=new char[10];
			for(int i=0;a[i]!='\0';i++){
				pname[i]=a[i];
			}
			for(int i=0;i<6;i++){
				obj[i]=temp[i];
			}
			}
		void fire(Player p1){
			p1.phealth--;
	}
	void getguns(){
				int g1,g2,g3;
		Gun p1[3];
		cout<<" Enter the guns you want : \n";
		cin>>g1>>g2>>g3;
		p1[0]=obj[g1];
		p1[1]=obj[g2];
		p1[2]=obj[g3];
			cout<<" Player guns are : "<<endl;
		for(int i=0;i<3;i++){
			p1[i].dispgun();cout<<endl;
		}
	}
	void shoot(Player p,Gun c,int dam){
		int res=c.damage(dam);
		p.phealth=phealth-res;
		cout<<" Opponent Player  health would be : "<<p.phealth<<endl;
		cout<<" Firing Player bullets are : "<<c.fire();
	}
	void aftershootp1(Gun c,Player p){
			int res=c.damage(3);
		p.phealth=phealth-res;
		cout<<" Health left is : "<<p.phealth<<endl;
		cout<<" Bullets of Player left are : "<<c.fire()<<endl;
		cout<<" Player 2 is dead ! "<<endl;
	}
		void info(){
			cout<<" Player name : ";
			for(int i=0;pname[i]!='\0';i++){
				cout<<pname[i];
			}
			cout<<endl;
			cout<<" Player health is : "<<phealth<<endl;
			cout<<" Active weopen is : "<<activegun<<endl;
		}
		void disphealth(){
			cout<<" Health is : "<<phealth;
		}
};
int main(){
Gun g1(1472,1,9,36,34.7,"AK47"),g2(1477,1,8,25,21.4,"Desert Eagle"),g3(1452,1,7,31,56.7,"Shotgun"),g4(1459,1,6,45,42.6,"Sniper"),g5(1452,1,8,17,54.4,"Pump Gun"),g6(1438,1,9,30,43.5,"UAV-S");
//g1.fire();
//g1.reload();
//g1.disp();cout<<endl;
//g2.disp();
Gun gn[6]={g1,g2,g3,g4,g5,g6};
Inventory i1(6,gn);
i1.dispinv();
Player p1("Sami",100,3,gn),p2("Huzaifa",90,3,gn);
p1.info();
p1.getguns();
p2.info();
p2.getguns();
cout<<endl;
cout<<".................................................................................\n";
cout<<"After fire exchange from player 1 : \n";
cout<<" After 1st weopen hit : "<<endl;
p1.shoot(p2,g2,6);cout<<endl;cout<<" 2nd weopen : \n";
p1.shoot(p2,g4,6);cout<<endl;cout<<" 3rd weopen : \n";
p1.shoot(p2,g5,6);cout<<endl;
cout<<"..................................................................................\n";
cout<<"After fire exchange from player 2 : \n";
cout<<" After 1st weopen hit : "<<endl;
p1.shoot(p1,g1,3);cout<<endl;cout<<" 2nd weopen : \n";
p1.shoot(p1,g4,3);cout<<endl;cout<<" 3rd weopen : \n";
p1.shoot(p1,g2,3);cout<<endl;
cout<<"..................................................................................\n";
cout<<" The winner is player 1 : "<<endl;
p1.info();
cout<<" After the duel :- "<<endl;
p1.aftershootp1(g2,p1);
return 0;
}

