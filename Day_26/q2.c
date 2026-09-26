/*Q52: Write a program to print the following pattern:
*

*
*

*
*
*

*
*
*
*

*
*
*
*
*


Sample Test Cases:
Input 1:
(No input required)
Output 1:
*

*
*

*
*
*

*
*
*
*

*
*
*
*
*

*/

#include <stdio.h>

int main() {
    int groups = 5;

    for (int i = 1; i <= groups; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        if (i < groups) {
            printf("\n");
        }
    }

    return 0;
}
