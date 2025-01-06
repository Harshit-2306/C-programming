#include<stdio.h>
int main()
{
 char c[50];
 gets(c);
 int l =0;
 while(c[l]!='\0')
 {
  l++;
 }
 printf("%d",c[l]);
 return 0;
}