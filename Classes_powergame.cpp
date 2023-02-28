#include<iostream>
using namespace std;
class Player;
class Powers{
	char*name;
	int points;
	public:
		Powers():name(NULL),points(0){
		}
		Powers(int b):points(b){
		}
			friend ADD(Player p1,Powers p2);
		void powersdisp(){
			for(int i=0;name[i]!='\0';i++){
				cout<<name[i];
			}
			cout<<endl;
			cout<<" Power points are : "<<points<<endl;
		}
};
class Player{
	int ID ;
	public:
		Player():ID(0){
		}
		Player(int g):ID(g){
		}
		friend ADD(Player p1,Powers p2);
};
Add(Player p1,Powers p2){
	cout<<"Objects are added"<<endl;
}
int main(){
Powers l(13);
Player t(14);
Add(t,l);
return 0;
}

