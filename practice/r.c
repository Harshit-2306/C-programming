#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n)
{
 if (n == 0)
  return 0;
 if (n == 1)
  return 1;
 return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciUpTo(int n)
{
 int i = 0;
 int fib;

 printf("Fibonacci Series up to %d: ", n);
 while (1)
 {
  fib = fibonacci(i);
  if (fib > n)
   break;
  printf("%d ", fib);
  i++;
 }
 printf("\n");
}

int main()
{
 int num;
 printf("Enter a number to print the Fibonacci series up to that number: ");
 scanf("%d", &num);

 if (num < 0)
 {
  printf("Please enter a non-negative integer.\n");
 }
 else
 {
  printFibonacciUpTo(num);
 }

 return 0;
}
