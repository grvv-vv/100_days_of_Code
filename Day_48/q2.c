/*Q96: Reverse each word in a sentence without changing the word order.


Sample Test Cases:
Input 1:
Hello World
Output 1:
olleH dlroW

Input 2:
I love programming
Output 2:
I evol gnimmargorp

*/

#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int len = strlen(str);
        if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

        int start = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ') {
                reverse(str, start, i - 1);
                start = i + 1;
            }
        }
        reverse(str, start, strlen(str) - 1);

        printf("Result: %s\n", str);
    }

    return 0;
}
