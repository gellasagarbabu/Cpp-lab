#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"enter the coefficiants a,b,c";
	cin>>a>>b>>c;
	float discriminant =b*b-4*a*c;
	float root1,root2;
	if(a==0){
		cout<<"This is not a quadratic equation"<<endl;
	}
	else if(discriminant>0){
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		cout<<"Root1="<<root1<<endl;
		cout<<"Root2="<<root2<<endl;
		
	}
	else if(discriminant==0){
		root1=root2=-b/(2*a);
		cout<<"Root="<<root1<<endl;
	}
	else{
		float realpart = -b/(2*a);
		float imgpart = sqrt(-discriminant)/(2*a);
		cout<<"root1="<<realpart<<"+"<<imgpart<<"i"<<endl;
		cout<<"root2="<<realpart<<"-"<<imgpart<<"i"<<endl;
	}
	return 0;
}

