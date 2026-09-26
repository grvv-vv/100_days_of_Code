/*Q42: Write a program to check if a number is a perfect number.


Sample Test Cases:
Input 1:
6
Output 1:
Perfect Number

Input 2:
28
Output 2:
Perfect Number

Input 3:
12
Output 3:
Not a Perfect Number

*/

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Not a Perfect Number\n");
        return 0;
    }

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("Perfect Number\n");
    } else {
        printf("Not a Perfect Number\n");
    }

    return 0;
}
