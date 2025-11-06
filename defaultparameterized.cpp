#include <iostream>
using namespace std;

class Demo {
    int x, y;
public:
    Demo() { x = y = 0; } // default
    Demo(int a, int b) { x = a; y = b; } // parameterized
    void show() { cout << "x = " << x << ", y = " << y << endl; }
};

int main() {
    Demo d1, d2(5, 10);
    d1.show();
    d2.show();
    return 0;
}

