#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n*2-1; k++)
            printf(" ");
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}















