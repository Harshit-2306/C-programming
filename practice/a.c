#include <stdio.h>
void print_sort(int a[], int n)
{
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 printf("\n");
}
void bubble_sort(int a[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  for (int j = 0; j < n - 1 - i; j++)
  {
   if (a[j] < a[j + 1])
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
 printf("enter a number ");
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++)
 {
  printf("enter an array [%d] ", i);
  scanf("%d", &a[i]);
 }
 bubble_sort(a, n);
 print_sort(a, n);
 return 0;
}