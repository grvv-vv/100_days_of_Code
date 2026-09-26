/*Q6: Write a program to swap two numbers using a third variable.


Sample Test Cases:
Input 1:
10 20
Output 1:
Before swap: a = 10, b = 20
After swap: a = 20, b = 10

Input 2:
5 15
Output 2:
Before swap: a = 5, b = 15
After swap: a = 15, b = 5

*/

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
