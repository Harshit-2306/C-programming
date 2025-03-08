#include <stdio.h>
int main()
{
 int a, b, arr[a][b];
 printf("enter a nubmer a : ");
 scanf("%d", &a);
 printf("enter a nubmer b : ");
 scanf("%d", &b);
  printf("enter a number ");
 for (int i = 0; i < a; i++)
 {
  for (int j = 0; j < b; j++)
  {
   scanf("%d",&arr[i][j]);
  }
 }
 return 0;
}