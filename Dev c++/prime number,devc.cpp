#include <stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            //break;
        }
    }
    if (n == 1)
        printf("the number is not prime or not composite");
    else if (a == 0)
        printf("the given number is prime");
    else
        printf("the given number is composite");
    return 0;
}
