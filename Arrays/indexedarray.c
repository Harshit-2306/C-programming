#include <stdio.h>
int main()
{
 int a[8], i;
 for (i = 0; i < 8; i++)
 {
  printf("enter an element %d : ", i);
  scanf("%d", &a[i]);
 }
 for (i = 0; i < 8; i++)
 if (i % 2 == 0)
 {
  a[i] += 10;
 }
 else
 {
  a[i] *= 2;
 }
 for (int i = 0; i < 8; i++)
 {
  printf("%d \n", a[i]);
 }
 return 0;
}