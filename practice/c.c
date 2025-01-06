#include <stdio.h>
void print_sort(int a[], int n)
{
 for (int i = 0; i < n; i++)
 {
  printf(" %d", a[i]);
 }
 printf("\n");
}
void selection_sort(int a[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  int s = i;
  for (int j = i + 1; j < n; j++)
   if (a[j] < a[s])
   {
    s = j;
   }
  int temp = a[i];
  a[i] = a[s];
  a[s] = temp;
 }
}
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++)
 {
  printf("enter an array [%d]", i);
  scanf("%d", &a[i]);
 }
 selection_sort(a, n);
 print_sort(a, n);
 return 0;
}