/*Q81: Count characters in a string without using built-in length functions.


Sample Test Cases:
Input 1:
Hello
Output 1:
Length = 5

Input 2:
Hello World
Output 2:
Length = 11

*/

#include <stdio.h>

int main() {
    char str[1000];
    int length = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        while (str[length] != '\0') {
            if (str[length] == '\n') {
                str[length] = '\0';
                break;
            }
            length++;
        }
    }

    printf("Length = %d\n", length);

    return 0;
}
