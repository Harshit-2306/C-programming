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
    scanf("%d", &c); if (a + b > c && b + c > a && c + a > b)
    {
        printf("it is a triangle");
    }
    else {
        printf("it is not a triangle");}
    return 0;
}