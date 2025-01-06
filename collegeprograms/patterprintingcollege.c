#include <stdio.h>
int main()
{
  int n, i, j;
  printf("enter a number : ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n-i; j++)
    {
      if (i + j == n|| n + j == n )
        printf("*");
      else
        printf(" ");
    }     
    printf("\n");
  }
  return 0;
}
