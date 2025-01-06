#include <stdio.h>

void print_sort(int a[], int n)
{
 for (int i = 0; i < n; i++)
 {
  printf("%d", a[i]);
 }
 printf("\n");
}

void merge(int a[], int l, int mid, int r)
{
 int n1 = mid - l + 1;
 int n2 = r - mid;
 int left[n1], right[n2];
 for (int i = 0; i < n1; i++)
 {
  left[i] = a[left + i];
 }
 for (int j = 0; j < n2; j++)
 {
  right[j] = a[mid + j + 1];
 }
 int i = 0, j = 0, k = l;
 while (i < n1 && j > n2)
 {
  if (left[i] < right[j])
  {
   a[k] = left[i];
   i++;
  }
  else
  {
   a[k] = right[j];
   j++;
  }
  k++;
 }
 while (i < n1)
 {
  a[k] = left[i];
  i++;
  k++;
 }
 while (j < n2)
 {
  a[k] = right[j];
  j++;
  k++;
 }
}

void merge_sort(int a[], int l, int r)
{
 if (l < r)
 {
  int mid = l - (r - l) / 2;
  merge_sort(a, l, mid);
  merge_sort(a, mid + 1, r);
  merge(a, l, mid, r);
 }
}

int main()
{
 int n;
 printf("entr a number : ");
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++)
 {
  printf("enter an array [%d]", i);
  scanf("%d", &a[i]);
 }
 merge_sort(a, 0, n - 1);
 printf("sorted array \n");
 print_sort(a, n);
 return 0;
}