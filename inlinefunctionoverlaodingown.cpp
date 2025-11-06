#include<iostream>
using namespace std;

inline int square(int x){
	return x*x;
}

int add(int a,int b){
	return a+b;
}
int add(float a,float b){
	return a+b;
}
int main(){
	cout<<"square of 4="<<square(4)<<endl;
	cout<<"sum of integers(10,10)="<<add(10,10)<<endl;
	cout<<"sum of floats(4.5,4.6)="<<add(4.5f,4.5f)<<endl;
	return 0;
}
