#include <stdio.h>
void print_sort(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
  printf("%d ",a[i]);
 }
 printf("\n");
}
void insertion_sort(int a[], int n)
{
 for (int i = 0; i < n; i++)
 {
  int curr = a[i];
  int prev = i - 1;
  while (prev >= 0 && a[prev] > curr)
  {
   a[prev + 1] = a[prev];
   prev--;
  }
  a[prev + 1] = curr;
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
  printf("enter an array [%d] : ", i);
  scanf("%d", &a[i]);
 }
 insertion_sort(a, n);
 print_sort(a, n);
 return 0;
}