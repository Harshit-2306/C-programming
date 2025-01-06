#include <stdio.h>
int main() {
  int n,a[10];
  printf("Enter the number : ");
   scanf("%d", &n);
{
 printf("enter an array ");
  for (int i=0;i<n;i++) 
  {
    scanf("%d", &a[i]);
  }
  for (int i=1;i<n;i++) {
    if (a[0] < a[i])
     {
      a[0] = a[i];
    }
  }
  printf("%d",a[0]);
  return 0;
}
}
