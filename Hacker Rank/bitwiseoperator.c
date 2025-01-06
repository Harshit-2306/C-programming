#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
 int max_and = 0, max_or = 0, max_xor = 0;
 for (int i = 1; i <= n; i++)
 {
  for (int j = i + 1; j <= n; j++)
  {
   int and = i & j;
   int or = i | j;
   int xor = i ^ j;
   if (and> max_and && and< k)
   {
    max_and = and;
   }
   if (or > max_or && or < k)
   {
    max_or = or ;
   }
   if (xor> max_xor && xor < k)
   {
    max_xor = xor;
   }
  }
 }
 printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main()
{
 int n, k;
 printf("enter an n = ");
 scanf(" %d", &n);
 printf("enter an k = ");
 scanf("%d", &k);
 calculate_the_maximum(n, k);

 return 0;
}
