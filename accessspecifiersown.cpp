#include<iostream>
using namespace std;
void displayMessage(string name,string greeting="Hello",int year=2025){
	cout<<greeting<<","<<name<<"! Welcome to year"<<year<<"."<<endl;
}
class person{
public:
	string name;
	protected:
		int age;
		private:
			string Secret;
			public:
				person(string n,int a,string s){
					name=n;
					age = a;
					Secret=s;
				}
				void revealSecret(){
					cout<<"secret:"<<Secret<<endl;
				}
			};
int main(){
	displayMessage("Sagar");
	displayMessage("sasi","hi");
	displayMessage("sathish","GoodMoring",2030);
	person p1("Sagar",'33',"Love c++");
	cout<<"Name:"<<p1.name<<endl;
	p1.revealSecret();
	return 0;
}	
