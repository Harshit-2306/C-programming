#include<stdio.h>
int main()
{
 int r,pi,area,circumference;
 printf("enter a radius of circle : ");
 scanf("%d",&r);
 pi =3.14;
 area = pi*r*r;
 circumference = 2*pi*r;
 printf("area of circle = %d ",area);
 printf("\n");
 printf("circumference of circle = %d ",circumference);
 return 0;
}