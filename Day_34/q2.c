/*Q68: Delete an element from an array.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
3
Output 1:
Updated array: 10 20 40 50

Input 2:
4
1 2 3 4
1
Output 2:
Updated array: 2 3 4

*/

#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (1-based index) to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Updated array: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
