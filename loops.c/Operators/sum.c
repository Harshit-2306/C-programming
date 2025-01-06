#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    int sum = 0;
    int last_digit = 0;
    while (n != 0)
    {
        last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }
    printf("the sum of digit %d",sum);

    return 0;
}