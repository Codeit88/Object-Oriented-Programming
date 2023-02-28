#include<iostream>
#include<string.h>
using namespace std;
class Name{
	private:
		char fname[50];
		char sname[50];
		char tname[50];
	public:
		Name(){
			//fname=NULL;
			//sname=NULL;
			//tname=NULL;
		}
	/*	Name(char a[],char b[],char c[]){
			for(int i=0;fname[i]!='\0';i++){
				fname[i]=a[i];
			}
			for(int i=0;sname[i]!='\0';i++){
				sname[i]=b[i];
			}
			for(int i=0;tname[i]!='\0';i++){
				tname[i]=c[i];
			}
		}*/
		void setterf(char a[]){
			for(int i=0;fname[i]!='\0';i++){
				fname[i]=a[i];
			}
		}
		void setters(char b[]){
			for(int i=0;sname[i]!='\0';i++){
				sname[i]=b[i];
			}
		}
		void settert(char c[]){
			for(int i=0;tname[i]!='\0';i++){
				tname[i]=c[i];
			}
		}
		char *getf(){
			return fname; 
		}
		char *gets(){
			return sname; 
		}
		char *gett(){
			return tname; 
		}
};
int main(){
Name ali;
ali.setterf("Muhammad");
ali.setters("ALI");
ali.settert("Khokher");
cout<<ali.getf()<<endl;
cout<<ali.gets()<<endl;
cout<<ali.gett()<<endl;

return 0;
}

