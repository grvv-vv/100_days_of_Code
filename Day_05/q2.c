/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3665
Output 1:
01:01:05

Input 2:
500
Output 2:
00:08:20

*/

#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
