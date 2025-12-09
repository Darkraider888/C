//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, for length=5 and breadth=4, area > perimeter.
//Hint: Calculate area = length * breadth; perimeter = 2*(length + breadth). 
//Compare with if-else.

#include <stdio.h>

int main() {
    int length, breadth;
    int area, perimeter;

    // Input length and breadth
    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Compare area and perimeter
    if (area > perimeter) {
        printf("Area is greater than Perimeter.\n");
    } else {
        printf("Area is NOT greater than Perimeter.\n");
    }

    return 0;
}
