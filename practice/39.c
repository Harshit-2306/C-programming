#include <stdio.h>

int main()
{
 int n;
 printf("Enter the size of the array: ");
 scanf("%d", &n);

 int a[n];
 printf("Enter the elements of the array (sorted):\n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }

 int search;
 printf("Enter the element to find: ");
 scanf("%d", &search);

 int s = 0, e = n - 1;
 while (s <= e)
 {
  int mid = s + (e - s) / 2;

  if (a[mid] == search)
  {
   printf("Element %d found at index %d.\n", search, mid);
   return 0;
  }
  else if (search < a[mid])
  {
   e = mid - 1;
  }
  else
  {
   s = mid + 1;
  }
 }
 printf("Element %d not found in the array.\n", search);
 return 0;
}
