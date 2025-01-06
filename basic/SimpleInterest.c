#include<stdio.h>
int main()
{
    float si,p,r,t;
    printf("enter p : ");
    scanf("%f",&p);
    printf("enter r : ");
    scanf("%f",&r);
    printf("enter t : ");
    scanf("%f",&t);
    si = p*r*t/100;
    printf("simple interest : %f",si);
    return 0;
}