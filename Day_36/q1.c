/*Q71: Read and print a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
Matrix:
1 2 3
4 5 6

Input 2:
2 2
10 20
30 40
Output 2:
Matrix:
10 20
30 40

*/

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
