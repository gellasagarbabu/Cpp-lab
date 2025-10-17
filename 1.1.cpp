#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    float discriminant = b*b - 4*a*c;
    float realPart, imaginaryPart;
    if (discriminant > 0) {
        float r1 = (-b + sqrt(discriminant)) / (2*a);
        float r2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "r1 = " << r1 << endl;
        cout << "r2 = " << r2 << endl;
    } else if (discriminant == 0) {
        float r = -b / (2*a);
        cout << "Roots are real and same." << endl;
        cout << "r1 = r2 = " << r << endl;
    } else {
        realPart = -b / (2*a);
        imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex and different." << endl;
        cout << "r1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "r2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
