#include<stdio.h>
int main()
{
 int n;
 printf("enter a number : ");
 scanf("%d",&n);
 int* a=&a[n];
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++)
 {
  printf("%p ",a);
 }
}