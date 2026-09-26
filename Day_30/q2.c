/*Q60: Count positive, negative, and zero elements in an array.


Sample Test Cases:
Input 1:
6
-1 0 5 0 -3 8
Output 1:
Positive = 2, Negative = 2, Zero = 2

Input 2:
4
1 2 3 4
Output 2:
Positive = 4, Negative = 0, Zero = 0

*/

#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pos++;
        } else if (arr[i] < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Positive = %d, Negative = %d, Zero = %d\n", pos, neg, zero);

    return 0;
}
