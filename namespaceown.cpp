#include<iostream>
using namespace std;
int x=10;
namespace mynamespace{
	int value = 50;
	void show(){
		cout<<"inside my namespace,value="<<value<<endl;
	}
}
int main(){
	int x=20;
	cout<<"localx="<<x<<endl;
	cout<<"globalx="<<::x<<endl;
	cout<<"Namespace value="<<mynamespace::value<<endl;
	mynamespace::show();
}
