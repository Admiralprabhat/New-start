//write a C program that calculates the total cost of an item based on its quantity, price per unit, and currency

#include <stdio.h>

int main() {
// Declaring variables to store item quantity, price per unit, and currency
int qty;
float pricePerUnit;
char currency[10];

  // Prompt the user to enter the item quantity, price per unit, and currency
    printf("Enter the quantity of the item: ");
    scanf("%d", &qty);
    
    printf("Enter the price per unit of the item: ");
    scanf("%f", &pricePerUnit);

    printf("Enter the currency of the item (Rs, USD): ");
    scanf(" %c", &currency[10]); // Note: There's a space before %c to consume any whitespace characters

    // Calculate the total cost of the item
    float totalCost = qty * pricePerUnit;

    // Display the total cost of the item
    printf("Total cost of %d items at %.2f %c each is %.2f %c\n", qty, pricePerUnit, currency[10], totalCost, currency);

    return 0;
}

