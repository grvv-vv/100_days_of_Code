/*Q56: Read and print elements of a one-dimensional array.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Array elements: 1 2 3 4 5

Input 2:
3
10 20 30
Output 2:
Array elements: 10 20 30

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

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
