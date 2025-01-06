#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("enter a age of ram :\n");
    printf("enter a age of shyam :\n");
    printf("enter a age of ajay :\n");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if (ram > shyam)
    {
        if (ram > ajay)
            printf("%d is youngest", ram);
        else
            printf("%d is youngest", ajay);
    }
    else
    {
        if (shyam > ajay)
            printf("%d is youngest", shyam);
        else
            printf("%d is youngest", ajay);
    }
    return 0;
}
