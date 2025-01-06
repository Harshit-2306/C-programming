#include <stdio.h>


int binarySearch(int arr[], int size, int target)
{
 int low = 0, high = size - 1;

 while (low <= high)
 {
  int mid = low + (high - low) / 2;

  if (arr[mid] == target)
  {
   return mid;
  }
  if (arr[mid] < target)
  {
   low = mid + 1;
  }
  else
  {
   high = mid - 1;
  }
 }
 return 0;
}

int main()
{
 int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
 int size = sizeof(arr) / sizeof(arr[0]);
 int target;

 printf("Enter the number to search: ");
 scanf("%d", &target);

 int result = binarySearch(arr, size, target);

 if (result != 0)
 {
  printf("Element found at index %d\n", result);
 }
 else
 {
  printf("Element not found in the array.\n");
 }

 return 0;
}
