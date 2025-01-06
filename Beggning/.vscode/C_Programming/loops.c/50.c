#include<stdio.h>
int main()
{
    float n;
    printf("enter a number");
    scanf("%f",&n);
    float a = 100;
    for(int i=1;i<=n;i++)
    {printf("%f",a);
    a=1/2*(a-n);
    }
    return 0;
}