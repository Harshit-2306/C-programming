#include <stdio.h>
int main()
{
    int a = 1;
    // for(int a=1;a<=10;a++)
    while(a<=10)
    {
        if (a == 3)
        {
            break;
        }
        printf("prints = %d\n", a);
        a++;
    }
    printf("outside loop");
    return 0;
}
