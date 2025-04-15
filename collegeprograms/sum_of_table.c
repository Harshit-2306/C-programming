#include <stdio.h>

int main()
{
 int n, i;
 int sum = 0;

 printf("Enter a number : ");
 scanf("%d", &n);


 for (i = 1; i <= 10; i++)
 {
  int product = i * n;
  printf("%d\n",product);
  
  int temp = product;
  while (temp > 0)
  {
   sum = sum + temp % 10;
   temp = temp / 10;
  }
 }
 printf("Sum = %d\n", sum);

 return 0;
}
