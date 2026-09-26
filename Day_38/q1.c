/*Q75: Add two matrices.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
5 6
7 8
Output 1:
Sum Matrix:
6 8
10 12

Input 2:
2 3
1 1 1
2 2 2
3 3 3
4 4 4
Output 2:
Sum Matrix:
4 4 4
6 6 6

*/

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Sum Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
