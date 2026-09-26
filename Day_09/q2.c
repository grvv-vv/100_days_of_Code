/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.


Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
83
Output 2:
Grade B

Input 3:
74
Output 3:
Grade C

Input 4:
62
Output 4:
Grade D

Input 5:
45
Output 5:
Grade F

*/

#include <stdio.h>

int main() {
    float percentage;

    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    } else if (percentage >= 80 && percentage < 90) {
        printf("Grade B\n");
    } else if (percentage >= 70 && percentage < 80) {
        printf("Grade C\n");
    } else if (percentage >= 60 && percentage < 70) {
        printf("Grade D\n");
    } else if (percentage >= 0 && percentage < 60) {
        printf("Grade F\n");
    } else {
        printf("Invalid percentage\n");
    }

    return 0;
}
