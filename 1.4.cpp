#include<iostream>
using namespace std;
void greet(string name="Guest",int times=1)
{
	for(int i=0;i<times;i++){
		cout<<"Hello "<<name<<"!"<<endl;
	}
}
int main()
{
	greet();
	greet("Kiran");
	greet("Sagar",1);
	greet("Vamsi",2);
}
