/*Q93: Check if two strings are anagrams of each other.


Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not Anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    int count[256] = {0};

    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) != NULL) {
        int len1 = strlen(str1);
        if (len1 > 0 && str1[len1 - 1] == '\n') str1[len1 - 1] = '\0';
    }

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) != NULL) {
        int len2 = strlen(str2);
        if (len2 > 0 && str2[len2 - 1] == '\n') str2[len2 - 1] = '\0';
    }

    if (strlen(str1) != strlen(str2)) {
        printf("Not Anagrams\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) {
        printf("Anagrams\n");
    } else {
        printf("Not Anagrams\n");
    }

    return 0;
}
