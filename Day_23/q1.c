/*Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.


Sample Test Cases:
Input 1:
1
Output 1:
Sum = 0.6667

Input 2:
3
Output 2:
Sum = 1.7831

*/

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4.0 * i - 1.0);
    }

    printf("Sum = %.4lf\n", sum);

    return 0;
}
