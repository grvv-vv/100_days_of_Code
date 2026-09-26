/*Q66: Insert an element in a sorted array at the appropriate position.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
25
Output 1:
Updated array: 10 20 25 30 40 50

Input 2:
4
2 4 6 8
1
Output 2:
Updated array: 1 2 4 6 8

*/

#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;

    printf("Updated array: ");
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
