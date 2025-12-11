/* Hollow Square
*****
*   *
*   *
*   *
*****
*/
#include <stdio.h>

int main() {

    int n = 5; // size of square

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            // Print star only at borders
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" "); // inside is empty
            }
        }

        printf("\n");
    }

    return 0;
}
