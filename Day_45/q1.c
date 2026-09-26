/*Q89: Count frequency of a given character in a string.


Sample Test Cases:
Input 1:
programming
g
Output 1:
Frequency of 'g' = 2

Input 2:
hello world
l
Output 2:
Frequency of 'l' = 3

*/

#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int count = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        printf("Enter character to find: ");
        scanf("%c", &ch);

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ch) {
                count++;
            }
        }

        printf("Frequency of '%c' = %d\n", ch, count);
    }

    return 0;
}
