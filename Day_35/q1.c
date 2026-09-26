/*Q69: Find the second largest element in an array.


Sample Test Cases:
Input 1:
5
12 35 1 10 34
Output 1:
Second largest = 34

Input 2:
4
10 10 10 10
Output 2:
No second largest element found

*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element found\n");
    } else {
        printf("Second largest = %d\n", secondLargest);
    }

    return 0;
}
