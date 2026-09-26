/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.


Sample Test Cases:
Input 1:
1
Output 1:
Sum = 1.0000

Input 2:
2
Output 2:
Sum = 1.7500

Input 3:
3
Output 3:
Sum = 2.5833

*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    if (n >= 1) {
        sum += 1.0;
    }

    for (int i = 2; i <= n; i++) {
        sum += (2.0 * i - 1.0) / (2.0 * i);
    }

    printf("Sum = %.4lf\n", sum);

    return 0;
}
