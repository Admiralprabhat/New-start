//c code to swap a 2 numbers with using temporary variable  and without using temporary variable 
//without temporary variable
#include <stdio.h>

int main() {
    int num1, num2;
 // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
 // Swap without using a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
// Output the swapped numbers
    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
 return 0;}
