/*Q40: Write a program to find the 1's complement of a binary number and print it.


Sample Test Cases:
Input 1:
1010
Output 1:
1's Complement = 0101

Input 2:
11001
Output 2:
1's Complement = 00110

Input 3:
0
Output 3:
1's Complement = 1

*/

#include <stdio.h>

int main() {
    long long binary;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    if (binary == 0) {
        printf("1's Complement = 1\n");
        return 0;
    }

    long long div = 1;
    while (binary / div >= 10) {
        div *= 10;
    }

    printf("1's Complement = ");
    while (div > 0) {
        int digit = (binary / div) % 10;
        if (digit == 1) {
            printf("0");
        } else {
            printf("1");
        }
        div /= 10;
    }
    printf("\n");

    return 0;
}
