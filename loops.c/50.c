#include <stdio.h>
int main()
{
    float n;
    printf("enter a number : ");
    scanf("%f", &n);
    float a = 100;
    for (int i = 1; i <= n; i++)
    {
        printf("%f_", a);
        a =  (a)/2;
    }
    return 0;
}