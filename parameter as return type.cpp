#include <iostream>
using namespace std;

class Number {
    int n;
public:
    void set(int x) { n = x; }
    void show() { cout << "Value = " << n << endl; }
    Number add(Number obj) {
        Number temp;
        temp.n = n + obj.n;
        return temp;
    }
};

int main() {
    Number n1, n2, n3;
    n1.set(10);
    n2.set(20);
    n3 = n1.add(n2);
    n3.show();
    return 0;
}

