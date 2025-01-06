#include <stdio.h>
int main()
{
    int i = 1;
    while (i < 101)
    {
        printf(" %d", i);
        i--;
        {
            if (i <= -100)
                break;
        }
    }
    return 0;
}