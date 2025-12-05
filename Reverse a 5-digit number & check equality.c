 // A five-digit number is entered through the keyboard.
 // Write a program to obtain the reversed number and determine whether the original and reversed numbers are equal or not.
 // Hint: Use a loop to extract digits (modulus and division), reverse them, and compare with if-else.
 // Assume it's exactly five digits – no need for input validation yet.

 #include <stdio.h>

int main() {
    int num, original, reversed = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    original = num;  // store original number

    // Reverse the number
    for (int i = 0; i < 5; i++) {
        int digit = num % 10;        // extract last digit
        reversed = reversed * 10 + digit;  // build reversed number
        num /= 10;                   // remove last digit
    }

    // Print reversed number
    printf("Reversed number: %d\n", reversed);

    // Compare
    if (original == reversed) {
        printf("The original and reversed numbers are EQUAL.\n");
    } else {
        printf("The original and reversed numbers are NOT equal.\n");
    }

    return 0;
}
