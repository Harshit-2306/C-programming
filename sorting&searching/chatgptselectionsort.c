#include <stdio.h>

// Function to print the sorted array
void printsort(int a[], int n)
{
 printf("Sorted array:\n");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]); // Add space for better readability
 }
 printf("\n");
}

// Function to perform selection sort
void selectionsort(int a[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  int smallestindex = i;
  for (int j = i + 1; j < n; j++)
  {
   if (a[j] < a[smallestindex])
   {
    smallestindex = j;
   }
  }
  // Swap the smallest element with the first unsorted element
  int temp = a[i];
  a[i] = a[smallestindex];
  a[smallestindex] = temp;
 }
}

int main()
{
 int n;

 // Read the size of the array
 printf("Enter the number of elements: ");
 scanf("%d", &n);

 // if (n <= 0) // Validate the size
 // {
 //  printf("Invalid array size!\n");
 //  return 1; // Exit with error code
 // }

 int a[n]; // Declare array after size is known

 // Read array elements
 for (int i = 0; i < n; i++)
 {
  printf("Enter element %d: ", i + 1);
  scanf("%d", &a[i]);
 }

 // Sort and print the array
 selectionsort(a, n);
 printsort(a, n);

 return 0;
}
