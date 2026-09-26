/*Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
Factorial = 120

Input 2:
0
Output 2:
Factorial = 1

*/

#include <stdio.h>

int main() {
    int n;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial = %lld\n", fact);
    }

    return 0;
}
