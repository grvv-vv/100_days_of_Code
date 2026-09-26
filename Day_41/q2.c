/*Q82: Print each character of a string on a new line.


Sample Test Cases:
Input 1:
Hello
Output 1:
H
e
l
l
o

Input 2:
Hi
Output 2:
H
i

*/

#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n') {
                break;
            }
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
