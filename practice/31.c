#include <stdio.h>
int main()
{
 int n;
 printf("enter an size of array ");
 scanf("%d", &n);
 int a[n];
 printf("enter an element of array \n");
 ;
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 for (int j = 0; j < n - 1; j++)
 {
  int smallest_index = j;
  for (int i = j + 1; i < n; i++)
  {
   if (a[i] < a[smallest_index])
   {
    smallest_index = i;
   }
  }
  int temp = a[j];
  a[j] = a[smallest_index];
  a[smallest_index] = temp;
 }
 printf("sorted array \n");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 return 0;
}