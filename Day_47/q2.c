/*Q94: Find the longest word in a sentence.


Sample Test Cases:
Input 1:
I love programming in C
Output 1:
Longest word: programming

Input 2:
Hello world
Output 2:
Longest word: Hello

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char longest[100] = "";
    char current[100] = "";
    int maxLen = 0, currLen = 0;

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

        int i = 0;
        while (str[i] != '\0') {
            if (str[i] != ' ' && str[i] != '\t') {
                current[currLen++] = str[i];
            } else {
                current[currLen] = '\0';
                if (currLen > maxLen) {
                    maxLen = currLen;
                    strcpy(longest, current);
                }
                currLen = 0;
            }
            i++;
        }
        current[currLen] = '\0';
        if (currLen > maxLen) {
            maxLen = currLen;
            strcpy(longest, current);
        }

        printf("Longest word: %s\n", longest);
    }

    return 0;
}
