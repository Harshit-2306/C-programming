#include <stdio.h>
void printsort(int a[], int n)
{
 printf("sorted array: \n");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]);
 }
 printf("\n");
}
void selectionsort(int a[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  int smallestindex = i;
  for (int j = i + 1; j < n; j++)
  {
   if (a[j] < a[smallestindex])
   {
    smallestindex = j;
   }
  }
  int temp = a[i];
  a[i] = a[smallestindex];
  a[smallestindex] = temp;
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
  printf("enter an element %d = ", i + 1);
  scanf("%d", &a[i]);
 }
 selectionsort(a, n);
 printsort(a, n);
 return 0;
}