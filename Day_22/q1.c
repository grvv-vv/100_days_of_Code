/*Q43: Write a program to check if a number is a strong number.
A strong number is a number in which the sum of the factorials of its digits is equal to the number itself.


Sample Test Cases:
Input 1:
145
Output 1:
Strong Number

Input 2:
123
Output 2:
Not a Strong Number

Input 3:
1
Output 3:
Strong Number

*/

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    if (sum == original) {
        printf("Strong Number\n");
    } else {
        printf("Not a Strong Number\n");
    }

    return 0;
}
