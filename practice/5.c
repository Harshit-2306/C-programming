#include <stdio.h>

int main()
{
 int n, find, i;

 // Input the size of the array
 printf("Enter the size of the array: ");
 scanf("%d", &n);

 int a[n]; // Declare the array

 // Input the elements of the array
 printf("Enter the elements of the array:\n");
 for (i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }

 // Input the element to be searched
 printf("Enter the element to search for: ");
 scanf("%d", &find);

 // Linear search loop
 for (i = 0; i < n; i++)
 {
  if (a[i] == find)
  {
   printf("Element found at position %d\n", i + 1); // 1-based index
   return 0;                                        // Exit the program if the element is found
  }
 }

 // If the element is not found
 printf("Element not found\n");
 return 0;
}
