/*Q31: Write a program to take a number as input and print its equivalent binary representation.


Sample Test Cases:
Input 1:
10
Output 1:
Binary = 1010

Input 2:
7
Output 2:
Binary = 111

Input 3:
0
Output 3:
Binary = 0

*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    printf("Binary = ");
    int started = 0;
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if (bit) {
            started = 1;
        }
        if (started) {
            printf("%d", bit);
        }
    }
    printf("\n");

    return 0;
}
