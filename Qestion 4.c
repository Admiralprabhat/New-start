//write a program in c message followed by name 
#include <stdio.h>
int main() {
    char name[50];
    
    printf("Enter the name: ");
    scanf("%s", name);
    
    printf("Hello, %s! Welcome to SpaceX Moon program.\n", name);
    
    return 0;
}

