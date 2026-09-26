/*Q79: Perform diagonal traversal of a matrix.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
Diagonal Traversal: 1 2 4 3 5 7 6 8 9

Input 2:
2 3
1 2 3
4 5 6
Output 2:
Diagonal Traversal: 1 2 4 3 5 6

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

    printf("Diagonal Traversal: ");
    for (int k = 0; k <= (rows + cols - 2); k++) {
        for (int i = 0; i < rows; i++) {
            int j = k - i;
            if (j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");

    return 0;
}
