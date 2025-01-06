#include <stdio.h>
int main()
{
 int a[10];
 for (int i = 0; i < 10; i++)
 {
  printf("enter a element %d = ", i);
  scanf("%d", &a[i]);
 }
 for (int i = 0; i < 10; i++)
  if (a[i] < 35)
  {
   printf("%d", a[i]);
  }
 return 0;
}