/*Q78: Find the sum of main diagonal elements for a square matrix.


Sample Test Cases:
Input 1:
3
1 2 3
4 5 6
7 8 9
Output 1:
Sum of main diagonal elements = 15

Input 2:
2
10 20
30 40
Output 2:
Sum of main diagonal elements = 50

*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
