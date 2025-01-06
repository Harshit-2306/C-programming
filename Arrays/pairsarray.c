#include <stdio.h>
int main()
{
 int a[8], i, n;
 printf("enter a number : ");
 scanf("%d",&n);
 int count = 0;
 for (i = 0; i < 8; i++)
 {
  printf("enter a number %d :", i);
  scanf("%d", &a[i]);
 }
 for (i = 0; i < 8; i++) 
 {
  for (int j = i + 1; j < 8; j++)
  {
   if (a[i]+a[j] == n)
   {
    count++;
    printf("%d,%d\n",a[i],a[j]);
   }
  }
 }
 printf("No of pairs are '%d'", count);
 return 0;
}