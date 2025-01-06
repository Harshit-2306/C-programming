#include<stdio.h>
int fibonacci(int n)
{
 if (n == 0 || n ==1)
  return 1;
 int fibo = fibonacci(n-1) + fibonacci(n - 2);
 return fibo;
}
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d", &n);
 int f = fibonacci(n);
 printf("%d",f);
 return 0;
}