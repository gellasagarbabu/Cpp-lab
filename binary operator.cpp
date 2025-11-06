#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) { real = r; imag = i; }
    friend Complex operator+(Complex c1, Complex c2);
    void show() { cout << real << " + " << imag << "i" << endl; }
};

Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(5, 6), c3;
    c3 = c1 + c2;
    c3.show();
    return 0;
}

