#include <stdio.h>

int main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d", &n); // Removed extra space in format string

 int a[n];
 printf("Enter %d elements: ", n);
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }

 // Bubble Sort
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

 // Print sorted array
 printf("Sorted array: ");
 for (int i = 0; i < n; i++)
 {
  printf("%d ", a[i]); // Added space between elements
 }
 printf("\n");

 return 0;
}
