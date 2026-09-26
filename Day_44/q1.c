/*Q87: Count spaces, digits, and special characters in a string.


Sample Test Cases:
Input 1:
Hello 123 @#
Output 1:
Spaces = 2, Digits = 3, Special characters = 2

Input 2:
User_1!
Output 2:
Spaces = 0, Digits = 1, Special characters = 2

*/

#include <stdio.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == '\n') {
                break;
            }
            if (str[i] == ' ') {
                spaces++;
            } else if (str[i] >= '0' && str[i] <= '9') {
                digits++;
            } else if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) {
                special++;
            }
        }
    }

    printf("Spaces = %d, Digits = %d, Special characters = %d\n", spaces, digits, special);

    return 0;
}
