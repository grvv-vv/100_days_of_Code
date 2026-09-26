/*Q58: Find the maximum and minimum element in an array.


Sample Test Cases:
Input 1:
5
3 9 1 7 5
Output 1:
Maximum = 9, Minimum = 1

Input 2:
4
-5 -2 -9 -1
Output 2:
Maximum = -1, Minimum = -9

*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Maximum = %d, Minimum = %d\n", max, min);

    return 0;
}
