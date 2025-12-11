/* Butterfly Pattern

*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
*/

#include <stdio.h>

int main() {

    int n = 4; // wings size

    // 🦋 Upper Wings
    for (int i = 1; i <= n; i++) {

        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Spaces in the middle (2*(n-i))
        for (int s = 1; s <= 2*(n - i); s++) {
            printf(" ");
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // 🦋 Lower Wings
    for (int i = n; i >= 1; i--) {

        // Left stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle spaces
        for (int s = 1; s <= 2*(n - i); s++) {
            printf(" ");
        }

        // Right stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
