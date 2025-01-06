#include <stdio.h>


int binary_search(int a[], int n, int t)
{
 int s = 0;
 int e = n - 1;
 while (s <= e)
 {
  int mid = (s + e) / 2;
  if (a[mid] == t)
  {
   return mid;
  }
  if (a[mid] < t)
  {
   s = mid + 1;
  }
  if (t > a[mid])
  {
   e = mid - 1;
  }
 }
 return 0;
}
int main()
{
 int n;
 scanf("%d", &n);
 int a[n];
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 int t;
 scanf("%d", &t);
 int result = binary_search(a, n, t);
 if (result = !0)
 {
  printf("%d", result);
 }
 else
 {
  printf("element not found");
 }
 return 0;
}