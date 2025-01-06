#include <stdio.h>
int main()
{
 int n, search, left, right;

 printf("enter a size of array : ");
 scanf("%d", &n);

 int a[n];

 printf("enter an elements of array : \n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d",&a[i]);
 }

 printf("enter an element found : ");
 scanf("%d", &search);

 left = 0;
 right = n - 1;

 while (left <= right)
 {
  int mid = (left + right) / 2;
  if (search > a[mid])
  {
   left = mid+1;
  }
  else if (search < a[mid])
  {
   right = mid-1;
  }
  else
  {
   printf("element found at %d", mid++);
   return 0;
  }
 }
  printf("number not found ");
 return 0;
}