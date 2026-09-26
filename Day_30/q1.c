/*Q59: Count even and odd numbers in an array.


Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even count = 3, Odd count = 3

Input 2:
5
2 4 6 8 10
Output 2:
Even count = 5, Odd count = 0

*/

#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even count = %d, Odd count = %d\n", evenCount, oddCount);

    return 0;
}
