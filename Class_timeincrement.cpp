/*Modify the class time that you have created in Q # 1 to include overloaded increment (++) and decrement (--
) operators that operate in both prefix and postfix notation and return values. Add statements to main() to test
these operators.*/
#include<iostream>
using namespace std;
class Time{
	int hour,minute,second;
	public:
		Time();
		Time(int h,int m,int s);
		void disp();
		void operator++();
		void operator--();
		Time operator++(int a){
			Time temp;
			temp.hour=hour++;
			temp.minute=minute++;
			temp.second=second++;
			return temp;
		}
		Time operator--(int a){
			Time temp;
			temp.hour=hour--;
			temp.minute=minute--;
			temp.second=second--;
			return temp;
		}
};
Time::Time(){
			hour=minute=second=0;
		}
Time::Time(int h,int m,int s){
			hour=h;
			minute=m;
			second=s;
		}
void Time::operator++(){
			++hour;
			++minute;
			++second;
		}
void Time::operator--(){
			--hour;
			--minute;
			--second;
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
		mins=0;
		hrs+=1;
	}
	else if(secs==60){
		secs=0;
		mins+=1;
	}
if((hrs>12||hrs<0)||(mins>60||mins<0)||(secs<0||secs>60)){
	cout<<" Invalid inputs ";
	return 0;
}
else{
Time t1(hrs,mins,secs);
t1--;
t1.disp();

}
return 0;
}

