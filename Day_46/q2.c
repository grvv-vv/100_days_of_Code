/*Q92: Find the first repeating lowercase alphabet in a string.


Sample Test Cases:
Input 1:
programming
Output 1:
First repeating character: r

Input 2:
abcde
Output 2:
No repeating lowercase alphabet found

Input 3:
hello
Output 3:
First repeating character: l

*/

#include <stdio.h>

int main() {
    char str[1000];
    int seen[26] = {0};
    char firstRepeating = '\0';

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                int index = str[i] - 'a';
                if (seen[index] == 1) {
                    firstRepeating = str[i];
                    break;
                }
                seen[index] = 1;
            }
        }

        if (firstRepeating != '\0') {
            printf("First repeating character: %c\n", firstRepeating);
        } else {
            printf("No repeating lowercase alphabet found\n");
        }
    }

    return 0;
}
