/*Q98: Print initials of a name with the surname displayed in full.


Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];

    printf("Enter a name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        int len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }

        int wordStart[100];
        int wordEnd[100];
        int wordCount = 0;
        int inWord = 0;

        for (int i = 0; name[i] != '\0'; i++) {
            if (!isspace((unsigned char)name[i])) {
                if (!inWord) {
                    wordStart[wordCount] = i;
                    inWord = 1;
                }
            } else {
                if (inWord) {
                    wordEnd[wordCount] = i;
                    wordCount++;
                    inWord = 0;
                }
            }
        }
        if (inWord) {
            wordEnd[wordCount] = strlen(name);
            wordCount++;
        }

        if (wordCount > 0) {
            for (int i = 0; i < wordCount - 1; i++) {
                printf("%c.", toupper((unsigned char)name[wordStart[i]]));
            }
            if (wordCount > 1) {
                printf(" ");
            }

            int last = wordCount - 1;
            putchar(toupper((unsigned char)name[wordStart[last]]));
            for (int i = wordStart[last] + 1; i < wordEnd[last]; i++) {
                putchar(name[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
