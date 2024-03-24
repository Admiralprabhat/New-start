//write a c program to demonstrate strcpy, strcmp, and strcat functions
#include <stdio.h>
#include <string.h>
int main() {
    char source[] = "Hello, ";
    char destination[20];
   // Copying string using strcpy
    strcpy(destination, source);
    printf("After strcpy, destination: %s\n", destination);
    // Concatenating strings using strcat
    strcat(destination, "Welcome to Planet Earth!");
    printf("After strcat, destination: %s\n", destination);
    // Comparing strings using strcmp
    char str1[] = "Ocean";
    char str2[] = "Space";
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("%s is smaller than %s.\n", str1, str2);
    else
        printf("%s is larger than %s.\n", str1, str2);

    return 0;
}

