#include<iostream>
using namespace std;
int factorial(int n){

 if(n==0||n==1)
return 1;
else
return n*factorial(n-1);
}
int main(){
	int num;
	cout<<"enter a pos integer:";
	cin>>num;
	if(num<0){
		cout<<"factorial not defined"<<endl;
	}
	else{
		int result=factorial(num);
		cout<<"factorial of"<<num<<"="<<result<<endl;
	}
}
