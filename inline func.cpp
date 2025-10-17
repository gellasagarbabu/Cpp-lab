#include<iostream>
using namespace std;
inline int square(int x) 
{
    return x * x;   
}
int main() {
    cout << "Square of 999 is: " << square(999) << endl;
    return 0;
}
