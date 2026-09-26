/*Q91: Remove all vowels from a string.


Sample Test Cases:
Input 1:
hello world
Output 1:
hll wrld

Input 2:
programming
Output 2:
prgrmmng

*/

#include <stdio.h>

int isVowel(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char str[1000], result[1000];
    int j = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (!isVowel(str[i])) {
                result[j++] = str[i];
            }
        }
        result[j] = '\0';

        printf("String without vowels: %s", result);
    }

    return 0;
}
