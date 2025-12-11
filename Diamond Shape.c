/* Diamond Shape
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
  */

#include <stdio.h>

int main() {

    int n = 5; // middle height of the diamond

    // 🔼 Upper Pyramid
    for (int i = 1; i <= n; i++) {

        // Print spaces before stars
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Print stars (1,3,5,...)
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // 🔽 Lower Inverted Pyramid
    for (int i = n - 1; i >= 1; i--) {

        // Print spaces before stars
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Print stars
        for (int j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
