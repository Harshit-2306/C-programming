#include <stdio.h>
int main()
{
    int a;
    printf("enter a  number");
    scanf("%d", &a);
    if (a % 5 == 0 || a % 3 == 0)
    {
        if (a % 15 != 0)
        
            printf("the number is divisble by 5 or 3");
        

        else
        {
            printf("number is divisble by 15");
        }
    }
    else
    {
        printf("the number is not divisble by 5 or 3");
    }
    return 0;
}