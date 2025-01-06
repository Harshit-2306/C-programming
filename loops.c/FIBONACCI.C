#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    int a = 1;
    int b = 2;
    int sum = 0;
    for (int i = 1; i <= n - 3; i++)
    {
        sum = a + b;//0,1,1,2,3,5,8,13........
        a = b;
        b = sum;
    }
    printf("%d", sum);
    return 0;
} 