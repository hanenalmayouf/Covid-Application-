#include <iostream>
#include <string>
using namespace std;
class covid{
	int year,birth;
	string name,na;
	static int j;
	public:
		int i;
		covid(string n,string nat,int b=0,int y=0):name(n),na(nat),birth(b),year(y){}
		covid (covid&g){
			name=g.name;
			na=g.na;
			year=g.year;
			birth=g.birth;
		}
	int isolation(string place){
		if(place=="italy"||place=="britain"||place=="philippin"||place=="china"||place=="corea"||place=="japan"||place=="turkey"){
			cout<<"you must go to midical isolation";
			i++;
			} else cout<<"welcome to soudi";
			j++;
			
		}
		 void numofiso()const{
			cout<<"the number of isolaion is"<<i;
		}
			 static int numofnoiso(){
			cout<<"the number of dosen't isolaion is"<<j;
		}
		void setinfo(){
			cout<<"ENTER YOUR NAME:";
			cin>>name;
			cout<<"ENTER the birthday year:";
			cin>>birth;
			cout<<"ENTER the year now:";}
			string getname(){
				return name;
			}
			int getAge(){
				return year-birth;
			}
		~covid(){
			cout<<"Thanks for your risposapilty";
		}		
};
int covid::j=0;
int main() {
	covid o;
	o.setinfo();
cout<<o.getname();
cout<<o.getAge();
return 0;
	
}
