/*Q57: Find the sum of array elements.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
Sum = 15

Input 2:
4
10 -2 5 7
Output 2:
Sum = 20

*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
