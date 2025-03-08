#include <stdio.h>
int main()
{
 int a[5][5], b[5][5], m[5][5];
 int r, c, i, j, k;
 printf("enter a number of rows : ");
 scanf("%d", &r);
 printf("enter a number of columns : ");
 scanf("%d", &c);
 printf("\nenter a matrices : ");
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   scanf("%d", &a[i][j]);
  }
 }
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   printf("\t%d", a[i][j]);
  }
  printf("\n");
 }
 printf("enter a number of rows of 2nd matrices : ");
 scanf("%d", &r);
 printf("enter a number of columns of 2nd matrice : ");
 scanf("%d", &c);
 printf("\nenter a matrices : ");
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   scanf("%d", &b[i][j]);
  }
 }
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   printf("\t%d", b[i][j]);
  }
  printf("\n");
 }
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   int t = 0;
   for (k = 0; k < c; k++)
   {
    t += a[i][k] * b[k][j];
   }
   m[i][j] = t;
  }
 }
 printf("result of matrices \n ");
 for (i = 0; i < r; i++)
 {
  for (j = 0; j < c; j++)
  {
   printf("\t%d", m[i][j]);
  }
  printf("\n");
 }
 return 0;
}