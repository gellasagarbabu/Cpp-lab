#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // pure virtual
};

class Square : public Shape {
    int side;
public:
    Square(int s) { side = s; }
    void area() { cout << "Area of Square = " << side * side << endl; }
};

class Triangle : public Shape {
    int b, h;
public:
    Triangle(int x, int y) { b = x; h = y; }
    void area() { cout << "Area of Triangle = " << 0.5 * b * h << endl; }
};

int main() {
    Square s(4);
    Triangle t(3, 6);
    s.area();
    t.area();
    return 0;
}

