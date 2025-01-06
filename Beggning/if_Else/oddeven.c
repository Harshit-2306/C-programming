#include<stdio.h>
int main()
{
    int x;
    printf("enter a number : ");
    scanf("%d",&x);
    if(x%2==0){
        printf("even number");
     }
     if(x%2!=0){
        printf("odd number");
     }
     return 0;
}