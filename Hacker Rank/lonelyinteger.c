#include <stdio.h>

int lonelyInteger(int arr[], int size)
{
 int result = 0;

 for (int i = 0; i < size; i++)
 {
  result ^= arr[i];
 }

 return result;
}

int main()
{
 int arr[] = {1, 2, 3, 2, 1};
 int size = sizeof(arr) / sizeof(arr[0]);

 int unique = lonelyInteger(arr, size);
 printf("Lonely integer: %d\n", unique);

 return 0;
}
