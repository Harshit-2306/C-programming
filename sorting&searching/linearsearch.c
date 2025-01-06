#include <stdio.h>
int main()
{
 int n;
 printf("enter an size of array : ");
 scanf("%d", &n);
 int a[n];
 printf("enter an array : \n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 int find;
 printf("enter an search element : ");
 scanf("%d", &find);
 for (int i = 0; i < n; i++)
 {
  if (a[i] == find)
  {
   printf("the element is found in ' %d ' position", i + 1);
   return 0;
  }
 }
 printf("The element is not found ");
 return 0;
}