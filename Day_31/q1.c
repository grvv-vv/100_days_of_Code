/*Q61: Search for an element in an array using linear search.


Sample Test Cases:
Input 1:
5
10 20 30 40 50
30
Output 1:
Element found at index 2

Input 2:
4
5 15 25 35
100
Output 2:
Element not found

*/

#include <stdio.h>

int main() {
    int n, key, foundIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index %d\n", foundIndex);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
