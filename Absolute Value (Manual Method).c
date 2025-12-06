// Find the absolute value of a number entered through the keyboard.
//Hint: Use an if-else to check if negative, then multiply by -1 if so.
//(Or use built-in abs() if allowed, but try implementing it manually!)

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If number is negative, multiply by -1
    if (num < 0) {
        num = num * (-1);
    }

    printf("Absolute value = %d\n", num);

    return 0;
}
