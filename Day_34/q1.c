/*Q67: Insert an element in an array at a given position.


Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
3
Output 1:
Updated array: 1 2 3 4 5 6

Input 2:
4
10 20 30 40
1
5
Output 2:
Updated array: 5 10 20 30 40

*/

#include <stdio.h>

int main() {
    int n, pos, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (1-based index) to insert: ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    if (pos < 1 || pos > n + 1) {
        printf("Invalid position\n");
        return 0;
    }

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;

    printf("Updated array: ");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
