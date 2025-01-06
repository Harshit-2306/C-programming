#include <stdio.h>
int main()
{
 int n, a[10], temp;
 printf("enter a number : ");
 scanf("%d", &n);
 printf("enter an array : ");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 for (int i = 0; i, n - 1; i++)
 {
  for (int j = 0; j <= n - 1 - i; j++)
  {
   if (a[j] > a[j + 1])
   {
    temp = a[j];
    a[j] = a[j + 1];
    a[j + 1] = temp;
   }
  }
 }
 printf("sorted array : ");
 for (int i = 0; i < n; i++)
 {
  printf("%d ",a[i]);
 }
 return 0;
}