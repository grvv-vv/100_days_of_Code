/*Q97: Print the initials of a name.


Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

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

        int inWord = 0;
        for (int i = 0; name[i] != '\0'; i++) {
            if (!isspace((unsigned char)name[i])) {
                if (!inWord) {
                    printf("%c.", toupper((unsigned char)name[i]));
                    inWord = 1;
                }
            } else {
                inWord = 0;
            }
        }
        printf("\n");
    }

    return 0;
}
