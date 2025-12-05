/*According to the Gregorian calendar, it was Monday on 01/01/1900.
If any year is input through the keyboard,
write a program to find out what day of the week it is on 1st January of that year.
Hint: Calculate the total days from 1900 to the input year (accounting for leap years),
then use % 7 to find the day offset. Days of the week: 0=Sunday, 1=Monday, etc.
Use loops and conditionals to count leap years accurately.*/

#include <stdio.h>

int main() {
    int year;
    int days = 0;

    // Input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Count total days from 1900 to given year
    for (int y = 1900; y < year; y++) {
        // Leap year check
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
            days += 366;  // Leap year
        } else {
            days += 365;  // Normal year
        }
    }

    // 01/01/1900 was Monday → day = 1
    int dayOfWeek = (1 + days) % 7;

    // Display the day
    printf("1st January %d is: ", year);

    switch (dayOfWeek) {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}
