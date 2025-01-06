#include <stdio.h>

// Function to display the array using pointers
void displayArray(int *arr, int size)
{
 printf("Array elements: ");
 for (int i = 0; i < size; i++)
 {
  printf("%d ", *(arr + i)); // Accessing using pointer arithmetic
 }
 printf("\n");
}


void modifyArray(int *arr, int size)
{
 for (int i = 0; i < size; i++)
 {
  *(arr + i) = *(arr + i) * 2; // Doubling each element using pointers
 }
}

int main()
{
 int arr[5] = {1, 2, 3, 4, 5}; // Initialize the array
 int size = sizeof(arr) / sizeof(arr[0]);

 printf("Original Array:\n");
 displayArray(arr, size); // Display the original array

 modifyArray(arr, size); // Modify the array elements

 printf("\nModified Array:\n");
 displayArray(arr, size); // Display the modified array

 return 0;
}
