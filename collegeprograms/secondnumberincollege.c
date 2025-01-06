#include <stdio.h>
int main()
{
 int a[5], i;
 for (i = 0; i < 5; i++)
 {
  printf("enter a number %d : ", i);
  scanf("%d", &a[i]);
 }
 int max = a[0];
 int smax = a[0];
 for (i = 0; i < 5; i++)
 {
  if (max > a[i])
  {
   smax = max;
   max = a[i];
  }
 }
 for (i = 0; i < 5; i++)
 {
  if (a[i] != max && smax > a[i])
  {
   smax = a[i];
  }
 }
 printf("%d", smax);
 return 0;
}