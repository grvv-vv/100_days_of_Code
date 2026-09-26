/*Q38: Write a program to find the sum of digits of a number.


Sample Test Cases:
Input 1:
1234
Output 1:
Sum of digits = 10

Input 2:
987
Output 2:
Sum of digits = 24

*/

#include <stdio.h>

int main() {
    int num, temp, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = (num < 0) ? -num : num;

    while (temp != 0) {
        remainder = temp % 10;
        sum += remainder;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
