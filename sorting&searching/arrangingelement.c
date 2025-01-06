#include <stdio.h>
void bubble_sort(int *arr, int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  for (int j = 0; j < n - 1 - i; j++)
  {
   if (*(arr + j) > *(arr + j + 1))
   {
    int temp = *(arr + j);
    *(arr + j) = *(arr + j + 1);
    *(arr + j + 1) = temp;
   }
  }
 }
}
void print_array(int *arr, int n)
{
 for (int i = 0; i < n; i++)
 {
  printf("%d ", *(arr + i));
 }
 printf("\n");
}

int main()
{
 int n;
 printf("Enter the number of elements: ");
 scanf("%d", &n);

 int arr[n];
 for (int i = 0; i < n; i++)
 {
  printf("Element [%d]: ", i);
  scanf("%d", &arr[i]);
 }
 bubble_sort(arr, n);
 print_array(arr, n);
 return 0;
}
