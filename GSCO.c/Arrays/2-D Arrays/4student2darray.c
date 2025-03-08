#include <stdio.h>
int main()
{
  int n;
  printf("number of student : ");
  scanf("%d", &n);
  int r;
  printf("data of student :");
  scanf("%d", &r);
  int a[n][r];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < r; j++)
    {
      printf("enter a [%d][%d] : ",i,j);
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < r; j++)
    {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}