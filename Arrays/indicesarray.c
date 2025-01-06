#include <stdio.h>
int main()
{
 int a[5], i;
 int sum_even = 0;
 int sum_odd = 0;
 for (i = 0; i < 5; i++)
 {
  printf("enter an array %d ", i);
  scanf("%d", &a[i]);
 }
 for (i = 0; i < 5; i++)
  if (i % 2 == 0)
  {
   sum_even += a[i];
  }
  else
  {
   sum_odd += a[i];
  }
 //for (i = 0; i < 5; i++)
 {
  printf("%d", sum_even - sum_odd);
 }
 return 0;
}