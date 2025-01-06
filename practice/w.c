#include <stdio.h>
int factorial(int n)
{
 if(n==1)
  return 1;
  int f =n* factorial(n-1);
  return f;
}
int main()
{
 int n;
 printf("enter a number: ");
 scanf("%d", &n);
 int f=factorial(n);
 printf("%d",f);
}