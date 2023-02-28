#include<iostream>
using namespace std;
int main()
{
 int size,i=0,ar[20],br[20],sum=0;
 cout<<"Enter size for your array: ";
 cin>>size;
 for(i=0;i<size;i++)
 {
 	cin>>ar[i];
 }
 for(i=0;i<size;i++)
 {
 	if(ar[i]%2==1)
 	{
 		sum+=ar[i]*ar[i];
	 }
	 else if(ar[i]%2==0)
	 {
	 br[i]=ar[i];
     }
 }
 cout<<"Sum of odds is: "<<sum<<endl;
 return 0;
}


