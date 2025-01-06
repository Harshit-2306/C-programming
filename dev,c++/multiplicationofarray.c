#include <stdio.h>
int main()
{
 int r, c;
 printf("enter a number of rows : ");
 scanf("%d", &r);
 printf("enter a number of columns : ");
 scanf("%d", &c);
 int a[r][c];
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("enter an array [%d][%d] = ", i, j);
   scanf("%d", &a[i][j]);
  }
 }
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d\t", a[i][j]);
  }
  printf("\n");
 }
 printf("enter a number of rows : ");
 scanf("%d", &r);
 printf("enter a number of columns : ");
 scanf("%d", &c);
 int b[r][c];
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("enter an array [%d][%d] = ", i, j);
   scanf("%d", &b[i][j]);
  }
 }
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d\t", b[i][j]);
  }
  printf("\n");
 }
 int m[r][c];
 for (int i = 0; i < c; i++)
 {
  for (int j = 0; j < r; j++)
  {
   int t = 0;
   for (int k = 0; k < r; k++)
   {
    t += a[i][k] * b[k][j];
   }
   m[i][j]=t;
  }
 }
 printf("the multiplication of matrices are = \n");
 for(int i=0;i<r;i++)
 {
  for(int j=0;j<c;j++)
  {
   printf("%d\t",m[i][j]);
  }
  printf("\n");
 }
 return 0;
}