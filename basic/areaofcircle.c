#include<stdio.h>
int main()
{
    int  radius;
    float area,circumference, pi =3.14;
    printf ("radius of circle = "); 
    scanf("%d",&radius);
    area = pi*radius*radius;
    printf("area of circle : %f",area);
    circumference = 2*pi*radius;
    printf("\ncircumference of circle : %f",circumference);
    return 0;
}