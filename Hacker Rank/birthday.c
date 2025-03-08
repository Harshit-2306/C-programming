#include <stdio.h>
int main()
{
 int n;
 scanf("%d", &n);
 long int arr[n];
 for (int i = 0; i < n; i++)
 {
  scanf("%ld", &arr[i]);
 }
 long int max = arr[0];
 int a = 0;
 for (int i = 0; i < n; i++)
 {
  if (arr[i] > max)
  {
   max = arr[i];
  }
 }
 for (int i = 0; i < n; i++)
 {
  if (arr[i] == max)
  {
   a++;
  }
 }
 printf("%d", a);
 return 0;
}