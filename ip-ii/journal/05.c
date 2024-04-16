// Write a C program to check that the given matrix is a binary matrix or not using a user defined function. (Binary matrix is a matrix in which all the elements are either 0 or 1).
#include <stdio.h>

int isBinaryMatrix(int mat[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] != 0 && mat[i][j] != 1)
                return 0;
        }
    }
    return 1;
}

int main() {
    int rows, cols;
    int matrix[100][100];

    printf("Enter the number of rows (max 100): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 100): ");
    scanf("%d", &cols);

    printf("Enter the elements of the matrix (0 or 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isBinaryMatrix(matrix, rows, cols))
        printf("The matrix is a binary matrix.\n");
    else
        printf("The matrix is not a binary matrix.\n");

    return 0;
}