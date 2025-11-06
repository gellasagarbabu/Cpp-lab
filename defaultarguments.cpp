#include <iostream>
using namespace std;

int add(int a, int b = 10) {
    return a + b;
}

int main() {
    cout << "Sum (one argument): " << add(5) << endl;
    cout << "Sum (two arguments): " << add(5, 15) << endl;
    return 0;
}

