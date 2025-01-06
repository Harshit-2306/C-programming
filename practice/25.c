#include <stdio.h>
int factorial(int n)
{
 if (n == 1)
  return 1;
 int fact = n * factorial(n - 1);
}
int main()
{
 int n;
 printf("enter a number : \n");
 scanf("%d", &n);
 int fact = factorial(n);
 printf("factorial of %d = %d", n, fact);
 return 0;
}