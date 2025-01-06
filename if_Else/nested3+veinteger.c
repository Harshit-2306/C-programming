#include <stdio.h>
int main()
{
    int a;
    printf("enter a 1st number");
    scanf("%d", &a);
    int b;
    printf("enter a 2nd number");
    scanf("%d", &b);
    int c;
    printf("enter a 3rd number");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greater", a);
        else
            printf("%d is greater", c);
    }
    else
    {
        if (b > c)
            printf("%d is greater", b);
        else
            printf("%d is greater", c);
    }
    return 0;
}
