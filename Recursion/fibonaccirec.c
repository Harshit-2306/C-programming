#include <stdio.h>
int fibonacci(int n)
{
 if (n == 0)
  return 0;
 if (n == 1 || n == 2)
  return 1;
 int fibo = fibonacci(n - 2) + fibonacci(n - 1);
 return fibo;
}
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
 int f = fibonacci(n);
 printf("%d", f);
 return 0;
}