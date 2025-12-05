//Any integer is input through the keyboard.
//Write a program to find out whether it is an odd number or even number.
//Hint: Use the modulus operator (%) to check divisibility by 2.

#include <stdio.h>

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is an Even number.\n", num);
    } else {
        printf("%d is an Odd number.\n", num);
    }

    return 0;
}
