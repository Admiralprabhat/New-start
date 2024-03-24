// C program to modify the precision of float numbers 
#include <stdio.h>
int main()
 {
 float floatNumber = 5689.8563214;
 // here we are Printing float value with there default precision
   		 printf("Float Number with default precision: %f\n", floatNumber);
   		 // here we are Printing Float Number with there precision of 2 decimal places
printf("Float Number with precision of 2 decimal places: %.2f\n", floatNumber);
    //here we are  Printing Float Number with there precision of 3 decimal places
    		printf("Float Number with precision of 3 decimal places: %.3f\n", floatNumber);
 //here we are Printing Float Number with there precision of 4 decimal places
    printf("Float Number with precision of 4 decimal places: %.4f\n", floatNumber);
   		 // here we are Printing Float Number with there precision of 5 decimal places
printf("Float Number with precision of 5 decimal places: %.5f\n", floatNumber);
    return 0;
}

