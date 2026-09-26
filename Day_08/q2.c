/*Q16: Write a program to input three numbers and find the largest among them using if-else.


Sample Test Cases:
Input 1:
10 25 15
Output 1:
Largest = 25

Input 2:
-5 -2 -10
Output 2:
Largest = -2

Input 3:
7 7 3
Output 3:
Largest = 7

*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest = %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest = %d\n", b);
    } else {
        printf("Largest = %d\n", c);
    }

    return 0;
}
