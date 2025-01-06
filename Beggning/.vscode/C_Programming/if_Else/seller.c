#include<stdio.h>
int main()
{
    int cp;
    printf("enter a cost price : ");
    scanf("%d",&cp);
    int sp;
    printf("enter a selling price : ");
    scanf("%d",&sp);
    if(sp>cp){
    printf("PROFIT");
    }if(cp>sp)
    {
    printf("LOSS");
    }
    if(sp==cp)
    {printf(" no profit ,no loss");}
    return 0;
}