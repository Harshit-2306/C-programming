#include <stdio.h>
int main()
{
 int a[5], i;
 for (int i = 0; i < 5; i++)
 {
  printf("enter an element %d : ", i);
  scanf("%d", &a[i]);
 }
 int max = a[0];
 for (int i = 1; i < 5; i++)
 {
  if (max < a[i])
  {
   max = a[i];
  }
 }
 printf("%d", max);
 return 0;
}