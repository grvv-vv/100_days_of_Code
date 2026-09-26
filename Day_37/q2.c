/*Q74: Find the transpose of a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
Transpose:
1 4
2 5
3 6

Input 2:
2 2
10 20
30 40
Output 2:
Transpose:
10 30
20 40

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

    printf("Transpose:\n");
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
