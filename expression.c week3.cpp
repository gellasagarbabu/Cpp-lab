#include <stdio.h>

int main() {
    float a, b, c, d, result;
    a = 1; 
    b = 2; 
    c = 3; 
    d = 4; 
    result = (a / b) * c - b + (a * d) / 3;
    printf("Result of the expression: %.2f\n", result);
    return 0;
}
