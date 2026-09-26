/*Q73: Find the sum of each row of a matrix and store it in an array.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
Row sums: 6 15

Input 2:
3 2
10 20
30 40
50 60
Output 2:
Row sums: 30 70 110

*/

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Row sums: ");
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");

    return 0;
}
