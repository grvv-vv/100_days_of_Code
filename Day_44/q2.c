/*Q88: Replace spaces with hyphens in a string.


Sample Test Cases:
Input 1:
hello world welcome
Output 1:
hello-world-welcome

Input 2:
c programming language
Output 2:
c-programming-language

*/

#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ') {
                str[i] = '-';
            }
        }
    }

    printf("Result: %s", str);

    return 0;
}
