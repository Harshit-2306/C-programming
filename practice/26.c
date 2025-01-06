#include <stdio.h>

void swap(int *a, int *b)
{
 int temp = *a;
 *a = *b;
 *b = temp;
}

void sortAscending(int arr[], int start, int end)
{
 for (int i = start; i < end; i++)
 {
  for (int j = i + 1; j < end; j++)
  {
   if (arr[i] > arr[j])
   {
    swap(&arr[i], &arr[j]);
   }
  }
 }
}

void sortDescending(int arr[], int start, int end)
{
 for (int i = start; i < end; i++)
 {
  for (int j = i + 1; j < end; j++)
  {
   if (arr[i] < arr[j])
   {
    swap(&arr[i], &arr[j]);
   }
  }
 }
}

int main()
{
 int n;

 printf("Enter the size of the array: ");
 scanf("%d", &n);

 int arr[n];

 printf("Enter the elements of the array:\n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &arr[i]);
 }

 int mid = n / 2;


 sortAscending(arr, 0, mid);

 sortDescending(arr, mid, n);

 printf("sorted array:\n");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", arr[i]);
 }

 return 0;
}
