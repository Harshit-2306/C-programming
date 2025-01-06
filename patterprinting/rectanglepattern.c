#include <stdio.h>
int main()
{
    int l, b;
    printf("enter a length : ");
    scanf("%d", &l);
    printf("enter a breadth : ");
    scanf("%d", &b);
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            int a = 2 * (l + b);
            if (j <= i && i == l)
                printf("*");
            else
                printf("#");
        }
        printf("\n");
    }
    return 0;
}
