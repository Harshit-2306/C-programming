#include<stdio.h>
int main()
{ 
int a;
printf("enter a number : ");
scanf("%d",&a);
if(a%5!=0 && a%3!=0){
    printf("not divible by 5");
}else
printf("the number is divisble by 5 or 3");
    return 0;
}