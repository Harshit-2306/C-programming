#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter a 1st number");
    scanf("%d",&a);
    printf("enter a 2nd number");
    scanf("%d",&b);
    printf("enter a 3rd number");
    scanf("%d",&c);
    if (a>b && a>c)
    {
    printf("%d is greatest", a);
    }
    if (b>c && b>a)
    {
     printf("%d is greater", b);
    }
    if (c>a && c>b)
    {
    printf("%d is greatest", c);
    }
    return 0;
}