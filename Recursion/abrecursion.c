#include <stdio.h>
int power(int x,int y)
{
 if(y==0)
 return 1;
 int c=x*power(x,y-1);
 return c;
}
int main()
{
 int a;
 printf("enter a number : ");
 scanf("%d", &a);
 int b;
 printf("enter a power : ");
 scanf("%d", &b);
 int p = power(a, b);
 printf("%d raised to the power %d is %d",a,b,p);
 return 0;
}
