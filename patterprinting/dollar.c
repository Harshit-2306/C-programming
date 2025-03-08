#include <stdio.h>
int main()
{
 int n, i;
 scanf("%d", &n);
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n; j++)
  {
   if (i == 0 || i == n - 1 || j == n - 1 || j == 0)
   {
    if (i == j)
    {
     printf("$");
    }
    else
    {
     printf("*");
    }
   }
   else
   {
    if (i == j)
    {
     printf("$");
    }
    else
    {
     printf(" ");
    }
   }
  }
  printf("\n");
 }
 return 0;
}
