//If the cost price and selling price of an item are input through the keyboard,
//Write a program to determine whether the seller has made a profit or incurred a loss.
//Also, calculate how much profit or loss was made.
//Hint: Compare the two prices using an if-else statement. Profit = selling - cost; Loss = cost - selling.
//A loop so you can check multiple items without restarting the program.
//A profit or loss percentage for each item
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percentage;
    char choice;

    do {
        // Input cost price and selling price
        printf("Enter the cost price: ");
        scanf("%f", &costPrice);

        printf("Enter the selling price: ");
        scanf("%f", &sellingPrice);

        // Check for profit or loss
        if (sellingPrice > costPrice) {
            profit = sellingPrice - costPrice;
            percentage = (profit / costPrice) * 100;
            printf("You made a profit of %.2f\n", profit);
            printf("Profit percentage: %.2f%%\n", percentage);
        } else if (costPrice > sellingPrice) {
            loss = costPrice - sellingPrice;
            percentage = (loss / costPrice) * 100;
            printf("You incurred a loss of %.2f\n", loss);
            printf("Loss percentage: %.2f%%\n", percentage);
        } else {
            printf("No profit, no loss. You broke even.\n");
        }

        // Ask if the user wants to continue
        printf("Do you want to check another item? (y/n): ");
        scanf(" %c", &choice);  // note the space before %c

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the program!\n");

    return 0;
}
