#include <stdio.h>
int main()
{
 int n,i,j,k;
 printf("enter a number : ");
 scanf("%d", &n);
 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < n-i; j++)
   printf(" ");
  {
   for (int k = 0; k < 2*i-1; k++)
   {
    printf("%d",i);
   }
   printf("\n");
  }
 }
 return 0;
}