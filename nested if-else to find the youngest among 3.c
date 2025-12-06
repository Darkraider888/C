//If the ages of Ram, Shyam, and Ajay are input through the keyboard,
//write a program to determine the youngest of the three.
//Hint: Use nested if-else statements to compare the three values pairwise.

#include <stdio.h>

int main() {
    int ram, shyam, ajay;

    // Input ages
    printf("Enter Ram's age: ");
    scanf("%d", &ram);

    printf("Enter Shyam's age: ");
    scanf("%d", &shyam);

    printf("Enter Ajay's age: ");
    scanf("%d", &ajay);

    // Check youngest using nested if-else
    if (ram < shyam) {
        if (ram < ajay)
            printf("Ram is the youngest.\n");
        else
            printf("Ajay is the youngest.\n");
    } else {
        if (shyam < ajay)
            printf("Shyam is the youngest.\n");
        else
            printf("Ajay is the youngest.\n");
    }

    return 0;
}
