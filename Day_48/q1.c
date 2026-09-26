/*Q95: Check if one string is a rotation of another.


Sample Test Cases:
Input 1:
abcd
cdab
Output 1:
Rotation

Input 2:
hello
world
Output 2:
Not a Rotation

Input 3:
waterbottle
erbottlewat
Output 3:
Rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000];

    printf("Enter first string: ");
    if (fgets(s1, sizeof(s1), stdin) != NULL) {
        int len1 = strlen(s1);
        if (len1 > 0 && s1[len1 - 1] == '\n') s1[len1 - 1] = '\0';
    }

    printf("Enter second string: ");
    if (fgets(s2, sizeof(s2), stdin) != NULL) {
        int len2 = strlen(s2);
        if (len2 > 0 && s2[len2 - 1] == '\n') s2[len2 - 1] = '\0';
    }

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2) {
        printf("Not a Rotation\n");
        return 0;
    }

    char temp[2000];
    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not a Rotation\n");
    }

    return 0;
}
