/*Q36: Write a program to find the HCF (GCD) of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
HCF = 6

Input 2:
7 9
Output 2:
HCF = 1

*/

#include <stdio.h>

int main() {
    int a, b, num1, num2, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF of %d and %d = %d\n", num1, num2, a);

    return 0;
}
