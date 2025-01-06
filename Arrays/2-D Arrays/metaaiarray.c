
#include <stdio.h>

// Function to print matrix
void printMatrix(int matrix[10][10], int row, int col)
{
 for (int i = 0; i < row; i++)
 {
  for (int j = 0; j < col; j++)
  {
   printf("%d ", matrix[i][j]);
  }
  printf("\n");
 }
}

// Function to add two matrices
void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int row, int col)
{
 for (int i = 0; i < row; i++)
 {
  for (int j = 0; j < col; j++)
  {
   result[i][j] = matrix1[i][j] + matrix2[i][j];
  }
 }
}

int main()
{
 int matrix1[10][10], matrix2[10][10], result[10][10];
 int row1, col1, row2, col2;

 // Input dimensions of matrix 1
 printf("Enter rows for Matrix 1: ");
 scanf("%d", &row1);
 printf("Enter columns for Matrix 1: ");
 scanf("%d", &col1);

 // Input elements of matrix 1
 printf("Enter elements of Matrix 1:\n");
 for (int i = 0; i < row1; i++)
 {
  for (int j = 0; j < col1; j++)
  {
   scanf("%d", &matrix1[i][j]);
  }
 }

 // Input dimensions of matrix 2
 printf("Enter rows for Matrix 2: ");
 scanf("%d", &row2);
 printf("Enter columns for Matrix 2: ");
 scanf("%d", &col2);

 // Check if matrices can be added
 

 // Input elements of matrix 2
 printf("Enter elements of Matrix 2:\n");
 for (int i = 0; i < row2; i++)
 {
  for (int j = 0; j < col2; j++)
  {
   scanf("%d", &matrix2[i][j]);
  }
 }
 if (row1 != row2 || col1 != col2)
 {
  printf("Matrices cannot be added.\n");
  return 0;
 }

 // Add matrices
 addMatrices(matrix1, matrix2, result, row1, col1);

 // Print result
 printf("Matrix 1:\n");
 printMatrix(matrix1, row1, col1);
 printf("Matrix 2:\n");
 printMatrix(matrix2, row2, col2);
 printf("Resultant Matrix:\n");
 printMatrix(result, row1, col1);

 return 0;
}
