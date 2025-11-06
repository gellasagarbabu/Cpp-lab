#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0||n==1)
		return 1;
	else 
	return n*factorial(n-1);
}
int main(){
	int number;
	cout<<"enter the number"<<endl;
	cin>>number;
	cout<<"factorial of"<<number<<"is"<<factorial(number)<<endl;
	return 0;
}
