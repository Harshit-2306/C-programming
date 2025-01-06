#include <stdio.h>

void bubblesort(int a[], int n)
{
 for (int i = 0; i < n-i; i++)
 {
  for (int j = 0; j < n - 1-i; j++)
  {
   if (a[j] > a[j + 1])
   {
    int temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
   }
  }
 }
}

void printsort(int a[], int n)
{
 printf("Sorted array: ");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 printf("\n");
}
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++)
 {
  printf("enter an array %d =  ", i);
  scanf("%d", &a[i]);
 }
 bubblesort(a, n);
 printsort(a, n);
 return 0;
}