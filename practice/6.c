#include <stdio.h>

void print_sort(int a[], int n)
{
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 printf("\n");
}

void swap(int *x, int *y)
{
 int temp = *x;
 *x = *y;
 *y = temp;
}

int partition(int a[], int left, int right)
{
 int pivot = a[left];
 int count = 0;

 for (int i = left + 1; i <= right; i++)
 {
  if (a[i] < pivot)
  {
   count++;
  }
 }

 int pivot_index = left + count;
 swap(&a[pivot_index], &a[left]);

 int i = left, j = right;
 while (i < pivot_index && j > pivot_index)
 {
  while (a[i] < pivot_index)
   i++;
  while (a[j] > pivot_index)
   j--;
  if (i < pivot_index && j > pivot_index)
  {
   swap(&a[i++], &a[j--]);
  }
 }
 return pivot_index;
}

void quick_sort(int a[], int left, int right)
{
 if (left > right)
  return;
 int p = partition(a, left, right);
 quick_sort(a, left, p - 1);
 quick_sort(a, p + 1, right);
}
int main()
{
 int n;
 printf("enter an size of array : ");
 scanf("%d", &n);
 int a[n];
 printf("enter an element of array : \n");
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 quick_sort(a, 0, n - 1);
 printf("sorted array \n");
 print_sort(a, n);
 return 0;
}