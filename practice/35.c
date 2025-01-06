#include <stdio.h>
int main()
{
 int n;
 printf("enter a number ");
 scanf("%d", &n);
 int a[n];
 printf("Enter an array ");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 int max = a[0];
 for (int i = 0; i < n; i++)
 {
  if (max < a[i])
  {
   max = a[i];
  }
 }
 printf("%d", max);
 return 0;
}