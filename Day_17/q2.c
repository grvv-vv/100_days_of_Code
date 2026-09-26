/*Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
12
Output 2:
Not Prime

Input 3:
1
Output 3:
Not Prime

*/

#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}
