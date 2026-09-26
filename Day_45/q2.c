/*Q90: Toggle case of each character in a string.


Sample Test Cases:
Input 1:
Hello World
Output 1:
hELLO wORLD

Input 2:
C Programming 101
Output 2:
c pROGRAMMING 101

*/

#include <stdio.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            } else if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }

        printf("Toggled string: %s", str);
    }

    return 0;
}
