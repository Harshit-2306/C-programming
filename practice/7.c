#include <stdio.h>

int print_sort(int a[], int n)
{
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 printf("\n");
}

int bubble_sort(int a[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  for (int j = 0; j < n - 1 - i; j++)
  {
   if (a[j] > a[j + 1])
   {
    int temp = a[j];
    a[j] = a[j + 1];
    a[j + 1] = temp;
   }
  }
 }
}

int main()
{
 int n;
 printf("Enter a size of an array : \n");
 scanf("%d", &n);
 printf("enter an element of an array : \n");
 int a[n];
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 bubble_sort(a, n);
 printf("sorted_array \n");
 print_sort(a, n);
 return 0;
}