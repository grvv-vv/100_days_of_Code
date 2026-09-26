/*Q37: Write a program to find the LCM of two numbers.


Sample Test Cases:
Input 1:
12 18
Output 1:
LCM = 36

Input 2:
5 7
Output 2:
LCM = 35

*/

#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
