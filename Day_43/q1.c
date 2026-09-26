/*Q85: Reverse a string.


Sample Test Cases:
Input 1:
hello
Output 1:
Reversed string: olleh

Input 2:
Programming
Output 2:
Reversed string: gnimmargorP

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') {
            str[len - 1] = '\0';
            len--;
        }

        int start = 0, end = len - 1;
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }

        printf("Reversed string: %s\n", str);
    }

    return 0;
}
