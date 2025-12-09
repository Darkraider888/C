// Given three points (x1, y1), (x2, y2), and (x3, y3), write a program to check if all three points fall on one straight line.  
//Hint: Use the slope formula: Check if (y2 - y1)/(x2 - x1) == (y3 - y2)/(x3 - x2). Handle division by zero with conditionals (vertical lines). 

#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Input the 3 points
    printf("Enter x1 y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%f %f", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%f %f", &x3, &y3);

    /* 
       Use cross multiplication to compare slopes:
       (y2 - y1)/(x2 - x1) == (y3 - y2)/(x3 - x2)
       Cross multiply to avoid division:
       (y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)
    */

    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("All three points lie on the same straight line.\n");
    } else {
        printf("The points do NOT lie on the same straight line.\n");
    }

    return 0;
}
