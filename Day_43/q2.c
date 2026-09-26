/*Q86: Check if a string is a palindrome.


Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
racecar
Output 2:
Palindrome

Input 3:
hello
Output 3:
Not a Palindrome

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
        int isPalindrome = 1;

        while (start < end) {
            if (str[start] != str[end]) {
                isPalindrome = 0;
                break;
            }
            start++;
            end--;
        }

        if (isPalindrome) {
            printf("Palindrome\n");
        } else {
            printf("Not a Palindrome\n");
        }
    }

    return 0;
}
