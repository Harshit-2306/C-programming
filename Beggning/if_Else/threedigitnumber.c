#include<stdio.h>
int main()
{
    int y;
    printf(" enter a number : ");
    scanf("%d",&y);
    if(y>99 && y<1000)
    {printf("it is a three digit number");
    }else
    printf("it is not a three digit number");
    return 0;

}
