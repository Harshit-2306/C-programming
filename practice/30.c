#include <stdio.h>
int main()
{
 int n;
 printf("enter size of array :");
 scanf("%d", &n);
 int a[n];
 printf("enter an element of a array ");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 for (int i = 0; i < n - 1; i++)
 {
  for (int j = 0; j < n - 1 - i; j++)
  {
   if (a[j] > a[j + 1])
   {
    int temp = a[j];
    a[j] = a[j + 1];
    a[j + 1] = temp;
   }
  }
 }
 printf("sorted array : ");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 return 0;
}