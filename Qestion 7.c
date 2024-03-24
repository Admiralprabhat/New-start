//write c program to demonstrate implicit and explicit type conversion


#include <stdio.h>

int main() {
    // Implicit type conversion
    int a = 50;
    float b = 20.5;
    float sum = a + b; // Implicit conversion of 'a' to float
    printf("Implicit conversion: %f\n", sum);

    // Explicit type conversion
    float c = 80.7;
    int d = (int)c; // Explicit conversion of 'c' to int
    printf("Explicit conversion: %d\n", d);

    return 0;
}

