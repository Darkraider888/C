/*Any year is input through the keyboard.
Write a program to determine whether the year is a leap year or not.
Hint: Use the % (modulus) operator.
A year is a leap year if divisible by 4, but not by 100 unless also by 400 .*/

#include <stdio.h>

int main() {
    int year;

    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}
