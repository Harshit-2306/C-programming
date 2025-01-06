#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
 int *p = (int *)malloc(n * sizeof(int));
 free(p);
 int *pt = p;
 for (int i = 0; i < n; i++)
 {
  scanf("%d", &(*p));
  p++;
 }
 for (int i = 0; i < n; i++)
 {
  printf("%d ",(*pt));
  pt++;
 }
 return 0;
}