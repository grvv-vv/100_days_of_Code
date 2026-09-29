/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


Sample Test Cases:
Input 1:
15/04/2023
Output 1:
15-Apr-2023

Input 2:
01/12/2024
Output 2:
01-Dec-2024

*/

#include <stdio.h>
#include <string.h>

int main() {
    char date[100];
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    printf("Enter date (dd/mm/yyyy): ");
    if (fgets(date, sizeof(date), stdin) != NULL) {
        int len = strlen(date);
        if (len > 0 && date[len - 1] == '\n') {
            date[len - 1] = '\0';
        }

        int day, month, year;
        if (sscanf(date, "%d/%d/%d", &day, &month, &year) == 3) {
            if (month >= 1 && month <= 12) {
                printf("%02d-%s-%04d\n", day, months[month], year);
            } else {
                printf("Invalid month\n");
            }
        }
    }

    return 0;
}
