/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:
(No input required)
Output 1:
    5
   45
  345
 2345
12345

*/

#include <stdio.h>

int main() {
    int start = 5;

    for (int i = start; i >= 1; i--) {
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        for (int j = i; j <= start; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
