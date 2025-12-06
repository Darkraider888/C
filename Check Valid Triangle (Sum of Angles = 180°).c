// Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard.
// A triangle is valid if the sum of all three angles is equal to 180 degrees.
//Hint: Simply add the angles and use an if statement to check equality to 180. Bonus: Add checks for positive angles.

#include <stdio.h>

int main() {
    int a, b, c;

    // Input three angles of the triangle
    printf("Enter angle 1: ");
    scanf("%d", &a);

    printf("Enter angle 2: ");
    scanf("%d", &b);

    printf("Enter angle 3: ");
    scanf("%d", &c);

    // Bonus check: angles must be positive
    // If any angle is 0 or negative, the triangle is automatically invalid
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid triangle: Angles must be positive.\n");
        return 0;
    }

    // Check if the sum of angles is equal to 180
    if (a + b + c == 180) {
        printf("The triangle is VALID.\n");
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}
