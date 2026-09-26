/*Q84: Convert a lowercase string to uppercase without using built-in functions.


Sample Test Cases:
Input 1:
hello world
Output 1:
HELLO WORLD

Input 2:
c programming 123
Output 2:
C PROGRAMMING 123

*/

#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}
