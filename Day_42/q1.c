/*Q83: Count vowels and consonants in a string.


Sample Test Cases:
Input 1:
hello world
Output 1:
Vowels = 3, Consonants = 7

Input 2:
AEIOU
Output 2:
Vowels = 5, Consonants = 0

*/

#include <stdio.h>

int main() {
    char str[1000];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }
    }

    printf("Vowels = %d, Consonants = %d\n", vowels, consonants);

    return 0;
}
