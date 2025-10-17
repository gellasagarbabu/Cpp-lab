#include<iostream>
using namespace std;
int x=100;
namespace mynamespace
{
	int value=50;
	void show()
	{
		cout<<"inside mynamespace,value="<<value<<endl;
		
	}
}
	int main()
	{
		int x=10;
		cout<<"local x="<<x<<endl;
		cout<<"global x="<<::x<<endl;
		cout<<"name sapce value="<<mynamespace::value<<endl;
		mynamespace::show();
	}

