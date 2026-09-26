/*Q63: Merge two arrays.


Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
Merged array: 1 2 3 4 5

Input 2:
2
10 20
3
30 40 50
Output 2:
Merged array: 10 20 30 40 50

*/

#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
