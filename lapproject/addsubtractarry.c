#include <stdio.h>
int main()
{
 int r, c;
 printf("enter a number of rows : ");
 scanf("%d", &r);
 printf("enter a number of columns : ");
 scanf("%d", &c);
 int arr[r][c];
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("enter an array [%d][%d] =  ", i, j);
   scanf("%d", &arr[i][j]);
  }
 }
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d \t", arr[i][j]);
  }
  printf("\n");
 }
 printf("enter a number of rows : ");
 scanf("%d", &r);
 printf("enter a number of columns : ");
 scanf("%d", &c);
 int brr[r][c];
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("enter an array [%d][%d] =  ", i, j);
   scanf("%d", &brr[i][j]);
  }
 }
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d \t", brr[i][j]);
  }
  printf("\n");
 }
 int add[r][c];
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   add[i][j] = arr[i][j] + brr[i][j];
  }
 }
 printf("addition of matrices = \n");
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d \t", add[i][j]);
  }
  printf("\n");
 }
 int sub[r][c];
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   sub[i][j] = arr[i][j] - brr[i][j];
  }
 }
 printf("subtraction of matrices = \n");
 for (int i = 0; i < r; i++)
 {
  for (int j = 0; j < c; j++)
  {
   printf("%d \t", sub[i][j]);
  }
  printf("\n");
 }
 return 0;
}
