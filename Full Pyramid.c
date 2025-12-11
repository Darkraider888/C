/* Full Pyramid
    *
   ***
  *****
 *******
*********    */

#include <stdio.h>

int main() {

    int n = 5;   // height of pyramid

    // Loop for each row
    for (int i = 1; i <= n; i++) {

        // Print spaces before stars
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Print stars (2*i - 1) gives odd numbers: 1,3,5,7,9
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }

        printf("\n"); // new line
    }

    return 0;
}

