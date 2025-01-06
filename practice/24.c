#include <stdio.h>
int main()
{
 int n;
 printf("enter an size of array : \n");
 scanf("%d", &n);
 int a[n];
 printf("enter an element of array \n");
 for (int j = 0; j < n; j++)
 {
  scanf("%d", &a[j]);
 }
 int max = a[0];
 for (int i = 0; i < n; i++)
 {
  if (max < a[i])
  {
   max = a[i];
  }
 }
 printf("maximum number = %d\n", max);
 int min = a[0];
 for (int i = 0; i < n; i++)
 {
  if (min > a[i])
  {
   min = a[i];
  }
 }
 printf("minimum number = %d ", min);
 return 0;
}