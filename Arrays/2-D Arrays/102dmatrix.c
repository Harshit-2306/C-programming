#include <stdio.h>

#define MAX 100

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatricesInPlace(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int rows, int cols) {
    // Adding matrix2 to matrix1 in place
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix1[i][j] += matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Resultant Matrix after addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX];
    int rows, cols;

    // Input the size of the matrices
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Input elements of the first matrix
    printf("Input Matrix 1:\n");
    inputMatrix(matrix1, rows, cols);

    // Input elements of the second matrix
    printf("Input Matrix 2:\n");
    inputMatrix(matrix2, rows, cols);

    // Perform in-place addition of the matrices
    addMatricesInPlace(matrix1, matrix2, rows, cols);

    // Print the resultant matrix
    printMatrix(matrix1, rows, cols);

    return 0;
}
