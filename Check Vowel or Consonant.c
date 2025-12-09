//Write a C program to check whether a given character is a vowel or a consonant.
//Hint: A, E, I, O, U (both uppercase and lowercase) are vowels. All alphabetic characters except these are consonants.

#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to ignore whitespace

    // Check vowel
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
        ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {

        printf("%c is a vowel.\n", ch);
    }
    else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
