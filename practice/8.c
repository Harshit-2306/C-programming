#include <stdio.h>
int main()
{
 int n;
 printf("enter an size of array");
 scanf("%d", &n);
 int a[n];
 printf("enter an element of array \n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 int max = a[0];
 int smax = a[0];
 for (int i = 0; i < n; i++)
 {
  if (max > a[i])
  {
   smax = max;
   max = a[i];
  }
 }
 for (int i = 0; i < n; i++)
 {
  if (a[i] != max && smax > a[i])
  {
   smax = a[i];
  }
 }
 printf("%d", smax);
 return 0;
}