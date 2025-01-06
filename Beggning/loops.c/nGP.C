#include <stdio.h>
int main()
{
    int i, n;
    printf("enter a number : ");
    scanf("%d", &n);
    int a=3;
    for (i=1;i<=n;i++)
    {
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}