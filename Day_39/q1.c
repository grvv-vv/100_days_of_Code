/*Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 0 0
0 2 0
0 0 3
Output 1:
Diagonal elements are distinct

Input 2:
3 3
5 0 0
0 2 0
0 0 5
Output 2:
Diagonal elements are not distinct

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

    int diagSize = (rows < cols) ? rows : cols;
    int isDistinct = 1;

    for (int i = 0; i < diagSize; i++) {
        for (int j = i + 1; j < diagSize; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("Diagonal elements are distinct\n");
    } else {
        printf("Diagonal elements are not distinct\n");
    }

    return 0;
}
