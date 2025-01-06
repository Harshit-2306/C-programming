#include <stdio.h>
int main()
{
 int n1, n2, n3;
 printf("Num 1 = ");
 scanf("%d", &n1);
 printf("NUM 2 = ");
 scanf("%d", &n2);
 printf("NUM 3 = ");
 scanf("%d", &n3);
 if (n1 > n2 && n1 > n3)
 {
  printf("the greatest number is = %d", n1);
 }
 else if (n2 > n1 && n2 > n3)
 {
  printf("the greatest number is = %d", n2);
 }
 else
 {
  printf("the greatest number is = %d", n3);
 }
 return 0;
}