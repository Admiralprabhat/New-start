//write a program in c to demonstrate the following keywords (statements) switch break exit return continue (i am taking scenaro of Toasting machine)
#include <stdio.h>
#include <stdlib.h>
void toastBread(int choice) {
    switch(choice) 
	{case 1:
            printf("Toasting bread lightly...\n");
            break;
        case 2:
            printf("Toasting bread medium...\n");
            break;
        case 3:
            printf("Toasting bread well done...\n");
            break;
        default:
            printf("Invalid selection!\n");
            return; }// Return if choice is invalid
   printf("Your toast is ready! Enjoy!\n");}
int main() {
    int option;
    while (1) {
        printf("Toaster Menu:\n");
        printf("1. Light\n");
        printf("2. Medium\n");
        printf("3. Well Done\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        if (option == 4) {
            printf("Exiting toaster machine...\n");
            break;  } // Exit the loop and terminate the program
       toastBread(option);}
    return 0;}

