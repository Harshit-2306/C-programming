#include <stdio.h>
int main()
{
    int n, j;
    printf("enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++)
    {
        int a=1;
        for (int j = 1; j <= i-1; j++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}