/*Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
3 3
1 2 3
2 4 5
3 5 6
Output 1:
Symmetric Matrix

Input 2:
2 2
1 2
3 4
Output 2:
Not a Symmetric Matrix

Input 3:
2 3
1 2 3
4 5 6
Output 3:
Not a Symmetric Matrix

*/

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int isSymmetric = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Not a Symmetric Matrix\n");
    }

    return 0;
}
