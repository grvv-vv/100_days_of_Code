/*Q100: Print all sub-strings of a string.


Sample Test Cases:
Input 1:
abc
Output 1:
a
ab
abc
b
bc
c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
        }
        len = strlen(str);

        for (int i = 0; i < len; i++) {
            for (int j = i; j < len; j++) {
                for (int k = i; k <= j; k++) {
                    putchar(str[k]);
                }
                putchar('\n');
            }
        }
    }

    return 0;
}
