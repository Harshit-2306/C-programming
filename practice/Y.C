#include<stdio.h>
#include<stdlib.h>
int main()
{
 int* p = (int *)calloc(2,4);
 p++;
 printf("%d",*p);
 
}