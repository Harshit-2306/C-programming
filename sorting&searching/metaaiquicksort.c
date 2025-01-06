#include <stdio.h>

void print(int a[], int n)
{
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 printf("\n");
}

// Function to swap two elements
void swap(int *x, int *y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}

// Partition function
int partition(int a[], int s, int e)
{
 int pivot = a[s];
 int count = 0;

 for (int i = s + 1; i <= e; i++)
 { // Correct the condition to '<='
  if (a[i] < pivot)
  {
   count++;
  }
 }

 int pivot_index = s + count;
 swap(&a[pivot_index], &a[s]);

 int i = s, j = e;
 while (i < pivot_index && j > pivot_index)
 {
  while (a[i] < pivot)
   i++;
  while (a[j] > pivot)
   j--;
  if (i < pivot_index && j > pivot_index)
  {
   swap(&a[i++], &a[j--]);
  }
 }
 return pivot_index;
}

// Quick Sort function
void quick_sort(int a[], int s, int e)
{
 if (s >= e)
  return;

 int p = partition(a, s, e);
 quick_sort(a, s, p - 1);
 quick_sort(a, p + 1, e);
}

int main()
{
 int n;
 printf("Enter the number of elements: ");
 scanf("%d", &n);

 int a[n];
 for (int i = 0; i < n; i++)
 {
  printf("Enter element a[%d]: ", i);
  scanf("%d", &a[i]);
 }

 quick_sort(a, 0, n - 1);

 printf("Sorted array:\n");
 print(a, n);

 return 0;
}
