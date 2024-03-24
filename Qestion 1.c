//write a program in c to use different datatypes and use sizeof function for ech
#include <stdio.h>
int main() 
{
 // declaring Integer based data types
    int integer;
    short shortInteger;
   		 long longInteger;
   			 long long longLongInteger;
// declaring  Floating-point based data types
  		  float floatType;
    double doubleType;
   			 long double longDoubleType;
// declaring Character based data types
    char charType;
 // for showing the Size of different data types used printf 
    printf("Size of int: %lu bytes\n", sizeof(integer));
  		  printf("Size of short: %lu bytes\n", sizeof(shortInteger));
   				 printf("Size of long: %lu bytes\n", sizeof(longInteger));
   					 printf("Size of long long: %lu bytes\n", sizeof(longLongInteger));
    printf("Size of float: %lu bytes\n", sizeof(floatType));
   		 printf("Size of double: %lu bytes\n", sizeof(doubleType));
    printf("Size of long double: %lu bytes\n", sizeof(longDoubleType));
  			  printf("Size of char: %lu byte\n", sizeof(charType));
    return 0;
}

