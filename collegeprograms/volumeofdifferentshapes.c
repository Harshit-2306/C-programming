#include <stdio.h>
int cylinder(float pi, int r, int he)
{
 int v = pi * r * r * he;
 return v;
}
int cuboid(int l, int b, int h)
{
 int v = l * b * h;
 return v;
}
int cube(int a)
{
 int v = a * a * a;
 return v;
}
int main()
{
 int a, l, b, h, r, he;
 float pi = 3.14;
 printf("enter a side : ");
 scanf("%d", &a);
 printf("enter a length : ");
 scanf("%d", &l);
 printf("enter a breadth : ");
 scanf("%d", &b);
 printf("enter a height : ");
 scanf("%d", &h);
 printf("enter a radius : ");
 scanf("%d", &r);
 printf("enter a height of cylinder : ");
 scanf("%d", &he);
 int v = cube(a);
 int vo = cuboid(l, b, h);
 float vol = cylinder(pi, r, he);
 printf("volume of cube = %d\n", v);
 printf("volume of cuboid = %d\n", vo);
 printf("volume of cylinder = %.0f", vol);
 return 0;
}