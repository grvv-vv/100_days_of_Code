/*Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
Year is a leap year if divisible by 4 but not 100, except if divisible by 400.


Sample Test Cases:
Input 1:
2024
Output 1:
Leap Year

Input 2:
1900
Output 2:
Not a Leap Year

Input 3:
2000
Output 3:
Leap Year

*/

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}
