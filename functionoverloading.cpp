#include <iostream>
using namespace std;

class Sample {
    int a, b;
public:
    void setData(int x, int y) {
        a = x; b = y;
    }
    friend void sum(Sample s);
};

void sum(Sample s) {
    cout << "Sum = " << s.a + s.b << endl;
}

int main() {
    Sample s1;
    s1.setData(10,0.000);
    sum(s1);
    return 0;
}

