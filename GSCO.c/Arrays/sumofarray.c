#include <stdio.h>
int main()
{
 int a[5];
 int sum = 0;
 for (int i = 0; i < 5; i++)
 {
  printf("enter a number %d = ", i);
  scanf("%d", &a[i]);
 }
 for (int i = 0; i < 5; i++)
 {

  sum = sum* a[i];
 }
 printf("%d : ", sum);
 return 0;
}
