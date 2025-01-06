#include <stdio.h>

int main()
{
 int r, c;

 // Input the dimensions of the matrices
 printf("Enter the number of rows: ");
 scanf("%d", &r);
 printf("Enter the number of columns: ");
 scanf("%d", &c);

 // Declare matrices
 int a[r][c], b[r][c], sum[r][c];

 // Input elements for the first matrix
 printf("Enter elements of matrix 1:\n");
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("Enter element a[%d][%d]: ", i, j);
   scanf("%d", &a[i][j]);
  }
 }

 // Input elements for the second matrix
 printf("Enter elements of matrix 2:\n");
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("Enter element b[%d][%d]: ", i, j);
   scanf("%d", &b[i][j]);
  }
 }

 // Perform matrix addition
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   sum[i][j] = a[i][j] + b[i][j];
  }
 }

 // Display the result matrix
 printf("Resultant matrix after addition:\n");
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d ", sum[i][j]);
  }
  printf("\n");
 }

 return 0;
}