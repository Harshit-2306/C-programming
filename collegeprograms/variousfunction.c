#include <stdio.h>
void input_matrix(int a[][10], int r, int c)
{
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("Enter value for array [%d][%d]: ", i, j);
   scanf("%d", &a[i][j]);
  }
 }
}
void display_matrix(int a[][10], int r, int c)
{
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d \t", a[i][j]);
  }
  printf("\n");
 }
}
int main()
{
 int r, c;

 printf("Enter the number of rows: ");
 scanf("%d", &r);

 printf("Enter the number of columns: ");
 scanf("%d", &c);

 int a[10][10];

 input_matrix(a, r, c);
 printf("Matrix is:\n");
 display_matrix(a, r, c);
 return 0;
}
