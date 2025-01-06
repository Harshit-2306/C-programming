#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted arrays
int *merge(int *left, int left_size, int *right, int right_size)
{
 int *merged = (int *)malloc((left_size + right_size) * sizeof(int));
 int i = 0, j = 0, k = 0;

 // Merge elements in sorted order
 while (i < left_size && j < right_size)
 {
  if (left[i] < right[j])
  {
   merged[k++] = left[i++];
  }
  else
  {
   merged[k++] = right[j++];
  }
 }

 // Add remaining elements from left array, if any
 while (i < left_size)
 {
  merged[k++] = left[i++];
 }

 // Add remaining elements from right array, if any
 while (j < right_size)
 {
  merged[k++] = right[j++];
 }

 return merged;
}

// Recursive function for merge sort
int *merge_sort(int *arr, int size)
{
 // Base case: If the array has 1 or no elements, it is already sorted
 if (size <= 1)
 {
  int *single_element = (int *)malloc(size * sizeof(int));
  if (size == 1)
  {
   single_element[0] = arr[0];
  }
  return single_element;
 }

 // Split the array into two halves
 int mid = size / 2;

 int *left = merge_sort(arr, mid);
 int *right = merge_sort(arr + mid, size - mid);

 // Merge the sorted halves
 int *sorted = merge(left, mid, right, size - mid);

 // Free the temporary arrays
 free(left);
 free(right);

 return sorted;
}

int main()
{
 int array[] = {38, 27, 43, 3, 9, 82, 10};
 int size = sizeof(array) / sizeof(array[0]);

 // Perform merge sort
 int *sorted_array = merge_sort(array, size);

 // Print the sorted array
 printf("Sorted array: ");
 for (int i = 0; i < size; i++)
 {
  printf("%d ", sorted_array[i]);
 }
 printf("\n");

 // Free the allocated memory for the sorted array
 free(sorted_array);

 return 0;
}