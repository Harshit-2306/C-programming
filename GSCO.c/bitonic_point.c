// WAP to find the bitonic point in the array.

#include <stdio.h>
int Bitonic_point(int arr[], int n)
{
 int low = 0, high = n - 1;
 while (low <= high)
 {
  int mid = low + (high - low) / 2;
  if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
  {
   return mid;
  }
 }
}