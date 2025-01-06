#include<stdio.h>
int main()
{
    int a;
    printf("enter a number : \n");
    scanf("%d",&a);
    if(a%5==0 ){
    printf("number is divisble by 5");}
    if(a%3==0){
    printf("number is divisble by 3");
    }
    return 0;
}