#include <stdio.h>
void bubblesort(int a[], int n)
{
 for (int i = 0; i < n - 1; i++)
 {
  for (int j = 0; j < n - i - 1; j++)
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
 printf("Enter the size of the array: ");
 scanf("%d", &n);

 // if (n <= 0)
 // {
 //  printf("Invalid array size!\n");
 //  return 1; 
 // }
 int a[n];
 for (int i = 0; i < n; i++)
 {
  printf("Enter element %d: ", i);
  scanf("%d", &a[i]);
 }
 bubblesort(a, n);
 printsort(a, n);

 return 0;
}
