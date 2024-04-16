#include <stdio.h>

// Function to check if a matrix is binary
int isBinaryMatrix(int mat[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // If any element is not 0 or 1, return 0
            if (mat[i][j] != 0 && mat[i][j] != 1)
                return 0;
        }
    }
    // If all elements are 0 or 1, return 1
    return 1;
}

int main() {
    int rows, cols;
    int matrix[100][100];

    // Input the number of rows and columns
    printf("Enter the number of rows (max 100): ");
    scanf("%d", &rows);
    printf("Enter the number of columns (max 100): ");
    scanf("%d", &cols);

    // Input the matrix elements
    printf("Enter the elements of the matrix (0 or 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is binary
    if (isBinaryMatrix(matrix, rows, cols))
        printf("The matrix is a binary matrix.\n");
    else
        printf("The matrix is not a binary matrix.\n");

    return 0;
}