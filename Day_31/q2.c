/*Q62: Reverse an array without taking extra space.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Reversed array: 5 4 3 2 1

Input 2:
4
10 20 30 40
Output 2:
Reversed array: 40 30 20 10

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

    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
