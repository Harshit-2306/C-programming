#include <stdio.h>

int main()
{
 int n, search, left, right;

 // Input the size of the array
 printf("Enter the size of the array: ");
 scanf("%d", &n);

 int a[n]; // Declare the array

 // Input the elements of the array
 printf("Enter the elements of the array in sorted order:\n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }

 // Input the element to be searched
 printf("Enter the element to search for: ");
 scanf("%d", &search);

 left = 0;
 right = n - 1;

 // Binary search loop
 while (left <= right)
 {
  int mid = (left + right) / 2;

  if (search > a[mid])
  {
   left = mid + 1; // Move right
  }
  else if (search < a[mid])
  {
   right = mid - 1; // Move left
  }
  else
  {
   printf("Element found at index %d\n", mid);
   return 0; // Exit the program
  }
 }

 // If the element is not found
 printf("Element not found\n");
 return 0;
}
