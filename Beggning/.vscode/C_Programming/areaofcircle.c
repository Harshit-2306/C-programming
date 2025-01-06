#include<stdio.h>
int main()
{
    float radius;
    float pi =3.14;
    printf ("radius of circle \n"); 
    scanf("%f",&radius);
    float area = pi*radius*radius;
    printf("area of circle : %f",area);
    return 0;
}