/*Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
2
Output 1:
Month: February, Days: 28 or 29

Input 2:
4
Output 2:
Month: April, Days: 30

Input 3:
12
Output 3:
Month: December, Days: 31

Input 4:
13
Output 4:
Invalid month number

*/

#include <stdio.h>

int main() {
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("Month: January, Days: 31\n");
            break;
        case 2:
            printf("Month: February, Days: 28 or 29\n");
            break;
        case 3:
            printf("Month: March, Days: 31\n");
            break;
        case 4:
            printf("Month: April, Days: 30\n");
            break;
        case 5:
            printf("Month: May, Days: 31\n");
            break;
        case 6:
            printf("Month: June, Days: 30\n");
            break;
        case 7:
            printf("Month: July, Days: 31\n");
            break;
        case 8:
            printf("Month: August, Days: 31\n");
            break;
        case 9:
            printf("Month: September, Days: 30\n");
            break;
        case 10:
            printf("Month: October, Days: 31\n");
            break;
        case 11:
            printf("Month: November, Days: 30\n");
            break;
        case 12:
            printf("Month: December, Days: 31\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}
