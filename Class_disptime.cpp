/*Create a class called time that has separate int member data for hours, minutes, and seconds. One constructor
should 
initialize this data to 0, and another should initialize it to fixed values. Another member function should
display it, in 11:59:59 format.*/
#include<iostream>
using namespace std;
class Time{
	int hour,minute,second;
	public:
		Time();
		Time(int h,int m,int s);
		void disp();
};
Time::Time(){
			hour=minute=second=0;
		}
Time::Time(int h,int m,int s){
			hour=h;
			minute=m;
			second=s;
		}
void Time::disp(){
			cout<<" "<<hour<<" : "<<minute<<" : "<<second;
		}
int main(){
	int hrs,mins,secs;
	cout<<" Enter hours : ";cin>>hrs;
	cout<<" Enter mins : ";cin>>mins;
	cout<<" Enter seconds : ";cin>>secs;
	if(mins==60){
		hrs+=1;
		mins=00;
	}
	else if(secs==60){
		secs==00;
		mins+=1;
	}
if((hrs>12||hrs<0)||(mins>60||mins<0)||(secs<0||secs>60)){
	cout<<" Invalid inputs ";
	return 0;
}
else{
Time t1(hrs,mins,secs);
t1.disp();
}
return 0;
}

