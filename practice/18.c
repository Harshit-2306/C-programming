#include <stdio.h>
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
 int a[n];
 printf("enter an array \n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 for (int i = 0; i < n; i++)
 {
  int curr = a[i];
  int prev = i - 1;
  while (prev >=0 && a[prev] > curr)
  {
   a[prev + 1] = a[prev];
   prev--;
  }
  a[prev+1] = curr;
 }
 printf("sorted array \n");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 return 0;
}