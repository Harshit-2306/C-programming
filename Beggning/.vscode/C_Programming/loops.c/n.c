#include <stdio.h>
int main()
{
    int i, n;
    printf("enter a number : ");
    scanf("%d\n",&n);
    for (i = n; i <= n * 10; i = i + n)
    {
        printf("%d\n",i);
    }
    return 0;
}