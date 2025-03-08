#include <stdio.h>
int main()
{
 int r1, c1, r2, c2;
 printf("enter a number of rows of matrices 1 : ");
 scanf("%d", &r1);
 printf("enter a number of columns of matrices 1 : ");
 scanf("%d", &c1);
 int a[r1][c1];
 printf("element of matrices 1 : \n");
 for (int i = 0; i < r1; i++)
 {
  for (int j = 0; j < c1; j++)
  {
   scanf("%d", &a[i][j]);
  }
 }
 for (int i = 0; i < r1; i++)
 {
  for (int j = 0; j < c1; j++)
  {
   printf("%d  ", a[i][j]);
  }
  printf("\n");
 }
 printf("enter a number of rows of matrices 2 : ");
 scanf("%d", &r2);
 printf("enter a number of columns of matrices 2 : ");
 scanf("%d", &c2);
 int b[r2][c2];
 printf("element of matrices 2 : \n");
 for (int i = 0; i < r2; i++)
 {
  for (int j = 0; j < c2; j++)
  {
   scanf("%d", &b[i][j]);
  }
 }
 for (int i = 0; i < r2; i++)
 {
  for (int j = 0; j < c2; j++)
  {
   printf("%d ", b[i][j]);
  }
  printf("\n");
 }
 int sum[r2][c2];
 {
  for (int i = 0; i < r1; i++)
  {
   for (int j = 0; j < c1; j++)
   {
    sum[i][j] = a[i][j] + b[i][j];
   }
  }
 }
 printf("sum of thr matrices are = \n");
 for (int i = 0; i < r1; i++)
 {
  for (int j = 0; j < c1; j++)
  {
   printf("%d ", sum[i][j]);
  }
  printf("\n");
 }
 return 0;
}
