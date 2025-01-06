#include <stdio.h>
int main()
{
 int a[5], i, n, count = 0;
 printf("enter a number : ");
 scanf("%d", &n);
 for (i = 0; i < 5; i++)
 {
  printf("enter an array  %d :", i);
  scanf("%d", &a[i]);
 }
 for (i = 0; i < 5; i++)
 if (a[i] > n)
 {
  count++;
 }
 printf("%d", count);
 return 0;
}