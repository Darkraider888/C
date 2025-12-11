/* Hollow Pyramid
    *
   * *
  *   *
 *     *
*********
*/
#include <stdio.h>

int main() {

    int n = 5;

    for (int i = 1; i <= n; i++) {

        // Spaces before stars
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }

        // Print stars and spaces
        for (int j = 1; j <= 2*i - 1; j++) {

            // Print star at boundary only
            if (j == 1 || j == 2*i - 1 || i == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
